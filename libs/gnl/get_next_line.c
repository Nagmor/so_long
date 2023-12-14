/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:39:06 by nagmor            #+#    #+#             */
/*   Updated: 2023/11/02 17:34:23 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_fd_str(int fd, char *reminder)
{
	char	*buffer;
	char	*temp;
	int		nbytes;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	nbytes = 1;
	while (!ft_strchr(reminder, '\n') && nbytes != 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes == -1)
			break ;
		buffer[nbytes] = '\0';
		temp = ft_strjoin(reminder, buffer);
		free(reminder);
		reminder = temp;
	}
	free(buffer);
	if ((nbytes == 0 && !*reminder) || nbytes == -1)
	{
		free(reminder);
		return (NULL);
	}
	return (reminder);
}

int	ft_get_str_len_type(char *reminder, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (reminder[i] && reminder[i] != '\n')
			i++;
	}
	else
	{
		while (reminder[i])
			i++;
	}
	return (i);
}

char	*ft_clear_reminder(char *reminder)
{
	char	*new_reminder;
	char	*rtn;
	int		i;

	i = 0;
	while (reminder[i] && reminder[i] != '\n')
		i++;
	if (!reminder[i])
	{
		free(reminder);
		return (NULL);
	}
	new_reminder = (char *) malloc((ft_get_str_len_type(reminder, 2) + 1 - i)
			* sizeof(char));
	if (!new_reminder)
		return (NULL);
	rtn = new_reminder;
	i++;
	while (reminder[i])
		*new_reminder++ = reminder[i++];
	*new_reminder = '\0';
	free(reminder);
	return (rtn);
}

char	*ft_get_return_line(char *reminder)
{
	char	*str;
	int		line_len;
	int		i;

	line_len = ft_get_str_len_type(reminder, 1);
	str = (char *) malloc((line_len + 2) * sizeof(char));
	i = 0;
	if (!str)
		return (NULL);
	while (reminder[i] && reminder[i] != '\n')
	{
		str[i] = reminder[i];
		i++;
	}
	str[i] = '\0';
	if (reminder[i] == '\n')
		str[i] = '\n';
	str[i + 1] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*reminder[1024];

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!reminder[fd])
		reminder[fd] = ft_strdup("");
	reminder[fd] = ft_read_fd_str(fd, reminder[fd]);
	if (!reminder[fd])
		return (NULL);
	str = ft_get_return_line(reminder[fd]);
	if (!str)
	{
		free(reminder[fd]);
		return (NULL);
	}
	reminder[fd] = ft_clear_reminder(reminder[fd]);
	return (str);
}

/*int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*test;

	fd1 = 1;
	fd2 = 2;
	fd3 = 3;
	printf("%d\n", BUFFER_SIZE);	
	test = get_next_line(fd1);
	printf("%s", test);
	free(test);
	test = get_next_line(fd2);
	printf("%s", test);
	free(test);
	test = get_next_line(fd3);
	printf("%s", test);
	free(test);
	test = get_next_line(fd1);
	printf("%s", test);
	free(test);
	test = get_next_line(fd2);
	printf("%s", test);
	free(test);
	test = get_next_line(fd3);
	printf("%s", test);
	free(test);
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/
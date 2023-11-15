/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:55:55 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/19 11:19:57 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchar(char c, char const *list)
{
	while (*list)
	{
		if (*list == c)
			return (1);
		list++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	char	*rtn;
	int		len;
	int		count;

	len = ft_strlen(s1) - 1;
	count = 0;
	while (ft_checkchar(s1[count], set) && s1[count] != '\0')
		count++;
	while (ft_checkchar(s1[len], set) && len > count)
		len--;
	cpy = (char *) malloc(((len - count) + 1) * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	rtn = cpy;
	while (count <= len)
		*cpy++ = s1[count++];
	*cpy = '\0';
	return (rtn);
}
/*int	main(int argc, char **argv)
{
	char	*test;

	test = ft_strtrim(argv[1], argv[2]);
	printf("%s\n", test);
	free(test);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:33:42 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/17 11:41:26 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*rtn;
	size_t	size;

	size = ft_strlen(s1);
	ptr = malloc(1 + size * sizeof(char));
	if (!ptr)
		return (NULL);
	rtn = ptr;
	while (size--)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	*ptr = '\0';
	return (rtn);
}

/*int	main(int argc, char **argv)
{
	char	*test1;
	char	*test2;

	if (argc > 1)
	{
		test1 = strdup(argv[1]);
		test2 = ft_strdup(argv[1]);
		printf("classic : %s\nperso : %s\n", test1, test2);
		free(test1);
		free(test2);
	}
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:29:47 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/19 10:55:30 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		argv++;
		printf("classic : %s\nperso : %s\n", strchr("teste", 'e'),
		ft_strchr("teste", 'e'));
	}
	return (0);
}*/
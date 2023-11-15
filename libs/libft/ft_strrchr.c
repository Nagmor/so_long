/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:50:23 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/18 13:04:00 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = 0;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == '\0' && !*s)
		return ((char *) s);
	return (p);
}

/*int	main(int argc, char **argv)
{
	const char	*test = "teste";
	int			c;

	c = 'e';
	if (argc > 0)
	{
		argv++;
		printf("classic : %p\nperso : %p\n", strrchr(test,c), 
		ft_strrchr(test,c));
	}
	return (0);
}*/

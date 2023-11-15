/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:37:53 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 09:55:30 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		printf("classic : %lu\nperso : %lu\n", strlen(*argv), ft_strlen(*argv)); 
	}
	return (0);
}*/
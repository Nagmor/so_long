/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:20:55 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/19 10:55:34 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2 || !*s1 || !*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("classic : %d\nperso : %d\n", strncmp(&argv[1][0], &argv[2][0], 
		atoi(argv[3])), ft_strncmp(&argv[1][0], &argv[2][0], atoi(argv[3])));
	}
	return (0);
}*/

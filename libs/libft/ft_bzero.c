/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:09:20 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 11:22:19 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr = '\0';
		ptr++;
	}
}

/*int	main(int argc, char **argv)
{
	char	str1[27] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[27] = "abcdefghijklmnopqrstuvwxyz";
	int	i = 27;
	int	j = 27;

	if (argc > 1)
	{
		bzero(str1, atoi(argv[1]));
		ft_bzero(str2, atoi(argv[1]));
		printf("classic : ");
		while (i--)
		{
			printf("%c", str1[i]);
		}
		printf("\nperso : ");
		while (j--)
		{
			printf("%c", str2[j]);
		}
		printf("\n");
	}
	return (0);
}*/
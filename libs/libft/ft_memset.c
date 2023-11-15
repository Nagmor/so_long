/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:25:38 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 10:38:22 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}

/*int	main(int argc, char **argv)
{
	if (argc > 3)
	{
		printf("classic : %s\n perso : %s\n",
		memset(argv[1], argv[2][0], atoi(argv[3])), 
		ft_memset(argv[1], argv[2][0], atoi(argv[3])));
	}
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:48:29 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/18 12:56:17 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (!src && !dst)
		return (NULL);
	ptr_dst = dst;
	ptr_src = src;
	while (n--)
	{
		*ptr_dst = *ptr_src;
		ptr_dst++;
		ptr_src++;
	}
	return (dst);
}
/*int	main(int argc, char **argv)
{
	if (argc > 4)
	{
		memcpy(argv[1], argv[3], atoi(argv[4]));
		ft_memcpy(argv[2], argv[3], atoi(argv[4]));
		printf("classic : %s\nperso : %s\n", argv[1], argv[2]);
	}
	return (0);
}*/
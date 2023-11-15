/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:17:47 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/17 12:05:21 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize <= 0)
		return (len);
	dstsize--;
	while (dstsize-- > 0 && *src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (len);
}

/*int	main(void)
{
	char dest1[20] = "pqrstuvwxyz";
	const char src1[20] = "abcd";
	char dest2[20] = "pqrstuvwxyz";
	const char src2[20] = "abcd";
	size_t	dstsize = 0;	
	printf("classic : %s|%lu\nperso : %s|%zu\n", dest1, 
	strlcpy(dest1, src1, dstsize), dest2, ft_strlcpy(dest2, src2, dstsize));
	return (0);
}*/
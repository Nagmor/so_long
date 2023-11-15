/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:39:43 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/17 15:23:42 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;

	dstlen = 0;
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen == dstsize)
		return (dstlen + ft_strlen(src));
	while (*src && dstlen != dstsize - 1)
	{
		dst[dstlen] = *src;
		src++;
		dstlen++;
	}
	if (dstlen != dstsize)
		dst[dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}

/*int	main(int argc, char **argv)
{
	char dest1[15] = "pqrs";
	const char src1[10] = "abcdefghi";
	char dest2[15] = "pqrs";
	const char src2[10] = "abcdefghi";
	size_t	dstsize = 11;	
	//size_t count1 = strlcat("pqrs", "abcdefghi", dstsize);
	size_t count2 = ft_strlcat(dest2, src2, 11);
	printf("perso : %s|%zu\n", dest2, count2);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:14:00 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/23 10:41:29 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*rtn;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (str_len < start)
	{
		str = (char *) malloc(1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (str_len - start < len)
		str = (char *) malloc((str_len - start) * sizeof(char) + 1);
	else
		str = (char *) malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	rtn = str;
	s += start;
	while (len-- > 0 && *s)
		*str++ = *s++;
	*str = '\0';
	return (rtn);
}

/*int	main(int argc, char **argv)
{
	char	*test;

	test = ft_substr("hola", 5, 6);
	if(test)
	{
		printf("%s\noui\n", test);
		free(test);
	} else {
		printf("alloc fail");
	}			
	return (0);
}*/
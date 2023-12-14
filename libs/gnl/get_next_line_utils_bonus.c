/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:25:44 by nagmor            #+#    #+#             */
/*   Updated: 2023/11/02 17:36:32 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	char	*rtn;

	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	rtn = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (rtn);
}

int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}

char	*ft_strdup(char *s1)
{
	char	*ptr;
	char	*rtn;
	size_t	size;

	size = ft_strlen(s1);
	ptr = malloc(1 + size * sizeof(char));
	if (!ptr)
		return (NULL);
	rtn = ptr;
	while (size--)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	*ptr = '\0';
	return (rtn);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			len;
	unsigned char	*rtn;

	len = count * size;
	ptr = malloc(len);
	rtn = ptr;
	if (!ptr)
		return (NULL);
	while (len--)
	{
		*ptr = 0;
		ptr++;
	}
	return (rtn);
}

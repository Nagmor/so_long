/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:12:50 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/20 15:33:17 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	rtn = (char *) malloc((i + 1) * sizeof(char));
	if (!rtn)
		return (NULL);
	i = 0;
	while (*s)
	{
		rtn[i] = f(i, *s);
		i++;
		s++;
	}
	rtn[i] = '\0';
	return (rtn);
}

/*int main(int argc, char **argv)
{
	return (0);
}*/
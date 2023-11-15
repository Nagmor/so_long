/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:11:29 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 09:56:35 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		printf("classic : %c\nperso : %c\n", toupper(**argv), ft_toupper(**argv));
	}
	return (0);
}*/

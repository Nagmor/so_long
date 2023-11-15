/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:18:07 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 09:55:35 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	ch;
	ch = 0x80;
	if (argc > 1)
	{
		argv++;
		printf("classic : %d\n perso : %d\n", isascii(ch), ft_isascii(ch));
	}
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:27:41 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/17 11:48:01 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	char	a;
	if (argc > 1)
	{
		argv++;
		a = atoi(*argv);
		printf("classic : %d\nperso : %d\n%c\n", isprint(a), isprint(a), a);
	}
	return (0);
}*/

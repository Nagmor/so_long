/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:36:57 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 09:55:41 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n <= '9' && n >= '0')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("oui : %d || non : %d\n", isdigit('4'), isdigit('a'));
	printf("oui : %d || non : %d\n", ft_isdigit('3'), ft_isdigit('b'));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:12:59 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/23 10:44:36 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_to_char_len(int n)
{
	if (n > 0)
		return (1 + int_to_char_len(n / 10));
	return (0);
}

static void	ft_putchar(char *nbr, long int number, int len, int signe)
{
	nbr[len--] = '\0';
	if (signe)
		nbr[0] = '-';
	while (number)
	{
		if (signe == 2)
		{
			signe = 0;
			nbr[len--] = ((number % 10) + 1) + '0';
		}
		else
			nbr[len--] = (number % 10) + '0';
		number /= 10;
	}
}

static int	check_signe(int *n, int *len)
{
	int	signe;

	signe = 0;
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			signe = 2;
			*n += 1;
		}
		else
			signe = 1;
		*len = 1;
		*n *= -1;
	}
	return (signe);
}

char	*ft_itoa(int n)
{
	int				signe;
	int				len;
	char			*nbr;

	if (n == 0)
	{
		nbr = (char *) malloc(2 * sizeof(char));
		if (!nbr)
			return (0);
		nbr[0] = '0';
		nbr[1] = '\0';
		return (nbr);
	}
	signe = 0;
	len = 0;
	signe = check_signe(&n, &len);
	len += int_to_char_len(n);
	nbr = (char *) malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	ft_putchar(nbr, n, len, signe);
	return (nbr);
}

/*int	main(int argc, char **argv)
{
	char	*nbr;
	
	nbr = ft_itoa(atoi(argv[1]));
	printf("%s\n", nbr);
	return (0);
}*/
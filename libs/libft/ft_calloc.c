/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:56:06 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/17 10:33:04 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*int	main(int argc, char **argv)
{
	int	i;
	int	*array;

	array = (int*) ft_calloc(5, sizeof (int));
	if (!array)
	{
		printf("Échec d'allocation de mémoire.\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		if (array[i] != 0)
		{
			printf("Erreur: array[%d] n'est pas initialisé à zéro!\n", i);
			return (1);
		}
	}
	printf("La mémoire est correctement initialisée à zéro.\n");
	for (i = 0; i < 5; i++)
	{
		array[i] = i;
		printf("array[%d] = %d\n", i, array[i]);
	}
	free(array);
	return (0);
}*/
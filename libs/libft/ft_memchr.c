/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgasser <mgasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:13:43 by mgasser           #+#    #+#             */
/*   Updated: 2023/10/16 10:25:05 by mgasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc > 3)
    {
        size_t len = atoi(argv[3]);
        char *result_classic = memchr(argv[1], argv[2][0], len);
        char *result_perso = ft_memchr(argv[1], argv[2][0], len);
        
        printf("classic : %p\nperso : %p\n", (void *)
		result_classic, (void *)result_perso);
        
        if (result_classic == result_perso)
        {
            printf("Les deux fonctions retournent le même résultat.\n");
        }
        else
        {
            printf("Les fonctions retournent des résultats différents.\n");
        }
    }
    else
    {
        printf("Utilisation : %s <chaîne> <caractère> <longueur>\n", argv[0]);
    }
    return (0);
}*/
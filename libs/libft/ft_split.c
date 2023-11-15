/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:21:23 by nagmor            #+#    #+#             */
/*   Updated: 2023/10/20 10:09:14 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	**ft_free_str(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (0);
}

static void	ft_putstr(char *word, char const *s, int i, int len)
{
	int	count;

	count = 0;
	while (len > 0)
	{
		word[count] = s[i - len];
		len--;
		count++;
	}
	word[count] = '\0';
}

static char	**ft_split_all(char **tab, int words, char const *s, char c)
{
	int	i;
	int	word;
	int	len;

	i = 0;
	word = 0;
	len = 0;
	while (word < words)
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		tab[word] = (char *) malloc((len + 1) * sizeof(char));
		if (!tab[word])
			return (ft_free_str(tab, word));
		ft_putstr(tab[word], s, i, len);
		len = 0;
		word++;
	}
	tab[word] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = ft_counter_words(s, c);
	tab = (char **) malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = ft_split_all(tab, words, s, c);
	return (tab);
}
/*int	main(int argc, char **argv)
{
	char	**test;
	int		i;

	test = ft_split(argv[1], argv[2][0]);
	i = 0;
	while(test[i])
	{
		printf("mot : %s\n", test[i]);
		i++;
	}
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:52:20 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/20 16:25:36 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		if (j > 0)
			count++;
		j = 0;
		if (s[i])
			i++;
	}
	return (count);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_cursor_eq(char const *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	ft_cursor_df(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		x;
	int		start;
	int		end;

	x = 0;
	i = 0;
	end = 0;
	tab = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (x < ft_count_words(s, c))
	{
		start = ft_cursor_eq(s, c, i);
		i = ft_cursor_df(s, c, start);
		end = i - start;
		tab[x] = ft_substr(s, start, end);
		if (!tab[x])
			return (ft_free(tab));
		x++;
	}
	tab[x] = 0;
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char **tab;
// 	char *str = "xxxxxxxxhello!";
// 	char c = 'x';
// 	int size = 0;
// 	int i;

// 	tab = ft_split(str, c);

// 	size = ft_count_words(str, c);
// 	printf("cw = %d\n", size);
// 	i = 0;
// 	while (tab && tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	ft_free(tab);
// 	//printf("%s\n", tab[i]);
// 	return (0);
// }
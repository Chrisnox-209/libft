/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:30:46 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:41:33 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_count_before(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (s1[i])
	{
		if (ft_check_char(s1[i], set) == 1)
			start++;
		else
			break ;
		i++;
	}
	return (start);
}

static size_t	ft_count_after(char const *s1, char const *set)
{
	size_t	i;
	size_t	size_s1;
	size_t	end;

	end = 0;
	size_s1 = ft_strlen(s1);
	i = size_s1 - 1;
	while (s1[i])
	{
		if (ft_check_char(s1[i], set) == 1)
			end++;
		else
			break ;
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	size_str;
	char	*str;

	i = 0;
	if (!set)
		return (NULL);
	start = ft_count_before(s1, set);
	end = ft_count_after(s1, set);
	if (start + end >= ft_strlen(s1))
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	size_str = ft_strlen(s1) - (start + end);
	str = malloc(size_str * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, size_str + 1);
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*result;
// 	char	*str2;
// 	char	*result2;
// 	char	*str3;
// 	char	*result3;
// 	char	*str4;
// 	char	*result4;
// 	char	*result5;

// 	str = "  hello  ";
// 	result = ft_strtrim(str, " ");
// 	printf("Result: '%s'\n", result);
// 	str2 = "0xx4x2xx";
// 	result2 = ft_strtrim(str2, "x0");
// 	printf("SResult: '%s'\n", result2);
// 	str3 = "abcde";
// 	result3 = ft_strtrim(str3, "a");
// 	printf("Result: '%s'\n", result3);
// 	str4 = "cbcb";
// 	result4 = ft_strtrim(str4, "cb");
// 	printf("Result: '%s'\n", result4);	
// 	result5 = ft_strtrim("", "");
// 	printf("Result: '%s'\n", result5);	
// }

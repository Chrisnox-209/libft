/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:33:20 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/12 01:36:03 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	//	char	src[] = "ABC";
// 	//	char	dest[] = "ABD";
// 	//	printf("%d", ft_strncmp(src, dest, 3));
// 	//	printf("%d", ft_strncmp("123457", "123456", 3));
// 	//	printf("%d", ft_strncmp("test\200", "test\0", 6));
// 	//	printf("%d", ft_strncmp("abcdX", "abcdY", 4));
// 	printf("%d", ft_strncmp("abc", "abc", 7));
// 	return (0);
// }

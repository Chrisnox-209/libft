/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:54:07 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:41:54 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = 0;
	while (s[j])
		j++;
	while (j >= 0)
	{
		if (s[j] == (unsigned char)c)
		{
			return ((char *)&s[j]);
		}
		j--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[j]);
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char tab[] = "Je Test Le Bordel !!";
// 	int c = 'e';
// 	printf("%s", ft_strrchr(tab, c));

// 	return (0);
// }

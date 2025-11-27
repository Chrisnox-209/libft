/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:19:01 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/25 22:37:39 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list *maillion_un = ft_lstnew("Hello World !");
// 	t_list *maillion_un2 = ft_lstnew("test");
// 	maillion_un->next = maillion_un2;
// 	printf("%s\n", (char *)maillion_un->content);
// 	return (0);
// }
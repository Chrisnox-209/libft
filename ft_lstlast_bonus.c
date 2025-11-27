/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:22:13 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:54:33 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end_node;

	end_node = lst;
	if (end_node == NULL)
		return (NULL);
	while (end_node->next != NULL)
		end_node = end_node->next;
	return (end_node);
}

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew("Hello World !");
// 	t_list *node2 = ft_lstnew("test");
// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node2);

// 	printf("%s\n", (char *)ft_lstlast(lst)->content);
// 	return (0);
// }
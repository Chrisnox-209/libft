/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:34:46 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/26 13:58:35 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = *lst;
	tmp = NULL;
	if (!lst || !*lst || !del)
		return ;
	while (node != NULL)
	{
		tmp = node->next;
		ft_lstdelone(node, del);
		node = tmp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list *lst;
// 	lst = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("Hello World !"));
// 	t_list *node2 = ft_lstnew(ft_strdup("je"));
// 	t_list *node3 = ft_lstnew(ft_strdup("test"));
// 	t_list *node4 = ft_lstnew(ft_strdup("le"));
// 	t_list *node5 = ft_lstnew(ft_strdup("truc"));

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);
// 	ft_lstadd_back(&lst, node5);

// 	node2->next = NULL;
// 	ft_lstclear(&node3, &free);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 			lst = lst->next;
// 	}
// 	return (0);

// }
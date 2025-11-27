/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:35:53 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/25 20:33:06 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

// 	node1->next = node3;
// 	ft_lstdelone(node2, free);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }
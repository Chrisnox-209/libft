/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:51:14 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/26 14:10:36 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list *lst;
// 	lst = NULL;
// 	t_list *node1 = ft_lstnew("Hello World !");
// 	t_list *node2 = ft_lstnew("je");
// 	t_list *node3 = ft_lstnew("test");
// 	t_list *node4 = ft_lstnew("le");
// 	t_list *node5 = ft_lstnew("truc");

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);
// 	ft_lstadd_back(&lst, node5);
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}

// 	return (0);
// }
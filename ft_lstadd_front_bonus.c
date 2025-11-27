/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:18:53 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/27 09:52:43 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *node1 = ft_lstnew("Hello World !");
// 	t_list *node2 = ft_lstnew("test");

// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);

// 	printf("%s\n", (char *)lst->content);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:18:40 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/25 14:19:55 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*start;

	i = 0;
	start = lst;
	while (start != NULL)
	{
		start = start->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew("Hello World !");
// 	t_list *node2 = ft_lstnew("test");
// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node2);

// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }
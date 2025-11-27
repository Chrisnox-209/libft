/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:18:56 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/26 17:32:14 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	ft_uppercase(void *node)
// {
// 	int		i;
// 	char	*str;

// 	str = (char *)node;
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			str[i] = str[i] - 32;
// 		}
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("je"));
// 	t_list *node2 = ft_lstnew(ft_strdup("test"));
// 	t_list *node3 = ft_lstnew(ft_strdup("le"));
// 	t_list *node4 = ft_lstnew(ft_strdup("truc"));

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);

// 	ft_lstiter(lst, ft_uppercase);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }
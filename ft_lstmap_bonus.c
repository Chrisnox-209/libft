/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:53:41 by cpietrza          #+#    #+#             */
/*   Updated: 2025/11/26 20:45:51 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	output = NULL;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&output, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&output, new_node);
		lst = lst->next;
	}
	return (output);
}
// static void	*ft_uppercase(void *node)
// {
// 	int		i;
// 	char	*str;

// 	str = ft_strdup((char *)node);
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			str[i] = str[i] - 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new;
// 	lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("je"));
// 	t_list *node2 = ft_lstnew(ft_strdup("test"));
// 	t_list *node3 = ft_lstnew(ft_strdup("le"));
// 	t_list *node4 = ft_lstnew(ft_strdup("truc"));

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);

// 	new = ft_lstmap(lst, ft_uppercase, free);
// 	printf("--- CHAINE DE BASE ---\n");
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n\n--- CHAINE APRES FONCTION ---\n");
// 	while (new)
// 	{
// 		printf("%s\n", (char *)new->content);
// 		new = new->next;
// 	}
// 	return (0);
// }
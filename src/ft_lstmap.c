/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:41:19 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/20 02:30:29 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
iterates the linked list 'lst' and applies the function 'f'
to the content of each node
creates a new list resulting from successive application of 'f'
if an allocation fails, function returns NULL
uses the function 'del' for memory freeing when needed
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* example cases:

void	*append_exclaim(void *content)
{
	char	*original = (char *)content;
	char	*new_content = malloc(ft_strlen(original) + 2); // +2 for the '!'
	
	if (new_content)
	{
		ft_strlcpy(new_content, original, ft_strlen(original) + 2);
		ft_strlcat(new_content, "!", ft_strlen(original) + 2);
	}
	return (new_content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		ft_printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new_lst = NULL;
	
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("world")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("do not panic")));

	ft_printf("Before transformation:\n");
	print_list(lst);
	ft_printf("\n");

	new_lst = ft_lstmap(lst, append_exclaim, del);
	
	ft_printf("After transformation:\n");
	print_list(lst);
	ft_printf("\n");

	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	
	return (0);
}
*/

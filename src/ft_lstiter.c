/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:28:40 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/20 02:25:46 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
iterates the list 'lst' 
and applies the function f to the content of each node
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_temp;

	if (!lst || !f)
		return ;
	lst_temp = lst;
	while (lst_temp)
	{
		f(lst_temp->content);
		lst_temp = lst_temp->next;
	}
}

/* example cases:

void	ft_lst_toupper(void *content)
{
	char	*str = (char *)content;

	while (*str)
	{
		*str = ft_toupper((unsigned char)*str);
		str++;
	}
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
	
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("world")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("do not panic")));

	ft_printf("Before uppercase transformation:\n");
	print_list(lst);
	ft_printf("\n");

	ft_lstiter(lst, ft_lst_toupper);
	
	ft_printf("After uppercase transformation:\n");
	print_list(lst);
	ft_printf("\n");

	ft_lstclear(&lst, del);
	
	return (0);
}
*/

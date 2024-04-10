/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:45:26 by cdumais           #+#    #+#             */
/*   Updated: 2024/04/10 12:47:12 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
returns the node at index 'index'
*/
t_list	*ft_lstget(t_list *lst, int index)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	if (index < 0)
		return (NULL);
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

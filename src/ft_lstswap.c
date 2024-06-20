/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:17:55 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/18 22:44:45 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
swaps the contents of two nodes of a linked list
if one of the nodes is NULL, does nothing
*/
void	ft_lstswap(t_list *a, t_list *b)
{
	void	*tmp;

	if (!a || !b)
		return ;
	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}

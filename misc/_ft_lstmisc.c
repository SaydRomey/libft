/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_lstmisc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:47:07 by cdumais           #+#    #+#             */
/*   Updated: 2023/08/30 12:47:22 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #

// find the maximum value in the linked list
int	ft_lstmax(t_list *head)
{
	int	max;
	int	value;

	max = *((int *)head->content);
	while (head != NULL)
	{
		value = *((int *)head->content);
		if (value > max)
			max = value;
		head = head->next;
	}
	return (max);
}

// find the minimum value in the linked list
int	ft_lstmin(t_list *head)
{
	int	min;
	int	value;

	min = *((int *)head->content);
	while (head != NULL)
	{
		value = *((int *)head->content);
		if (value < min)
			min = value;
		head = head->next;
	}
	return (min);
}

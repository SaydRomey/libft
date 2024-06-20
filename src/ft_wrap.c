/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:19 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/20 00:39:07 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
wraps given value within specified range [min, max]
if 'value' is greater than 'max', wraps around to start from 'min'
if 'value' is less than 'min', wraps around to end at 'max'
otherwise, returns 'value'
*/
int	ft_wrap(int value, int min, int max)
{
	int	range;

	range = max - min + 1;
	if (value > max)
		return (min + (value - min) % range);
	else if (value < min)
		return (max - (min - value - 1) % range);
	else
		return (value);
}

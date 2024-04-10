/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:55:19 by cdumais           #+#    #+#             */
/*   Updated: 2024/04/10 12:55:25 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_wrap(int value, int min, int max)
{
	int	range;

	range = max - min + 1;
	if (value > max)
		return (min + (value - min) % range);
	else if (value < min)
		return (max - (min - value -1) % range);
	else
		return (value);
}

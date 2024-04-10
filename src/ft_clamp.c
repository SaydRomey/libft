/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:53:38 by cdumais           #+#    #+#             */
/*   Updated: 2024/04/10 13:51:37 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_clamp(int value, int min, int max)
{
	return (ft_max(ft_min(value, max), min));
}

float	ft_fclamp(float value, float min, float max)
{
	return (ft_fmax(ft_fmin(value, max), min));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __misc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:46:25 by cdumais           #+#    #+#             */
/*   Updated: 2023/08/30 12:46:28 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	print_sizeof(char *data_type)
{
	size_t	size;

	size = 0;
    if (!data_type)
        return ;
	else if (strcmp(data_type, "char") == SAME)
		size = sizeof(char);
	else if (strcmp(data_type, "short") == SAME)
		size = sizeof(short);
	else if (strcmp(data_type, "int") == SAME)
		size = sizeof(int);
	else if (strcmp(data_type, "long") == SAME)
		size = sizeof(long);
	else if (strcmp(data_type, "long long") == SAME)
		size = sizeof(long long);
	else if (strcmp(data_type, "size_t") == SAME)
		size = sizeof(size_t);
	if (size == 0)
		printf("[%s] might not be valid..\n",
		data_type);
	else
		printf("[%s]\t[%zu bytes / %zu bits]\n",
	data_type, size, (size *8));
}

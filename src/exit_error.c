/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:02:42 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/18 22:50:14 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
Prints an error message to stderr
and exits the program with EXIT_FAILURE
*/
void	exit_error(char *msg)
{
	ft_putendl_fd(msg, STDERR);
	exit(FAILURE);
}

/*
Prints an error message to stderr
and exits the program with EXIT_FAILURE
(uses variadic arguments)
*/
void	va_exit_error(const char *msg, ...)
{
	va_list	args;

	va_start(args, msg);
	ft_vfprintf(STDERR, msg, args);
	va_end(args);
	ft_putchar_fd('\n', STDERR);
	exit(FAILURE);
}

/*
prints the error message with perror()
then exits the program with EXIT_FAILURE
*/
void	exit_perror(const char *msg)
{
	perror(msg);
	exit(FAILURE);
}

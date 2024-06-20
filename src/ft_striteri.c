/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:24:29 by cdumais           #+#    #+#             */
/*   Updated: 2024/06/20 01:54:55 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
applies the effect of 'function' to each character of the string 'str'
*/
void	ft_striteri(char *str, void (*function)(unsigned int, char *))
{
	size_t	i;

	if (!str || !function)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		function(i, &str[i]);
		i++;
	}
}

/* example cases:

// encoding or decoding text
void	caesar_cipher(unsigned int index, char *c)
{
	int	shift = 3; // Example shift value

	(void)index;
	if (ft_isalpha(*c))
	{
		if (ft_islower(*c))
			*c = ((*c - 'a' + shift) % 26) + 'a';
		else if (ft_isupper(*c))
			*c = ((*c - 'A' + shift) % 26) + 'A';
	}
}

// idea for get_next_line:
// preprocess buffer data before processing each line,
// such as removing certain characters or normalizing the text
void	remove_non_printable(unsigned int index, char *c)
{
	(void)index;
	if (!ft_isprint(*c))
		*c = ' ';
}

// idea for ft_printf:
// process format strings, to convert custom format specifiers to standard ones
// before further processing
void	convert_specifiers(unsigned int index, char *c)
{
	(void)index;
	if (*c == '%')
	{
		if (*(c + 1) == 'k') // custom specifier %k
			*(c + 1) = 'd'; // convert to %d
	}
}

// idea for minishell:
// process environment variables,
// ensuring they adhere to certain formatting rules
void	normalize_env_vars(unsigned int index, char *c)
{
	if (index == 0 && ft_isdigit(*c))
		*c = '_'; // replace leading digit with underscore
	else if (!ft_isalnum(*c))
		*c = '_'; // replace non-alphanumeric characters
}

int	main(void)
{
	char	str[] = "Libft Project!";
	ft_striteri(buffer, caesar_cipher);
	ft_printf("%s\n", str); // encoded output
	
	char	buffer[] = "Hello,\tWorld!\n42\tSchool!";
	ft_striteri(buffer, remove_non_printable);
	ft_printf("%s\n", buffer); // outputs: "Hello, World! 42 School!"

	char	format[] = "Value: %k, Another value: %k";
	ft_striteri(format, convert_specifiers);
	ft_printf("%s\n", format); // outputs: "Value: %k, Another value: %k"

	char	env_var[] = "1invalid_var@name";
	ft_striteri(env_var, normalize_env_vars);
	ft_printf("%s\n", env_var); // outputs: "_invalid_var_name"
	
	return (0);
}
*/

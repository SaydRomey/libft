/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strjoin_with.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:47:33 by cdumais           #+#    #+#             */
/*   Updated: 2023/08/30 12:47:36 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	get_full_len(int size, char **strings)
{
	int	full_len;
	int	i;

	full_len = 0;
	i = 0;
	while (i < size)
	{
		if (strings[i] != NULL)
			full_len += ft_strlen(strings[i]);
		i++;
	}
	return (full_len);
}

static int	get_joined_len(int full_len, int size, char *sep)
{
	int	sep_length;

	sep_length = ft_strlen(sep);
	return (full_len + (size - 1) * sep_length + 1);
}

static void	join_strings(char *result, int size, char **strings, char *sep)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	while (i < size)
	{
		if (strings[i] != NULL)
		{
			j = 0;
			while (strings[i][j] != '\0')
				result[index++] = strings[i][j++];
			if (i != size - 1)
			{
				j = 0;
				while (sep[j] != '\0')
					result[index++] = sep[j++];
			}
		}
		i++;
	}
	result[index] = '\0';
}

char	*ft_strjoin_with(int size, char **strings, char *sep)
{
	int		full_len;
	int		joined_len;
	char	*result;

	if (size <= 0 || strings == NULL || sep == NULL)
		return (NULL);
	full_len = get_full_len(size, strings);
	joined_len = get_joined_len(full_len, size,
			sep);
	result = (char *)malloc(joined_len);
	if (result == NULL)
		return (NULL);
	join_strings(result, size, strings, sep);
	return (result);
}

// int	main(void)
// {
// 	char	*strings[3] = {"yes", "your", "goes"};
// 	char	*sep = " well ";
// 	int		size = sizeof(strings) / sizeof(strings[0]);
// 	char	*result = ft_strjoin_with(size, strings, sep);

// 	if (result != NULL)
// 	{
// 		printf("\n%s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("\nMalloc failed\n");
// }

/* alt main

int	main(void)
{
	char	*text[8];

	text[0] = "Hello";
	text[1] = "there";
	text[2] = "!";
	text[3] = "This";
	text[4] = "is";
	text[5] = "a";
	text[6] = "ft_strjoin_with";
	text[7] = "test";
	printf("\n%s\n", ft_strjoin_with(8, text, "..."));
    return (0);
}
*/

/* to test */
char	*ft_strjoin_two_with(char *s1, char *s2, char *sep)
{
	char	*joined;
	int		i;
	int		j;
	int		k;

	joined = malloc(sizeof(s1) + sizeof(s2) + sizeof(sep));
	if (!joined)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		joined[k++] = s1[i++];
	j = 0;
	while (sep[j] != '\0')
		joined[k++] = sep[j++];
	j = 0;
	while (s2[j] != '\0')
		joined[k++] = s2[j++];
	joined[k] = '\0';
	return (joined);
}

/* alt version not in subfunctions 

char *ft_strjoin_with(int size, char **strings, char *sep)
{
	int		total_length;
	int		sep_length;
	int		concatenated_length;
	char	*result;
	int		index;
	int		i;
	int		j;

	// Check for invalid input
	if (size <= 0 || strings == NULL || sep == NULL)
		return (NULL);
	total_length = 0;
	sep_length = 0;
	// Calculate the total length of all strings and the separator
	i = 0;
	while (i < size)
	{
		if (strings[i] != NULL)
			total_length += ft_strlen(strings[i]);
		i++;
	}
	sep_length = ft_strlen(sep);
	// Calculate the total length of the concatenated string
	concatenated_length = total_length + (size - 1) * sep_length + 1;
	// Allocate memory for the concatenated string
	result = (char *)malloc(concatenated_length);
	if (result == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (i < size)
	{
		if (strings[i] != NULL)
		{
			j = 0;
			while (strings[i][j] != '\0')
				result[index++] = strings[i][j++];
			if (i != size - 1)
			{
				j = 0;
				while (sep[j] != '\0')
					result[index++] = sep[j++];
			}
		}
		i++;
	}
	result[index] = '\0';
	return (result);
}
*/

/* old version

char    *ft_strjoin_with(int size, char **strings, char *sep)
{
	char    *out;
	int     out_length;
	int     i;
	int     j;
	int     k;

	i = 0;
	while (i++ < size)
		out_length = ft_strlen(strings[i]);
	out_length += ft_strlen(sep) * (size - 1);
	// out = (char *)malloc(sizeof(char) * (out_length + 1));
	out = (char *)ft_calloc(out_length + 1, sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	k = 0;
	while (i++ < size)
	{
		j = 0;
		while (strings[i][j] != '\0')
			out[k++] = strings[i][j++];
	}
	out[k] = '\0';
	return (out);
}
*/

/* old version

char	*ft_strjoin_with(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size -1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
*/

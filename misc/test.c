/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:03:48 by sayd              #+#    #+#             */
/*   Updated: 2023/08/30 12:45:45 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/* ctype */

/*
for <ctype> functions
takes int as argument,
returns int (TRUE(1)/FALSE(0))
*/
// typedef int (*t_is)(int);

/*
function: pointer to a "is_*" boolean function
c: value to verify
type: word to specify in output
	c (ascii) is "type" : "TRUE/FALSE"\n
*/
void	check_type(t_is function, int c, char *type)
{
	ft_printf("'%c' (%d) is %s : ", c, c, type);
	if (function(c))
		ft_printf("TRUE\n");
	else
		ft_printf("FALSE\n");
}

/*
loops through all values of the ascii
and only prints them if 'function' returns TRUE
*/
void    print_type(t_is function)
{
	int     i;

	i = 0;
	ft_printf("ascii\tchar\n");
	while (ft_isascii(i) == TRUE)
	{
		if (function(i))
			printf("[%d]\t[%c]\n", i, i);
		i++;
	}
}


/* split */
void	print_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		ft_printf("%s\n", split[i]);
		i++;
	}
	ft_printf("\n");
}

void	free_split_print(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		ft_printf("(freed)%s\n", split[i]);
		free(split[i]);
		i++;
	}
	ft_printf("elements freed: %d\n", i);
	free(split);
}

/* flow check

void	print_valid_flow(char *str)
{
	int	overflow;

	overflow = flow_check(str);
	if (overflow == TRUE)
		ft_printf("'%s' is NOT a valid int\n", str);
	else
		ft_printf("'%s' is a valid int\n", str);
}
*/

/* linked list 
void	print_content(void *content)
{
	ft_printf("[%s] ", (char *)content);
}

void	print_content_reverse(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = ft_strlen(str) - 1;
	ft_printf("[");
	while (i >= 0)
	{
		ft_putchar_fd(str[i], 1);
		i--;
	}
	ft_printf("] ");
}

void print_list(t_list *lst)
{
    while (lst)
	{
        ft_printf("[%d]->", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

void del_content(void *content)
{
	free(content);
}
*/

/* ************************************************************************** */

int main(void)
{
	ft_printf("No tests currently uncommented\n");

	/* ******************************************************* ft_printf **** */
	// ft_printf("\n\tft_printf\n\n");
	// ft_printf("'%%' = %%\n");
	// ft_printf("'d' = %d\n", 42);
	// ft_printf("'d' = %d\n", -42);
	// ft_printf("'i' = %i\n", 42);
	// ft_printf("'i(neg)' = %i\n", -42);
	// ft_printf("'u' = %u\n", 42);
	// ft_printf("'u(neg)' = %u\n", -42);
	// ft_printf("'x' = %x\n", 42);
	// ft_printf("'x(neg)' = %x\n", -42);
	// ft_printf("'X' = %X\n", 42);
	// ft_printf("'X(neg)' = %X\n", -42);
	// ft_printf("'c' = %c\n", 'c');
	// ft_printf("'s' = %s\n", "string");
	// ft_printf("'p' = %p\n", "pointer");
	// // 
	// printf("\n\tprintf\n\n");
	// printf("'%%' = %%\n");
	// printf("'d' = %d\n", 42);
	// printf("'d' = %d\n", -42);
	// printf("'i' = %i\n", 42);
	// printf("'i(neg)' = %i\n", -42);
	// printf("'u' = %u\n", 42);
	// printf("'u(neg)' = %u\n", -42);
	// printf("'x' = %x\n", 42);
	// printf("'x(neg)' = %x\n", -42);
	// printf("'X' = %X\n", 42);
	// printf("'X(neg)' = %X\n", -42);
	// printf("'c' = %c\n", 'c');
	// printf("'s' = %s\n", "string");
	// printf("'p' = %p\n", "pointer");
	
	/* ********************************************************* ft_atoi **** */
	// char	*str = "  +-42aa";
	// int		ascii = ft_atoi(str);
	// ft_printf("\natoi test\n");
	// ft_printf("%s -> atoi'd -> %d\n", str, ascii);
	
	/* ************************************************** atoi_base_test **** */
	// char	*binary = "101010";
	// char	*octal = "52";
	// char	*decimal = "42";
	// char	*hex_lower = "2a";
	// char	*hex_upper = "2A";
	// char	*invalid = "2g";
	// int		integered;
	
	// ft_printf("\n\tascii to integer base\n\n");
	// ft_printf("\e[4mbase\t\tstring\t\tinteger\n\n\e[0m");
	// integered = ft_atoi_base(binary, 2);
	// ft_printf ("binary\t\t%s\t\t%d\n", binary, integered);
	// integered = ft_atoi_base(octal, 8);
	// ft_printf ("octal\t\t%s\t\t%d\n", octal, integered);
	// integered = ft_atoi_base(decimal, 10);
	// ft_printf ("decimal\t\t%s\t\t%d\n", decimal, integered);
	// integered = ft_atoi_base(hex_lower, 16);
	// ft_printf ("hex_lower\t%s\t\t%d\n", hex_lower, integered);
	// integered = ft_atoi_base(hex_upper, 16);
	// ft_printf ("hex_upper\t%s\t\t%d\n", hex_upper, integered);
	// integered = ft_atoi_base(invalid, 16);
	// ft_printf ("invalid\t\t%s\t\t%d\n", invalid, integered);
	/* ****************************************************** putnbr_fd ***** */
	// int		num = -42;
	// int		num_len;

	// ft_printf("\n\tft_putnbr_fd\n\n");
	// num_len = ft_putnbr_fd(num, FD_OUTPUT);
	// ft_printf(" has printed %d chars\n", num_len);

	/* ************************************************** putnbr_base_fd **** */
	// int	num = 42;

	// ft_printf("\n\tft_putnbr_base_fd\n\n");
	// ft_printf("\e[4mbase\t\tinput\t\toutput\n\e[0m");
	// ft_printf("\nbase 2\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, BINARY);
	// ft_printf("\nbase 8\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, OCTAL);
	// ft_printf("\nbase 10\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, DECIMAL);
	// ft_printf("\nbase 16\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, HEX_LO);
	// ft_printf("\nBASE 16\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, HEX_UP);
	// ft_printf("\nBASE 4\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, "0123");
	// ft_printf("\nBASE 17\t\t%d\t\t", num);
	// ft_putnbr_base_fd(num, FD_OUTPUT, "0123456789abcdefg");
	// ft_printf("\n");
	/* ****************************************************** ctype_test **** */
	// int	c = 'a';
	// char	*info = "(type)";
	// void	*function_ptr = &ft_islower;

	// check_type(function_ptr, c, info);
	// print_type(function_ptr);
	/* ****************************************************** split_test **** */
	// char	*str = "This is a test string";
	// char	**split_strings;

	// split_strings = ft_split(str, 'i');
	// print_split(split_strings);
	// free_split_print(split_strings);
	/* ***************************************************** intlen_test **** */
	// int	num = -42;
	// int len = ft_intlen(num);
	// ft_printf("length of '%d' is [%d]\n", num, len);
	/* ******************************************************* flow_test **** */
	// char	*good_int = "2147483647";
	// char	*bad_int = "2147483649";

	// print_valid_flow(good_int);
	// print_valid_flow(bad_int);
	/* **************************************************** strlhas_test **** */
	// char	*str = "This is a test string";
	// int		c = 'i';
	// size_t	char_count = ft_strlhas(str, c);
	// ft_printf("'%c' occurs %d times in string '%s'\n", c, char_count, str);
	/* ******************************************************** gnl_test **** */
	// char	*path = "misc/test.c"; //if in libft
	// // char	*path = "../maps/42.fdf"; //if in fdf
	// int		line_num = 1;

	// int	fd = open(path, READ);
	// if (fd < SUCCESS)
	// 	exit_error("fd problems");
	// else 
	// 	ft_printf("fd: %d\n", fd);
	// char	*line = get_next_line(fd);
	// while (line != NULL)
	// {
	// 	ft_printf("line[%d]\t%s\n", line_num, line);
	// 	free(line);
	// 	line = get_next_line(fd);
	// 	line_num++;
	// }
	// close(fd);
	// free(line);
	/* *************************************************** ft_str*_tests **** */
	// char	*str = "testing";
	// 
	// char *dup = ft_strdup(str);
	// ft_printf("'%s' (dup) is %d in size..\n", dup, ft_strlen(dup));
	// free(dup);
	// 
	// char	*joined = ft_strjoin("currently ", str);
	// ft_printf("joined: %s\n", joined);
	// free(joined);
	// 
	/* ****************************************************** ft_strtrim **** */
	// const char	*str = "    Hello there!    ";
	// const char	*set1 = " ";
	// const char	*set2 = " !";
	// const char	*set3 = " !H";
	// const char	*set4 = " !Helo";
	// char	*trimmed;
	
	// trimmed = ft_strtrim(str, set1);
	// ft_printf("'%s' trimmed with '%s' is\t'%s'\n", str, set1, trimmed);
	// free(trimmed);
	// trimmed = ft_strtrim(str, set2);
	// ft_printf("'%s' trimmed with '%s' is\t'%s'\n", str, set2, trimmed);
	// free(trimmed);
	// trimmed = ft_strtrim(str, set3);
	// ft_printf("'%s' trimmed with '%s' is\t'%s'\n", str, set3, trimmed);
	// free(trimmed);
	// trimmed = ft_strtrim(str, set4);
	// ft_printf("'%s' trimmed with '%s' is\t'%s'\n", str, set4, trimmed);
	// free(trimmed);
	/* ******************************************************* ft_substr **** */
	// const char	*str = "Hello there!!!";
	// int		start = 7;
	// int		len = 4;
	// char	*substr;
	
	// substr = ft_substr(str, start, len);
	// ft_printf("ft_substring of '%s' from index '%d' for length '%d' is '%s'\n", 
	// str, start, len, substr);
	// free(substr);
	/* *************************************************** ft_lst*_tests **** */
	// ft_printf("\n\tLinked list tests\n\n");
	// // 
	// int *value_ptr = malloc(sizeof(int));
    // *value_ptr = 5;
    // t_list *new_node = ft_lstnew(value_ptr);
    
    // int *value_ptr2 = malloc(sizeof(int));
    // *value_ptr2 = 3;
    // t_list *new_node2 = ft_lstnew(value_ptr2);
    // ft_lstadd_back(&new_node, new_node2);

    // int *value_ptr3 = malloc(sizeof(int));
    // *value_ptr3 = 7;
    // t_list *new_node3 = ft_lstnew(value_ptr3);
    // ft_lstadd_back(&new_node, new_node3);
    // print_list(new_node);  // Expected: 5 -> 3 -> 7 -> NULL

    // printf("\n== ft_lstremoveone: Removing middle node (3) ==\n");
    // ft_lstremoveone(&new_node, new_node2, del_content);
    // print_list(new_node);  // Expected: 5 -> 7 -> NULL
    
    // printf("\n== ft_lstremoveone: Removing head node (5) ==\n");
    // ft_lstremoveone(&new_node, new_node, del_content);
    // print_list(new_node);  // Expected: 7 -> NULL
    
    // printf("\n== ft_lstremoveone: Removing last node (7) ==\n");
    // ft_lstremoveone(&new_node, new_node, del_content);
    // print_list(new_node);  // Expected: NULL
	/* ********************************************************** _tests **** */
	
	return(SUCCESS);
}

//


////



// 



// end of file :)
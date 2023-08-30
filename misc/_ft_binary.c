/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_binary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:47:00 by cdumais           #+#    #+#             */
/*   Updated: 2023/08/30 12:47:02 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/libft.h"

void	ft_binary(int nbr)
{
	int div;

	div = 128;
	if (nbr < 0) //should we use ft_abs?
	{
		// write(1, "-", 1);
		// nbr = nbr * -1;
		nbr = 0; //or put error message?
	}
	while (div >= 1)
	{
		if (nbr >= div)
			write(1, "1", 1);
		if (nbr < div)
			write(1, "0", 1);
		nbr = nbr % div;
		div = div / 2;
	}
}

/* simple main

int main(void)
{
	ft_binary(23);
	return (0);
}
*/


// int main(int argc, char **argv)
// {
//     int i;
//     int bad_flow;

//     i = 0;
//     bad_flow = flow_check(argv[1]);
//     if (argc != 2)
//         printf("Usage: %s <number>\n", argv[0]);
//     if (bad_flow == TRUE)
//         printf("Error: %s is not a valid number\n", argv[1]);
//     if (argc == 2 && bad_flow == FALSE)
//         ft_binary(atoi(argv[1]));
//     printf("\n");
//     return (0);
// }

/*
converts a decimal number into its binary representation
uses the value 128 as the initial divisor in a loop 
to check the presence of each bit in the binary representation.

The reason for using 128 is because it represents the most significant bit (MSB) 
of an 8-bit binary number

In an 8-bit binary representation, the bits are numbered from right to left,
starting with the least significant bit (LSB) at position 0 
and the MSB at position 7. 

The values of the bits in an 8-bit binary number can be calculated using powers of 2:

2^7  2^6  2^5  2^4  2^3  2^2  2^1  2^0
128   64   32   16   8    4    2    1

By starting with div = 128 and dividing it by 2 in each iteration (div = div / 2),
the code checks the presence of each bit in the binary representation of the given number

If the number is greater than or equal to the current divisor (nbr >= div), 
it means that the corresponding bit should be set to 1, 
and the code writes "1" to the standard output.

Otherwise, if the number is less than the current divisor (nbr < div),
it means that the corresponding bit should be set to 0, 
and the code writes "0" to the standard output.

In the provided example, ft_binary(23) is called, 
so the code converts the decimal number 23 into its binary representation: 00010111.
*/
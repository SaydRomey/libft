/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _modulo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:46:16 by cdumais           #+#    #+#             */
/*   Updated: 2023/08/30 12:46:18 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
when 'p' and 'q' are integers, then

    [p % q] will get resolved as [p - (p/q) * q]

ex: if p = 5 and q = 2

p % q == p - (p/q) * q
5 % 2 == 5 - (5/2) * 2
5 - (2) * 2
5 - 4
1
thus, 5 % 2 = 1*/

/*
misc modulo concepts to play with...

- Do something every nth time:
    for (x = 0; x < 100; x++) {
        // do something

        // do something specific every 5th time through the loop
        if (x % 5 == 0)
            // do something specific
        }
    }
//

- Turn elpased number of seconds into hours, minutes and seconds:
int hours = seconds / 3600;
int minutes = (seconds / 60) % 60;
int seconds = seconds % 60;

example with 4242 seconds:
hours = 4242 / 3600 = 1
minutes = (4242 / 60) % 60 = 10
seconds = 4242 % 60 = 42

Thus, 4242 seconds = 1 hour, 10 minutes and 42 seconds.

example with 582 seconds:
hours = 582 / 3600 = 0 // integer would round down to 0
minutes = (582 / 60) % 60 = (9.7) % 60 = 9
seconds = 582 % 60 = 42

Thus, 582 seconds = 0 hours, 9 minutes and 42 seconds.
//

- Force a number to be a multiple of another number
    (to be evenly divisible by another number)

example with a number that is always a multiple of 10:
    multiple_of_ten = x - (x % 10);

by substracting the remainder of a value x divided by 10 from x
    we get a value that is always divisible by 10

multiple_of_ten = 1 - (1 % 10) = 1 - (1) = 0;
multiple_of_ten = 2 - (2 % 10) = 2 - (2) = 0;
multiple_of_ten = 3 - (3 % 10) = 3 - (3) = 0;
...
multiple_of_ten = 1 - (9 % 10) = 9 - (9) = 0;

-> multiple_of_ten = 10 - (10 % 10) = 10 - (0) = 10;
-> multiple_of_ten = 20 - (20 % 10) = 20 - (0) = 20;

(usefulness):
when editing a 32-bit audio, the smallest unit of data is 4 bytes wide
    to avoid splitting a byte array in the middle of a 4-byte unit,
        we would implement something like this:

safe_start_index = start_index - (start_index % 4);

safe_start_index = 0 - (0 % 4) = 0 - (0) = 0;
safe_start_index = 1 - (1 % 4) = 1 - (1) = 0;
safe_start_index = 2 - (2 % 4) = 2 - (2) = 0;
safe_start_index = 3 - (3 % 4) = 3 - (3) = 0;

-> safe_start_index = 4 - (4 % 4) = 4 - (0) = 4;
//

- !! -

'a' is zero or a positive number.
'n' is a positive number.
    if a / n equals a whole number, then a % n always equals 0
    if a is less than n, then a % n is always equals a
    if a is greater than 'n', then a % n always equals
        a value between 1 and n-1

*/



int ft_is_even(int n)
{
    if (n % 2 == 0)
        return (TRUE);
    return (FALSE);
}

int ft_is_odd(int n)
{
    if (n % 2 != 0)
        return (TRUE);
    return (FALSE);
}

int ft_is_power_of_two(int n)
{
    if (n > 0 && (n & (n - 1)) == 0)
        return (TRUE);
    return (FALSE);
    // return (n > 0 && (n & (n - 1)) == 0);
}

/* need explanations...
*/
int ft_modular_pow(int base, int exponent, int mod)
{
    int result;

    result = 1;
    base = base % mod;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent /= 2;
        base = (base * base) % mod;
    }
    return (result);
}

/* int  main(void)
{
    int base = 3; //base number
    int exponent = 10; //exponent
    int mod = 17; //modulus
    int result;

    result = ft_modular_pow(base, exponent, mod);
    printf("%d^%d mod %d = %d\n", base, exponent, mod, result);
    return (0);
}
*/

/* calculates greatest common divisor (GCD)*/
int ft_gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return (a);
}

/* int  main(void)
{
    int a = 10;
    int b = 15;
    int result;

    result = ft_gcd(a, b);
    printf("GCD(%d, %d) = %d\n", a, b, result);
    return (0);
}*/

/* verify truth and usefulness of this..

int ft_abs_modulo(int n, int divisor)
{
    int result;

    result = n % divisor;
    if (result < 0)
        return (result + divisor);
    return (result);
}
*/

/* verify use of factor/divisor for argument variable name

int ft_next_multiple(int n, int factor)
{
    if (n % factor == 0)
        return (n);
    return (n + (factor - (n % factor)));
}
*/

/* check difference of concept for multiple of and divisable by */
// int ft_is_multiple_of(int n, int factor)
// {
//     if (n % factor == 0)
//         return (TRUE);
//     return (FALSE);
// }

// int ft_is_divisible_by(int n, int divisor)
// {
//     if (n % divisor == 0)
//         return (TRUE);
//     return (FALSE);
// }
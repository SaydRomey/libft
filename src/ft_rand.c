/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdumais <cdumais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:59:36 by cdumais           #+#    #+#             */
/*   Updated: 2025/01/03 04:31:57 by cdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
Linear congruential generator (LCG)
'seed' initialized using the adress of local variable 'var'
provides a different starting point between each program run
the seed is updated at each call to ft_rand
*/
int	ft_rand(int min, int max)
{
	static unsigned long	seed;
	int						var;
	int						range;
	int						random_int;

	if (seed == 0)
		seed = (unsigned long)&var;
	seed = seed * LCG_MULT + LCG_INCR;
	range = max - min + 1;
	random_int = ((seed / LCG_DIV) % range) + min;
	return (random_int);
}

/* testing ft_rand

int	main(int argc, char **argv)
{
    int random_int;
    int min;
    int max;

    if (argc != 3)
    {
        ft_printf("Usage: %s min max\n", argv[0]);
        return (0);
    }
    min = ft_atoi(argv[1]);
    max = ft_atoi(argv[2]);
    random_int = ft_rand(min, max);
    ft_printf("Randomized value : %d\n", random_int);
    return (0);
}
*/

/* loop to test even distribution (edit result through cli)

int main(void)
{
	int	i;
	int	random;
	
	i = 0;
	while (i < 500)
	{
		random = ft_rand(0, 100);
		ft_printf("%d\n", random);
		i++;
	}
	return (0);
}
*/

/* ************************************************************************** */

/*
// Linear Congruential Generator constants
#define LCG_MULT	1103515245	// Multiplier constant for the LCG
#define LCG_INCR	12345		// Increment constant for the LCG
#define LCG_DIV		65536		// Divisor to reduce the range of the random value
*/

/*
Generates a pseudo-random integer within a specified range.

Uses a simple Linear Congruential Generator (LCG)
to produce pseudo-random integers.

It avoids external libraries and 
maintains an internal static seed
for continuity across multiple calls.

The generated random number is constrained within the range [min, max].

Params:
	'min': The minimum value of the random number (inclusive).
	'max': The maximum value of the random number (inclusive).
Returns:
	A pseudo-random integer between 'min' and 'max'.
*/
/*
int	ft_rand(int min, int max)
{
	static unsigned long	seed;		// Static seed value retained across calls
	int						var;		// Local variable for seed initialization
	int						range;		// Range of the desired random values
	int						random_int;	// Final random integer to return

	 // Initialize seed with the address of a local variable on the first call
	if (seed == 0)
		seed = (unsigned long)&var;

	// Update the seed using the LCG formula
	seed = seed * LCG_MULT + LCG_INCR;

	// Calculate the range and generate a number within it
	range = max - min + 1;
	random_int = ((seed / LCG_DIV) % range) + min;

	return (random_int);
}
*/

/* ************************************************************************** */

// Detailed Explanation of `ft_rand` Function

/*
Purpose:
Generates a random integer within the [min, max] range 
using the Linear Congruential Generator (LCG) algorithm.

Why `static unsigned long seed`?
static ensures the seed value persists across multiple calls to ft_rand.
It avoids resetting the random sequence each time the function is called.

Seed Initialization:
If `seed` is 0 (first call),
it is initialized with the memory address of a local variable (`&var`).  
This provides a semi-random starting point for the sequence.

LCG Formula:
`seed = seed * LCG_MULT + LCG_INCR;`  
This formula generates a new pseudo-random value in each iteration.

Range Adjustment:
`range = max - min + 1;`  
Ensures the random number fits within `[min, max]`.

Final Random Number:
`((seed / LCG_DIV) % range) + min;`  
Maps the pseudo-random seed to the desired range `[min, max]`.
Reduces the number using modulo (% range) to fit into the desired range.
+ min shifts the range to start from min.
*/


// Why Linear Congruential Generator (LCG)?
/*
Simple and Lightweight:
No external libraries required.  

Fast:
Computationally inexpensive operations.

Reproducible:
Given the same seed, it produces the same random sequence.

Limitations:  
This method is not secure for cryptographic purposes
or critical randomness requirements,
but it is lightweight, fast, and effective for simple programs.
*/


/*
Seed Update Using LCG Formula

Standard Formula:  
`seed = (seed * LCG_MULT + LCG_INCR) % (2^32);`

How it works:
`seed` is multiplied by a large constant `LCG_MULT`.  
This introduces significant variability in the new seed value.

`LCG_INCR` is added to prevent predictable cycles in the sequence.

Why it works:
Multiplication spreads the randomness across bits.  
Addition prevents the sequence from collapsing into repetitive cycles.

Implicit Modulo (`% 2^32`) in C:
In C, `unsigned long` inherently applies `% 2^32` due to integer overflow.
Explicit `% 2^32` is unnecessary because overflow wraps around automatically.

Example:
unsigned long seed = 4294967295; // Max value for 32-bit unsigned long
seed = seed * 1103515245 + 12345;
// Behaves internally as: seed = (seed * 1103515245 + 12345) % (2^32);

In our code:
seed = seed * LCG_MULT + LCG_INCR;

This line is efficient and relies on C's overflow behavior.

Key Points:

Purpose: Generate a new pseudo-random seed for each call.
Multiplication (LCG_MULT): Creates a large step in the number space.
Addition (LCG_INCR): Breaks patterns and avoids sequences collapsing into cycles.
*/


/*
Range Adjustment and Final Random Number

Step 1: Calculate Range
`range = max - min + 1;`
Determines the total count of integers in `[min, max]`.
`+1` ensures both `min` and `max` are included.

Step 2: Scale the Seed
`(seed / LCG_DIV) % range`
`seed / LCG_DIV` reduces the seed’s magnitude, extracting higher-order bits.  
`% range` ensures the result is confined to `[0, range - 1]`.

Step 3: Shift into Range
`+ min`
Adjusts the scaled result to start from `min`.

Example:

min = 5, max = 10
range = 10 - 5 + 1 = 6
Random raw value from ((seed / LCG_DIV) % range) = 3
Final result = 3 + 5 = 8

Final random integer is guaranteed to fall
between `min` and `max` (inclusive).

Key Operations:
range = max - min + 1;
random_int = ((seed / LCG_DIV) % range) + min;

Key Points:

Range Calculation:
Ensures the random number will fit between min and max.

Seed Scaling (seed / LCG_DIV):
Extracts higher-order randomness from the seed.

Modulo (% range):
Maps the result into [0, range - 1].

Offset (+ min):
Adjusts the final value to fit [min, max].
*/

/*
Why `seed / LCG_DIV`?

Avoid Bias in Lower Bits:
Simply using `seed % range` might disproportionately rely on
lower-order bits,
which are less random in an LCG.

Extract Higher-Order Bits:
Division by `LCG_DIV` focuses on the more random higher-order bits, 
producing better distribution across the range.

This step improves the quality of randomness.
*/

/*
Summary Table

|		Operation	|			Purpose					|
|-------------------|-----------------------------------|
| `seed * LCG_MULT`	| Creates significant variability	|
| `+ LCG_INCR`		| Prevents repetitive patterns		|
| `/ LCG_DIV`		| Extracts higher-order randomness	|
| `% range`			| Maps value into `[0, range - 1]`	|
| `+ min`			| Adjusts result into `[min, max]`	|

These steps collectively ensure randomness within the `[min, max]` range.
*/

#include "main.h"

/**
 * Function: get_bit
 * -----------------
 * Returns the value of a specific bit at a given index in a decimal number.
 *
 * n: The decimal number to search for the bit.
 * index: The index of the bit to retrieve (0-based).
 *
 * Returns: The value of the bit (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit_val;

    if (index > 63)
        return (-1);

    bit_val = (n >> index) & 1;

    return (bit_val);
}

#include "main.h"

/**
 * Function: set_bit
 * -----------------
 * Sets a bit at a specified index to 1 in a given number.
 *
 * n: Pointer to the number to be modified.
 * index: The index of the bit to be set to 1 (0-based).
 *
 * Returns: 1 for successful bit setting, -1 for failure (if the index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n = ((1UL << index) | *n);

    return (1);
}


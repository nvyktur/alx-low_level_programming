#include "main.h"

/**
 * Function: clear_bit
 * -------------------
 * Sets the value of a specified bit to 0 in a given number.
 *
 * n: Pointer to the number to be modified.
 * index: The index of the bit to be cleared (0-based).
 *
 * Returns: 1 for successful bit clearing, -1 for failure (if the index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n = (~(1UL << index) & *n);

    return (1);
}


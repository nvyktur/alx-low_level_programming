#include "main.h"

/**
 * Function: get_endianness
 * -----------------------
 * Checks the endianness of the machine (whether it's big or little endian).
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    return (*c);
}


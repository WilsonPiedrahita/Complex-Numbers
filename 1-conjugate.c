#include "main.h"
#include <stdio.h>

complex conjugate(complex c)
{
    complex result;

    result.re = c.re;
    result.im = -c.im;

    return result;
}
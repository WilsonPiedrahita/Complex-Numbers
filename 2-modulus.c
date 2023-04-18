#include "main.h"
#include <math.h>

double modulus(complex c)
{
    double mod = sqrt(c.re * c.re + c.im * c.im);
    return mod;
}
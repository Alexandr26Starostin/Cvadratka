#include <TXLib.h>

#include "compare_double1_and_double2.h"

const double RULER = 0.001;

int compare_double1_and_double2 (double t1, double t2)
{
    if (fabs (t1-t2) < RULER)
    {
        return 1;
    }

    return 0;
}
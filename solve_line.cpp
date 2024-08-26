#include <TXLib.h>

#include "list_of_const.h"
#include "solve_line.h"
#include "compare_double1_and_double2.h"
#include "color_of_system.h"
#include "ii.h"

enum quantity_roots solve_line (double b, double c, double* x1, double* x2)
{
    if (compare_double1_and_double2 (b, 0) && !(compare_double1_and_double2 (c, 0)))
    {
        return NOT_ROOTS;
    }
    if (compare_double1_and_double2 (b, 0) && compare_double1_and_double2 (c, 0))
    {
        return MORE_ROOTS;
    }

    *x1 = (- c) / b;
    *x2 = *x1;
    return ONE_ROOT;
}

enum quantity_roots solve_line_with_slip (double b, double c, double* x1, double* x2)
{
    if (compare_double1_and_double2 (b, 0) && !(compare_double1_and_double2 (c, 0)))
    {
        ii ();

        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
        getch();

        return NOT_ROOTS;
    }
    if (compare_double1_and_double2 (b, 0) && compare_double1_and_double2 (c, 0))
    {
        ii ();

        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
        getch();

        
        return MORE_ROOTS;
    }

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "x1 found");
    ii ();

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
    getch();
    
    *x1 = (- c) / b;
    *x2 = *x1;
    return ONE_ROOT;
}


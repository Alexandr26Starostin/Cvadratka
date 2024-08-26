#include <TXLib.h>

#include "list_of_const.h"
#include "solve_square.h"
#include "compare_double1_and_double2.h"
#include "solve_line.h"
#include "color_of_system.h"
#include "ii.h"

enum quantity_roots solve_square (double a, double b, double c, double* x1, double* x2)
{
    assert(x1);
    assert(x2);

    double discriminant = ((b * b) - (4 * a * c));
    double a2           = 2 * a;

    if (!(compare_double1_and_double2 (a, 0)))
    {
        if (discriminant > 0)
        {
            double sq = sqrt (discriminant);

            *x1 = (- b - sq) / (a2);
            *x2 = (- b + sq) / (a2);
            
            return TWO_ROOTS;
        }

        if (compare_double1_and_double2 (discriminant, 0))
        {
            *x1 = (- b) / (a2);
            *x2 = *x1;

            return ONE_ROOT;
        }

        if (discriminant < 0)
        {
            return NOT_ROOTS;
        }
    }
    else
    {
        return solve_line(b, c, x1, x2);
    }

    return SOLVE_ERROR;
}

enum quantity_roots solve_square_with_slip (double a, double b, double c, double* x1, double* x2)
{
    assert (x1);
    assert (x2);

    double discriminant = ((b * b) - (4 * a * c));
    double a2           = 2 * a;

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Checking coefficients");
    ii ();

    if (!(compare_double1_and_double2 (a, 0)))
    {
        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "ATTENTION! a != 0! Non-trival square equation FOUND!\n");
        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Calculating discriminant");
        ii ();

        if (discriminant > 0)
        {
            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Calculating roots");
            ii ();

            double sq = sqrt (discriminant);

            *x1 = (- b - sq) / (a2);

            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "x1 found");

            *x2 = (- b + sq) / (a2);

            ii ();
            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "x2 found");
            ii();

            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
            getch();

            return TWO_ROOTS;
        }

        if (compare_double1_and_double2 (discriminant, 0))
        {
            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Calculating roots");
            ii ();
            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "x1 found");
            ii ();

            *x1 = (- b) / (a2);
            *x2 = *x1;

            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
            getch();

            return ONE_ROOT;
        }

        if (discriminant < 0)
        {
            ii();

            print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Press any key to return answer...\n");
            getch();

            return NOT_ROOTS;
        }
    }
    else
    {
        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "ATTENTION! a == 0! Line equation FOUND!\n");
        return solve_line_with_slip (b, c, &*x1, &*x2);
    }

    return SOLVE_ERROR;
}
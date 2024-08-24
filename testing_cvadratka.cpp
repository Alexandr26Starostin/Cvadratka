#include <TXLib.h>

#include "list_of_const.h"
#include "testing_cvadratka.h"
#include "compare_double1_and_double2.h"
#include "solve_square.h"
#include "solve_line.h"
#include "color_of_system.h"

int have_all_tests (void)
{
    data_for_test have_all_tests [] = {
                    {.number = 1,  .a = 1,    .b = -2,   .c = 1,      .x1_right = 1,        .x2_right = 1,         .quantity_right = ONE_ROOT  },
                    {.number = 2,  .a = 0,    .b = 0,    .c = 0,      .x1_right = 0,        .x2_right = 0,         .quantity_right = MORE_ROOTS},
                    {.number = 3,  .a = 0,    .b = 0,    .c = 2,      .x1_right = NAN,      .x2_right = NAN,       .quantity_right = NOT_ROOTS },
                    {.number = 4,  .a = 0,    .b = 5,    .c = 10,     .x1_right = -2,       .x2_right = -2,        .quantity_right = ONE_ROOT  },
                    {.number = 5,  .a = 0,    .b = 10,   .c = -5,     .x1_right = 0.5,      .x2_right = 0.5,       .quantity_right = ONE_ROOT  },
                    {.number = 6,  .a = 1,    .b = 3,    .c = -4,     .x1_right = -4,       .x2_right = 1,         .quantity_right = TWO_ROOTS },
                    {.number = 7,  .a = 0.5,  .b = 0.6,  .c = 9,      .x1_right = NAN,      .x2_right = NAN,       .quantity_right = NOT_ROOTS },
                    {.number = 8,  .a = 1,    .b = 2,    .c = 1,      .x1_right = -1,       .x2_right = -1,        .quantity_right = ONE_ROOT  },
                    {.number = 9,  .a = 1,    .b = 0,    .c = 1,      .x1_right = NAN,      .x2_right = NAN,        .quantity_right = NOT_ROOTS },
                    {.number = 10, .a = 2,    .b = 0,    .c = -8,     .x1_right = -2,       .x2_right = 2,         .quantity_right = TWO_ROOTS },
                    {.number = 11, .a = 1,    .b = -2,   .c = 1,      .x1_right = 1,        .x2_right = 1,         .quantity_right = ONE_ROOT  },
                    {.number = 12, .a = 0,    .b = 100,  .c = 0,      .x1_right = 0,        .x2_right = 0,         .quantity_right = ONE_ROOT  },
                    {.number = 13, .a = 1,    .b = 3,    .c = 0,      .x1_right = -3,       .x2_right = 0,         .quantity_right = TWO_ROOTS },
                    {.number = 14, .a = 1,    .b = -3,   .c = 0,      .x1_right = 0,        .x2_right = 3,         .quantity_right = TWO_ROOTS },
                    {.number = 15, .a = 7.77, .b = 7.7,  .c = -7.777, .x1_right = -1.61193, .x2_right = 0.620935,  .quantity_right = TWO_ROOTS },
                    {.number = 16, .a = 0,    .b = 0,    .c = 0.01,   .x1_right = NAN,      .x2_right = NAN,       .quantity_right = NOT_ROOTS }};

    for (int i = 0; i < 16; ++i)
    {
        if (begin_one_test (have_all_tests[i]))
        {
            return 1;
        }
    }

    return 0;
}

int begin_one_test (data_for_test data)
{
    double x1 = NAN, x2 = NAN;
    enum quantity_roots quantity;

    quantity =  solve_square (data.a, data.b, data.c, &x1, &x2);

    if ((int) quantity <= 0)
    {
        if (data.quantity_right != quantity)
        {
            print_text_when_error_without_decisions (data.number, data.a, data.b, data.c, (int) data.quantity_right, (int) quantity);
            return 1;
        }
    }

    if ((int) quantity > 0)
    {
        if (data.quantity_right != quantity || !(compare_double1_and_double2 (x1, data.x1_right)) || !(compare_double1_and_double2 (x2, data.x2_right)))
        {
            print_text_when_error_with_decisions (data.number, data.a, data.b, data.c, data.x1_right, data.x2_right, (int) data.quantity_right, (int) quantity, x1, x2);
            return 1;
        }
    }

    return 0;
}

void print_text_when_error_without_decisions (int tests, double a, double b, double c, int quantity_right, int quantity)
{
    print_with_color(ORDINARY_STYLE, RED_TEXT, BLACK_BACKGROUND, "Test: %d  a = %lg b = %lg c = %lg\t" 
                                                                         "Error: quantity = %d\t"
                                                                         "Right: quantity_right = %d\n",
                                                                         tests, a, b, c,
                                                                         quantity,
                                                                         quantity_right);
}

void print_text_when_error_with_decisions (int tests, double a, double b, double c, double x1_right, double x2_right, int quantity_right, int quantity, double x1, double x2)
{
    print_with_color(ORDINARY_STYLE, RED_TEXT, BLACK_BACKGROUND, "Test: %d  a = %lg b = %lg c = %lg\t"
                                                                         "Error: quantity = %d  x1 = %lg  x2 = %lg"
                                                                         "Right: quantity_right = %d  x1_right = %lg  x2_right = %lg\n",
                                                                         tests, a, b, c,
                                                                         quantity, x1, x2,
                                                                         quantity_right, x1_right, x2_right);
}
#include <TXLib.h>

#include "list_of_const.h"
#include "answer_square.h"
#include "color_of_system.h"

void answer_square (enum quantity_roots quantity, double x1, double x2)
{
    switch ((int) quantity)
    {
    case NOT_ROOTS: print_with_color(ORDINARY_STYLE, GREEN_TEXT, BLACK_BACKGROUND, "0 decisions\n");                              
            break;

    case ONE_ROOT: print_with_color(ORDINARY_STYLE, GREEN_TEXT, BLACK_BACKGROUND, "1 decision: x = %lg\n", x1);
            break;

    case TWO_ROOTS: print_with_color(ORDINARY_STYLE, GREEN_TEXT, BLACK_BACKGROUND, "2 decisions: x1 = %lg and x2 = %lg\n", x1, x2); 
            break;

    case MORE_ROOTS: print_with_color(ORDINARY_STYLE, GREEN_TEXT, BLACK_BACKGROUND, "decision - any real number\n"); 
            break;

    default: print_with_color(ORDINARY_STYLE, RED_TEXT, BLACK_BACKGROUND, "%s, ERROR\n", __func__); 
        break;
    }
}
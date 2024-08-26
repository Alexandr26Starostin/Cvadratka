#include <TXLib.h>
#include <math.h>
#include <stdarg.h>

#include "list_of_const.h"
#include "testing_cvadratka.h"
#include "input_cvadratka.h"
#include "solve_square.h"
#include "ii.h"
#include "compare_double1_and_double2.h"
#include "answer_square.h"
#include "color_of_system.h"

/*!
    \breaf Данная функция связывает в себе все части программы.

    Связывая все части программы, функция поозволяет пользователю решить квадратное уравнение. 
*/

int main()
{
    if (have_all_tests())
    {
        return 1;                      //Error in tests
    }

    struct coefficients numbers = {.a = NAN, .b = NAN, .c = NAN};

    input_cvadratka (&numbers);

    struct answer roots = {.x1 = NAN, .x2 = NAN};
    
    enum quantity_roots quantity = solve_square_with_slip (numbers.a, numbers.b, numbers.c, &(roots.x1), &(roots.x2));

    answer_square ((enum quantity_roots) quantity, roots.x1, roots.x2);
    

    return 0;
}
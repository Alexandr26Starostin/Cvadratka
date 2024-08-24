#include <TXLib.h>

#include "list_of_const.h"
#include "ii.h"
#include "input_cvadratka.h"
#include "color_of_system.h"

const int ALL_NUMBERS = 3;

void input_cvadratka (coefficients* numbers_ptr)
{
    assert(numbers_ptr);

    int how_many_numbers_right = 0;

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Loading");
    ii ();

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Write coefficients a, b, c\n");
    how_many_numbers_right = scanf ("%lg %lg %lg", &((*numbers_ptr).a), &((*numbers_ptr).b), &(numbers_ptr->c));

    while (how_many_numbers_right != ALL_NUMBERS )
    {
        delete_buffer ();

        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Repeat, please...\n\n");
        how_many_numbers_right = scanf ("%lg %lg %lg",  &((*numbers_ptr).a), &((*numbers_ptr).b), &(numbers_ptr->c));

        if (check_end_of_line ())
        {
            how_many_numbers_right = 0;   
        }
    }
}

void delete_buffer (void)
{
    int flow = 0;
    while ((flow = getchar()) != '\n' && flow != EOF) {}
}

int check_end_of_line (void)
{
    int flow = 0;
    if ((flow = getchar()) != '\n')
        {
            return 1;
        }
    return 0;
 }

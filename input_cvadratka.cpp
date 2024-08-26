#include <TXLib.h>

#include "list_of_const.h"
#include "input_cvadratka.h"
#include "color_of_system.h"
#include "ii.h"

const int ALL_NUMBERS = 3;

/*!
    \breaf Функция проверяет корректность ввода после третьего коэффициента

    Считает ввод корректным, если после третьего коэффиента нет лишних символов.
    Возвращает true при корректном вводе.
    Возвращает false при некорректном вводе.
*/

static int check_end_of_line (void);

void input_cvadratka (coefficients* numbers_ptr)
{
    assert(numbers_ptr);

    int how_many_numbers_right = 0;

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Loading");
    ii ();

    print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Write coefficients a, b, c\n");
    how_many_numbers_right = scanf ("%lg %lg %lg", &((*numbers_ptr).a), &((*numbers_ptr).b), &(numbers_ptr->c));

    while (how_many_numbers_right != ALL_NUMBERS || !check_end_of_line ())
    {
        print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "Repeat, please...\n\n");
        how_many_numbers_right = scanf ("%lg %lg %lg",  &((*numbers_ptr).a), &((*numbers_ptr).b), &(numbers_ptr->c));
    }
}

int check_end_of_line (void)
{  
    bool flag_of_end_line = true;
    int flow = 0;   //true - после третьего числа нет букв
    
    while ((flow = getchar()) != '\n' && flow != EOF)
    {
        if (flow != ' ' && flow != '\t')
        {
            flag_of_end_line = false;
            break;
        }
    } 

    return flag_of_end_line;   
}
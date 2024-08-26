/*!
    \breaf Модуль содержит константы.

    Списки констант: 1) Константы, выражающие количество корней квадратного уравнения.
                     2) Константы, отвечающие за стиль текста в консоли.
                     3) Константы, отвечающие за цвет текста в консоли.
                     4) Константы, отвечающие за цвет фона в консоли.
*/

#ifndef LIST_OF_CONST_H
#define LIST_OF_CONST_H

enum quantity_roots 
{
    MORE_ROOTS  =  -1,
    NOT_ROOTS   =   0,
    ONE_ROOT    =   1,
    TWO_ROOTS   =   2,
    SOLVE_ERROR = 100,
};

enum style 
{
    ORDINARY_STYLE  = 0,        //обычный
    BOLD_STYLE      = 1,        //жирный
    FADED_STYLE     = 2,        //бледный
    ITALIC_STYLE    = 3,        //курсив
    UNDERLINE_STYLE = 4,        //подчёркнутый
    FLASHING_STYLE  = 5,        //мигание
    CROSS_OUT_STYLE = 9,        //зачёркнутый
};

enum color_of_text 
{
    BLACK_TEXT     = 30,
    RED_TEXT       = 31, 
    GREEN_TEXT     = 32, 
    YELLOW_TEXT    = 33, 
    BLUE_TEXT      = 34,
    VIOLET_TEXT    = 35,
    TURQUOISE_TEXT = 36,
    WHITE_TEXT     = 37,
};

enum color_of_background 
{
    BLACK_BACKGROUND     = 40,       //чёрный
    RED_BACKGROUND       = 41,       //крысный
    GREEN_BACKGROUND     = 42,       //зелёный
    YELLOW_BACKGROUND    = 43,       //жёлтый
    BLUE_BACKGROUND      = 44,       //голубой
    VIOLET_BACKGROUND    = 45,       //фиолетовый
    TURQUOISE_BACKGROUND = 46,       //бирюзовый
    WHITE_BACKGROUND     = 47,       //белый
};

#endif
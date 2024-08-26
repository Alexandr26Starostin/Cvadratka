/*!
    \breaf Модуль содержит расширенный printf.

    Позволяет расширить возможности printf.
*/

#ifndef COLOR_OF_SYSTEM_H
#define COLOR_OF_SYSTEM_H

/*!
    \breaf Функция позволяет выбрать особенности печати текста в консоль.

    Принимает данные о стиле текста, его цвете, цвете фона, строку для печати в консоль, и печатуемые в этой строке переменные. 
*/

void print_with_color (enum style st, enum color_of_text tex, enum color_of_background bg, const char *line, ...);

#endif
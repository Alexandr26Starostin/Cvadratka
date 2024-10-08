/*!
    \breaf Модуль выводит решение квадратного уравнения.

    Начинает работу после получения количества корней и самих корней квадратного уравнения (при их наличии).
    Выводит запись о количестве корней уравнения и сами корни (если они есть). 

*/

#ifndef ANSWER_SQUARE_H
#define ANSWER_SQUARE_H

/*!
    \breaf Функция печает ответ на решение уравнения.

    Сначала выводит количество корней. 
    Если корней не меньше 1б то выводит и сами корни.
*/

void answer_square (enum quantity_roots quantity, double x1, double x2);

#endif
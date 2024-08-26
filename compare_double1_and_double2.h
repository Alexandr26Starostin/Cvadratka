/*!
    \breaf Модуль отвечает за сравнение чисел типа double.

    Позволяет с хорошей точностью сравнить два числа типа double.
*/

#ifndef COMPARE_DOUBLE1_AND_DOUBLE2_H
#define COMPARE_DOUBLE1_AND_DOUBLE2_H

/*!
    \breaf Позволяет сравнить два числа с плавающей точкой.

    Смотрит на разность между двумя числами.
    Если числа можно считать равными, то возвращает "1".
    Если числа нельзя считать равными, то возвращает "0".
*/

int compare_double1_and_double2 (double t1, double t2);

#endif
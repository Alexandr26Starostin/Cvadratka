/*!
    \breaf Модуль содержит функции для решения линейного уравнения.

    Получает на вход коэффициенты уравнения.
    Содержит алгоритмы для решения линейного уравнения.
    Возвращает количество корней и сами корни при их наличии.
*/

#ifndef SOLVE_LINE_H
#define SOLVE_LINE_H

/*!
    \breaf Функция решает линейное уравнение как частный вид квадратного.

    Решает линейное уравнение.
    Возвращает корни при их наличии и их количество.
*/

enum quantity_roots solve_line           (double b, double c, double* x1, double* x2);

/*!
    \breaf Функция решает линейного уравнение с пошаговым выводом своих действий.

    Решает линейное уравнение.
    Возвращает корни при их наличии и их количество.
    Каждое вычисление при решении уравнения сопровождается выводом в консоль текста с описанием действия, которое выполняет алгоритм.
*/
enum quantity_roots solve_line_with_slip (double b, double c, double* x1, double* x2);

#endif
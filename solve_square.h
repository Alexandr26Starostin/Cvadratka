#ifndef SOLVE_SQUARE_H
#define SOLVE_SQUARE_H

enum quantity_roots solve_square           (double a, double b, double c, double* x1, double* x2);
enum quantity_roots solve_square_with_slip (double a, double b, double c, double* x1, double* x2);

#endif
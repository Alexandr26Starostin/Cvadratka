#ifndef SOLVE_LINE_H
#define SOLVE_LINE_H

enum quantity_roots solve_line           (double b, double c, double* x1, double* x2);
enum quantity_roots solve_line_with_slip (double b, double c, double* x1, double* x2);

#endif
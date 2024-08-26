#ifndef INPUT_CVADRATKA_H
#define INPUT_CVADRATKA_H

struct coefficients
{
    double a, b, c;
};

void input_cvadratka (coefficients* numbers_ptr);
void delete_buffer (void);
int check_end_of_line (void);

#endif
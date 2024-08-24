#ifndef TESTING_CVADRATKA_H
#define TESTING_CVADRATKA_H

struct data_for_test
    {
    int number;
    double a, b, c;
    double x1_right, x2_right;
    enum quantity_roots quantity_right;
    };

int begin_one_test (data_for_test data);
int have_all_tests (void);
void print_text_when_error_without_decisions (int tests, double a, double b, double c, int quantity_right, int quantity);
void print_text_when_error_with_decisions (int tests, double a, double b, double c, double x1_right, double x2_rignt, int quantity_right, int quantity, double x1, double x2);

#endif
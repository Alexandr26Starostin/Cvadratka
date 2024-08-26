#include <TXLib.h>
#include <stdarg.h>

#include "list_of_const.h"
#include "color_of_system.h"

void print_with_color (enum style st, enum color_of_text tex, enum color_of_background bg, const char *line, ...)        //переменные - сокращение типов
{
        printf ("\033[%d;%d;%dm", st, tex, bg);

        va_list arguments;

        va_start (arguments, line);
        vprintf (line, arguments);
        va_end (arguments);

        printf ("\033[0m");
}
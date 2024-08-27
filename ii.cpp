#include <TXLib.h>

#include "list_of_const.h"
#include "ii.h"
#include "color_of_system.h"

void ii(void)
{
    const unsigned delay = 300;
    const int number_of_dots = 4;

    txSleep (delay);
    for (int i = 0; i < number_of_dots; i++) { print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "."); txSleep (delay); }
    printf ("\n");
}
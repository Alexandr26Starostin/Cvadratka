#include <TXLib.h>

#include "list_of_const.h"
#include "ii.h"
#include "color_of_system.h"

void ii(void)
{
    txSleep (1000);
    for (int i = 0; i < 3; i++) { print_with_color (ORDINARY_STYLE, YELLOW_TEXT, BLACK_BACKGROUND, "."); txSleep (1000); }
    printf ("\n");
}
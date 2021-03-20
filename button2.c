/*
** EPITECH PROJECT, 2021
** button2
** File description:
** button2
*/

#include "include/my.h"
#include "include/struct.h"

void button6(defender_t *defender)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == 1) {
        if (defender->pos_arrow.x >= 0 && defender->pos_ms.x <= 114
        && defender->pos_ms.y >= 0
        && defender->pos_ms.y <= 93)
            defender->count_menu = 0;
    }
}
/*
** EPITECH PROJECT, 2021
** creation4
** File description:
** creation4
*/

#include "include/my.h"
#include "include/struct.h"

void set_position3(defender_t *defender)
{
    sfSprite_setPosition(defender->shot3, defender->pos_shot3);
    sfSprite_setPosition(defender->shot4, defender->pos_shot4);
    sfSprite_setPosition(defender->shot5, defender->pos_shot5);
    sfSprite_setPosition(defender->shot6, defender->pos_shot6);
    sfSprite_setPosition(defender->shot7, defender->pos_shot7);
}

void position6(defender_t *defender)
{
    defender->origin_shot3.x = 73;
    defender->origin_shot3.y = 46;
    defender->origin_shot4.x = 73;
    defender->origin_shot4.y = 46;
    defender->origin_shot5.x = 73;
    defender->origin_shot5.y = 46;
    defender->origin_shot6.x = 73;
    defender->origin_shot6.y = 46;
    defender->origin_shot7.x = 73;
    defender->origin_shot7.y = 46;
}

void position5(defender_t *defender)
{
    defender->pos_m_build.x = 1678;
    defender->pos_m_build.y = 300;
    defender->pos_shot3.x = 805;
    defender->pos_shot3.y = 650;
    defender->pos_shot4.x = 485;
    defender->pos_shot4.y = 800;
    defender->pos_shot5.x = 1130;
    defender->pos_shot5.y = 600;
    defender->pos_shot6.x = 1465;
    defender->pos_shot6.y = 450;
    defender->pos_shot7.x = 1130;
    defender->pos_shot7.y = 850;
    position6(defender);
}
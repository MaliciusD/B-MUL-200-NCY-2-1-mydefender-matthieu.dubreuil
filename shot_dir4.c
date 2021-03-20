/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** enemy_shot
*/

#include "include/my.h"
#include "include/struct.h"
#include <math.h>

void call_shdir14(defender_t *defender)
{
    if (defender->trigger7 == 2) {
        const float pi2 = 3.14159265;
        defender->di7 = defender->pos_ms.x - defender->pos_shot7.x;
        defender->diy7 = defender->pos_ms.y - defender->pos_shot7.y;
        float rotation2 = (atan2(defender->diy7, defender->di7)) * 180 /
        pi2;
        sfSprite_setOrigin(defender->shot7, defender->origin_shot7);
        sfSprite_setRotation(defender->shot7, rotation2 + 180);
        defender->dx15 = defender->di7 * 5;
        defender->dy15 = defender->diy7 * 5;
        defender->dx16 = defender->di7;
        defender->dy16 = defender->diy7;
        defender->pos25 = (defender->pos_shot7.x - defender->dx16);
        defender->pos26 = (defender->pos_shot7.x + defender->dx16);
        defender->pos27 = (defender->pos_shot7.y + defender->dy16);
        defender->pos28 = (defender->pos_shot7.y - defender->dy16);
        defender->trigger7 = 3;
    }
}

void call_shdir13(defender_t *defender)
{
    if (defender->trigger7 == 0) {
        const float pi2 = 3.14159265;
        defender->di7 = defender->pos_ms.x - defender->pos_shot7.x;
        defender->diy7 = defender->pos_ms.y - defender->pos_shot7.y;
        float rotation2 = (atan2(defender->diy7, defender->di7)) * 180 /
        pi2;
        sfSprite_setOrigin(defender->shot7, defender->origin_shot7);
        sfSprite_setRotation(defender->shot7, rotation2 + 180);
        defender->dx15 = defender->di7 * 40;
        defender->dy15 = defender->diy7 * 40;
        defender->dx16 = defender->di7;
        defender->dy16 = defender->diy7;
        defender->pos25 = (defender->pos_shot7.x - defender->dx16);
        defender->pos26 = (defender->pos_shot7.x + defender->dx16);
        defender->pos27 = (defender->pos_shot7.y + defender->dy16);
        defender->pos28 = (defender->pos_shot7.y - defender->dy16);
        defender->trigger7 = 1;
    }
}
/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender
*/

#include "include/my.h"
#include "include/struct.h"

void animation1(defender_t *defender)
{
    defender->anim_enemy.left += 90;
    defender->anim_shot.left += 170;
    defender->anim_shot2.left += 170;
    defender->anim_shot3.left += 170;
    defender->anim_shot4.left += 170;
    defender->anim_shot5.left += 170;
    defender->anim_shot6.left += 170;
    defender->anim_shot7.left += 170;
    if (defender->anim_enemy.left >= 720)
        defender->anim_enemy.left = 0;
    if (defender->anim_shot.left >= 1020)
        defender->anim_shot.left = 0;
    if (defender->anim_shot2.left >= 1020)
        defender->anim_shot2.left = 0;
    if (defender->anim_shot3.left >= 1020)
        defender->anim_shot3.left = 0;
    if (defender->anim_shot4.left >= 1020)
        defender->anim_shot4.left = 0;
    if (defender->anim_shot5.left >= 1020)
        defender->anim_shot5.left = 0;
}

void enemy_shot7(defender_t *defender)
{
    if (defender->trigger7 == 1) {
        call_shot25(defender);
        call_shot26(defender);
    } rst_sh7(defender);
    if (defender->trigger7 == 3) {
        call_shot27(defender);
        call_shot28(defender);
    } if ((defender->pos_shot7.x >= 1920 && defender->trigger7 == 3) ||
    (defender->pos_shot7.x <= 0 &&
    defender->trigger7 == 3) || (defender->pos_shot7.y >= 1080 &&
    defender->trigger7 == 3) || (defender->pos_shot7.y <= 0 &&
    defender->trigger7 == 3)) { defender->pos_shot7.x = 1130;
        defender->pos_shot7.y = 850;
        defender->count25 = 0;
        defender->count26 = 0;
        defender->count27 = 0;
        defender->count28 = 0;
        defender->trigger7 = 2;
        defender->stop_shotx7 = 0;
        defender->stop_shoty7 = 0; }
}

void enemy_shot6(defender_t *defender)
{
    if (defender->trigger6 == 1) {
        call_shot21(defender);
        call_shot22(defender);
    } rst_sh6(defender);
    if (defender->trigger6 == 3) {
        call_shot23(defender);
        call_shot24(defender);
    } if ((defender->pos_shot6.x >= 1920 && defender->trigger6 == 3) ||
    (defender->pos_shot6.x <= 0 &&
    defender->trigger6 == 3) || (defender->pos_shot6.y >= 1080 &&
    defender->trigger6 == 3) || (defender->pos_shot6.y <= 0 &&
    defender->trigger6 == 3)) { defender->pos_shot6.x = 1465;
        defender->pos_shot6.y = 450;
        defender->count21 = 0;
        defender->count22 = 0;
        defender->count23 = 0;
        defender->count24 = 0;
        defender->trigger6 = 2;
        defender->stop_shotx6 = 0;
        defender->stop_shoty6 = 0; }
}
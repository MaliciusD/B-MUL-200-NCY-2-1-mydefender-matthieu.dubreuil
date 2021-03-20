/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender
*/

#include "include/my.h"
#include "include/struct.h"

void enemy_shot5(defender_t *defender)
{
    if (defender->trigger5 == 1) {
        call_shot17(defender);
        call_shot18(defender);
    } rst_sh5(defender);
    if (defender->trigger5 == 3) {
        call_shot19(defender);
        call_shot20(defender);
    } if ((defender->pos_shot5.x >= 1920 && defender->trigger5 == 3) ||
    (defender->pos_shot5.x <= 0 &&
    defender->trigger5 == 3) || (defender->pos_shot5.y >= 1080 &&
    defender->trigger5 == 3) || (defender->pos_shot5.y <= 0 &&
    defender->trigger5 == 3)) { defender->pos_shot5.x = 1130;
        defender->pos_shot5.y = 600;
        defender->count17 = 0;
        defender->count18 = 0;
        defender->count19 = 0;
        defender->count20 = 0;
        defender->trigger5 = 2;
        defender->stop_shotx5 = 0;
        defender->stop_shoty5 = 0; }
}

void enemy_shot4(defender_t *defender)
{
    if (defender->trigger4 == 1) {
        call_shot13(defender);
        call_shot14(defender);
    } rst_sh4(defender);
    if (defender->trigger4 == 3) {
        call_shot15(defender);
        call_shot16(defender);
    } if ((defender->pos_shot4.x >= 1920 && defender->trigger4 == 3) ||
    (defender->pos_shot4.x <= 0 &&
    defender->trigger4 == 3) || (defender->pos_shot4.y >= 1080 &&
    defender->trigger4 == 3) || (defender->pos_shot4.y <= 0 &&
    defender->trigger4 == 3)) { defender->pos_shot4.x = 485;
        defender->pos_shot4.y = 800;
        defender->count13 = 0;
        defender->count14 = 0;
        defender->count15 = 0;
        defender->count16 = 0;
        defender->trigger4 = 2;
        defender->stop_shotx4 = 0;
        defender->stop_shoty4 = 0; }
}

void enemy_shot3(defender_t *defender)
{
    if (defender->trigger3 == 1) {
        call_shot9(defender);
        call_shot10(defender);
    } rst_sh3(defender);
    if (defender->trigger3 == 3) {
        call_shot11(defender);
        call_shot12(defender);
    } if ((defender->pos_shot3.x >= 1920 && defender->trigger3 == 3) ||
    (defender->pos_shot3.x <= 0 &&
    defender->trigger3 == 3) || (defender->pos_shot3.y >= 1080 &&
    defender->trigger3 == 3) || (defender->pos_shot3.y <= 0 &&
    defender->trigger3 == 3)) { defender->pos_shot3.x = 805;
        defender->pos_shot3.y = 650;
        defender->count9 = 0;
        defender->count10 = 0;
        defender->count11 = 0;
        defender->count12 = 0;
        defender->trigger3 = 2;
        defender->stop_shotx3 = 0;
        defender->stop_shoty3 = 0; }
}

void enemy_shot2(defender_t *defender)
{
    if (defender->trigger2 == 1) {
        call_shot5(defender);
        call_shot6(defender);
    } rst_sh2(defender);
    if (defender->trigger2 == 3) {
        call_shot7(defender);
        call_shot8(defender);
    } if ((defender->pos_shot2.x >= 1920 && defender->trigger2 == 3) ||
    (defender->pos_shot2.x <= 0 &&
    defender->trigger2 == 3) || (defender->pos_shot2.y >= 1080 &&
    defender->trigger2 == 3) || (defender->pos_shot2.y <= 0 &&
    defender->trigger2 == 3)) { defender->pos_shot2.x = 815;
        defender->pos_shot2.y = 420;
        defender->count5 = 0;
        defender->count6 = 0;
        defender->count7 = 0;
        defender->count8 = 0;
        defender->trigger2 = 2;
        defender->stop_shotx2 = 0;
        defender->stop_shoty2 = 0; }
}

void enemy_shot(defender_t *defender)
{
    if (defender->trigger == 1) {
        call_sh1(defender);
        call_sh2(defender);
    }
    rst_sh1(defender);
    if (defender->trigger == 3) {
        call_sh3(defender);
        call_sh4(defender);
    }
    if ((defender->pos_shot.x >= 1920 && defender->trigger == 3) ||
    (defender->pos_shot.x <= 0 && defender->trigger == 3) ||
    (defender->pos_shot.y >= 1080 && defender->trigger == 3) ||
    (defender->pos_shot.y <= 0 && defender->trigger == 3)) {
        defender->pos_shot.x = 485;
        defender->pos_shot.y = 270;
        defender->count = 0;
        defender->count2 = 0;
        defender->count3 = 0;
        defender->count4 = 0;
        defender->stop_shotx = 0;
        defender->stop_shoty = 0;
        defender->trigger = 2; }
}
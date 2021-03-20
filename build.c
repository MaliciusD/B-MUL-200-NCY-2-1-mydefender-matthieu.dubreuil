/*
** EPITECH PROJECT, 2021
** build
** File description:
** build
*/

#include "include/my.h"
#include "include/struct.h"
#include <math.h>

void build(defender_t *defender)
{
    if ((defender->pos_ms.x >= 414 && defender->pos_ms.x <= 529
    && defender->pos_ms.y >= 214 && defender->pos_ms.y <= 317)
    || (defender->pos_ms.x >= 750 && defender->pos_ms.x <= 865
    && defender->pos_ms.y >= 369 && defender->pos_ms.y <= 472)
    || (defender->pos_ms.x >= 750 && defender->pos_ms.x <= 865
    && defender->pos_ms.y >= 609 && defender->pos_ms.y <= 712)
    || (defender->pos_ms.x >= 414 && defender->pos_ms.x <= 529
    && defender->pos_ms.y >= 807 && defender->pos_ms.y <= 910)
    || (defender->pos_ms.x >= 1066 && defender->pos_ms.x <= 1181
    && defender->pos_ms.y >= 556 && defender->pos_ms.y <= 659)
    || (defender->pos_ms.x >= 1385 && defender->pos_ms.x <= 1500
    && defender->pos_ms.y >= 369 && defender->pos_ms.y <= 472)
    || (defender->pos_ms.x >= 1066 && defender->pos_ms.x <= 1181
    && defender->pos_ms.y >= 807 && defender->pos_ms.y <= 910)) {
        sfRenderWindow_drawSprite(defender->window, defender->cs, NULL);
        sfRenderWindow_setMouseCursorVisible(defender->window, sfFalse);
    }
    else
        sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
}

void tower(defender_t *defender)
{
    float dx = defender->pos_ms.x - defender->pos_twer1.x;
    float dy = defender->pos_ms.y - defender->pos_twer1.y;
    const float pi = 3.14159265;
    float rotation = (atan2(dy, dx)) * 180 / pi;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 414 && defender->pos_ms.x <= 529
        && defender->pos_ms.y >= 214 && defender->pos_ms.y <= 317) {
            defender->count_twer = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass1, NULL);
        sfSprite_setOrigin(defender->twer1, defender->origin);
        sfSprite_setRotation(defender->twer1, rotation + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer1, NULL);
        call_shdir1(defender);
        call_shdir2(defender);
    } tower2(defender);
}

void tower2(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx = defender->pos_ms.x - defender->pos_twer2.x;
    float dy = defender->pos_ms.y - defender->pos_twer2.y;
    float rotation = (atan2(dy, dx)) * 180 / pi;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 750 && defender->pos_ms.x <= 865
        && defender->pos_ms.y >= 369 && defender->pos_ms.y <= 472) {
            defender->count_twer2 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer2 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass3, NULL);
        sfSprite_setOrigin(defender->twer2, defender->origin);
        sfSprite_setRotation(defender->twer2, rotation + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot2, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer2, NULL);
        call_shdir3(defender);
        call_shdir4(defender);
    } tower3(defender);
}

void tower3(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx = defender->pos_ms.x - defender->pos_twer3.x;
    float dy = defender->pos_ms.y - defender->pos_twer3.y;
    float rotation = (atan2(dy, dx)) * 180 / pi;

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 750 && defender->pos_ms.x <= 865
        && defender->pos_ms.y >= 609 && defender->pos_ms.y <= 712) {
            defender->count_twer3 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer3 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass4, NULL);
        sfSprite_setOrigin(defender->twer3, defender->origin);
        sfSprite_setRotation(defender->twer3, rotation + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot3, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer3, NULL);
        call_shdir5(defender);
        call_shdir6(defender);
    }
    tower4(defender);
}

void tower4(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx2 = defender->pos_ms.x - defender->pos_twer4.x;
    float dy2 = defender->pos_ms.y - defender->pos_twer4.y;
    float rotation2 = (atan2(dy2, dx2)) * 180 / pi;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 414 && defender->pos_ms.x <= 529
        && defender->pos_ms.y >= 807 && defender->pos_ms.y <= 910) {
            defender->count_twer4 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer4 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass2, NULL);
        sfSprite_setOrigin(defender->twer4, defender->origin);
        sfSprite_setRotation(defender->twer4, rotation2+ 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot4, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer4, NULL);
        call_shdir7(defender);
        call_shdir8(defender);
    } tower5(defender);
}
/*
** EPITECH PROJECT, 2021
** build2
** File description:
** build2
*/

#include "include/my.h"
#include "include/struct.h"
#include <math.h>

void tower5(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx = defender->pos_ms.x - defender->pos_twer5.x;
    float dy = defender->pos_ms.y - defender->pos_twer5.y;
    float rotation = (atan2(dy, dx)) * 180 / pi;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 1066 && defender->pos_ms.x <= 1181
        && defender->pos_ms.y >= 556 && defender->pos_ms.y <= 659) {
            defender->count_twer5 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer5 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass6, NULL);
        sfSprite_setOrigin(defender->twer5, defender->origin);
        sfSprite_setRotation(defender->twer5, rotation + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot5, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer5, NULL);
        call_shdir9(defender);
        call_shdir10(defender);
    } tower6(defender);
}

void tower6(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx2 = defender->pos_ms.x - defender->pos_twer6.x;
    float dy2 = defender->pos_ms.y - defender->pos_twer6.y;
    float rotation2 = (atan2(dy2, dx2)) * 180 / pi;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 1385 && defender->pos_ms.x <= 1500
        && defender->pos_ms.y >= 369 && defender->pos_ms.y <= 472) {
            defender->count_twer6 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer6 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass5, NULL);
        sfSprite_setOrigin(defender->twer6, defender->origin);
        sfSprite_setRotation(defender->twer6, rotation2 + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot6, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer6, NULL);
        call_shdir11(defender);
        call_shdir12(defender);
    } tower7(defender);
}

void tower7(defender_t *defender)
{
    const float pi = 3.14159265;
    float dx3 = defender->pos_ms.x - defender->pos_twer7.x;
    float dy3 = defender->pos_ms.y - defender->pos_twer7.y;
    float rotation3 = (atan2(dy3, dx3)) * 180 / pi;

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (defender->pos_ms.x >= 1066 && defender->pos_ms.x <= 1181
        && defender->pos_ms.y >= 807 && defender->pos_ms.y <= 910) {
            defender->count_twer7 = 1;
            sfRenderWindow_setMouseCursorVisible(defender->window, sfTrue);
        }
    }
    if (defender->count_twer7 == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->grass7, NULL);
        sfSprite_setOrigin(defender->twer7, defender->origin);
        sfSprite_setRotation(defender->twer7, rotation3 + 180);
        sfRenderWindow_drawSprite(defender->window, defender->shot7, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->twer7, NULL);
        call_shdir13(defender);
        call_shdir14(defender);
    }
}
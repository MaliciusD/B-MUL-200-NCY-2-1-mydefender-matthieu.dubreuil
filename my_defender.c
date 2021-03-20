/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender
*/

#include "include/my.h"
#include "include/struct.h"

void game_func(defender_t *defender)
{
    enemy_path(defender);
    enemy_shot(defender);
    enemy_shot2(defender);
    enemy_shot3(defender);
    enemy_shot4(defender);
    enemy_shot5(defender);
    enemy_shot6(defender);
    enemy_shot7(defender);
    animation1(defender);
    if (defender->anim_shot6.left >= 1020)
        defender->anim_shot6.left = 0;
    if (defender->anim_shot7.left >= 1020)
        defender->anim_shot7.left = 0;
}

void call_clock(defender_t *defender)
{
    defender->time = sfClock_getElapsedTime(defender->clock);
    defender->seconds = defender->time.microseconds / 800000.0;
    if (defender->seconds > 0.04) {
        if (defender->count_menu == 1) {
            game_func(defender);
        } sfSprite_setTextureRect(defender->enemy, defender->anim_enemy);
        sfSprite_setTextureRect(defender->shot, defender->anim_shot);
        sfSprite_setTextureRect(defender->shot2, defender->anim_shot2);
        sfSprite_setTextureRect(defender->shot3, defender->anim_shot3);
        sfSprite_setTextureRect(defender->shot4, defender->anim_shot4);
        sfSprite_setTextureRect(defender->shot5, defender->anim_shot5);
        sfSprite_setTextureRect(defender->shot6, defender->anim_shot6);
        sfSprite_setTextureRect(defender->shot7, defender->anim_shot7);
        sfClock_restart(defender->clock); }
}

void game_loop(defender_t *defender)
{
    while (sfRenderWindow_isOpen(defender->window)){
        while (sfRenderWindow_pollEvent(defender->window, &defender->event)) {
            if (defender->event.type == sfEvtClosed)
                sfRenderWindow_close(defender->window);
            if (sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue)
                sfRenderWindow_close(defender->window);
        }
    call_clock(defender);
    set_position(defender);
    if (defender->count_fps == 0)
        sfRenderWindow_setFramerateLimit(defender->window, 60);
    menu(defender);
    sfRenderWindow_display(defender->window);
    }
}
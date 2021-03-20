/*
** EPITECH PROJECT, 2021
** menu
** File description:
** menu
*/

#include "include/my.h"
#include "include/struct.h"

void menu(defender_t *defender)
{
    if (defender->count_menu == 0) {
        button(defender);
        button5(defender);
        sfRenderWindow_drawSprite(defender->window, defender->bg_menu, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_play, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_back, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_sett, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->htp, NULL);
    }
    if (defender->count_menu == 1) {
        sfRenderWindow_drawSprite(defender->window, defender->bg, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->enemy, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->vie1, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue)
            defender->count_menu = 3;
        build(defender);
        tower(defender);
        sfRenderWindow_drawSprite(defender->window, defender->m_build, NULL);
        vie(defender);
    } menu2(defender);
}

void menu2(defender_t *defender)
{
    if (defender->count_menu == 2) {
        button2(defender);
        sfRenderWindow_drawSprite(defender->window, defender->bg_sett, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->arrow, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_60, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_120, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->butt_180, NULL);
    }
    if (defender->count_menu == 3) {
        paus(defender);
    }
    if (defender->count_menu == 4) {
        button6(defender);
        sfRenderWindow_drawSprite(defender->window, defender->m_htp, NULL);
        sfRenderWindow_drawSprite(defender->window, defender->arrow, NULL);
    }
}
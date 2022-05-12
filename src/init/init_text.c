/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_text.c
*/

#include "rpg.h"

void text_green_pnj(asset_t *pnj)
{
    pnj->font = sfFont_createFromFile("./assets/Text.ttf");
    pnj->text1 = sfText_create();
    sfText_setString(pnj->text1, "Bienvenu! ici c'est Diamond city");
    sfText_setFont(pnj->text1, pnj->font);
    sfText_setColor(pnj->text1, sfBlack);
    sfText_setCharacterSize(pnj->text1, 30);
    sfText_setPosition(pnj->text1, (sfVector2f){310, 920});
    pnj->text2 = sfText_create();
    sfText_setString(pnj->text2, "C'est une zone dangereuse fait attention !");
    sfText_setFont(pnj->text2, pnj->font);
    sfText_setColor(pnj->text2, sfBlack);
    sfText_setCharacterSize(pnj->text2, 30);
    sfText_setPosition(pnj->text2, (sfVector2f){310, 960});
    pnj->text3 = sfText_create();
    sfText_setString(pnj->text3, "Suit la route tu trouveras du monde !");
    sfText_setFont(pnj->text3, pnj->font);
    sfText_setColor(pnj->text3, sfBlack);
    sfText_setCharacterSize(pnj->text3, 30);
    sfText_setPosition(pnj->text3, (sfVector2f){310, 1000});
}

void text_black_pnj(asset_t *pnj)
{
    pnj->font = sfFont_createFromFile("./assets/Text.ttf");
    pnj->text4 = sfText_create();
    sfText_setString(pnj->text4, "Bien le bonsoir !");
    sfText_setFont(pnj->text4, pnj->font);
    sfText_setColor(pnj->text4, sfBlack);
    sfText_setCharacterSize(pnj->text4, 30);
    sfText_setPosition(pnj->text4, (sfVector2f){310, 920});
    pnj->text14 = sfText_create();
    sfText_setString(pnj->text14, "Il y a des coffres perdus dans la ville");
    sfText_setFont(pnj->text14, pnj->font);
    sfText_setColor(pnj->text14, sfBlack);
    sfText_setCharacterSize(pnj->text14, 30);
    sfText_setPosition(pnj->text14, (sfVector2f){310, 960});
    pnj->text15 = sfText_create();
    sfText_setString(pnj->text15, "Il peut y avoir des objets intriguants");
    sfText_setFont(pnj->text15, pnj->font);
    sfText_setColor(pnj->text15, sfBlack);
    sfText_setCharacterSize(pnj->text15, 30);
    sfText_setPosition(pnj->text15, (sfVector2f){310, 1000});
}

void text_purple_pnj1(asset_t *pnj)
{
    pnj->font = sfFont_createFromFile("./assets/Text.ttf");
    pnj->text7 = sfText_create();
    sfText_setString(pnj->text7, "Apparement le docteur travaille");
    sfText_setFont(pnj->text7, pnj->font);
    sfText_setColor(pnj->text7, sfBlack);
    sfText_setCharacterSize(pnj->text7, 30);
    sfText_setPosition(pnj->text7, (sfVector2f){310, 920});
    pnj->text8 = sfText_create();
    sfText_setString(pnj->text8, "sur un vaccin pour soigner les habitants!");
    sfText_setFont(pnj->text8, pnj->font);
    sfText_setColor(pnj->text8, sfBlack);
    sfText_setCharacterSize(pnj->text8, 30);
    sfText_setPosition(pnj->text8, (sfVector2f){810, 920});
    pnj->text9 = sfText_create();
    sfText_setString(pnj->text9, "Mais il lui manque des composants");
    sfText_setFont(pnj->text9, pnj->font);
    sfText_setColor(pnj->text9, sfBlack);
    sfText_setCharacterSize(pnj->text9, 30);
    sfText_setPosition(pnj->text9, (sfVector2f){310, 960});
}

void text_orange_pnj(asset_t *pnj)
{
    pnj->font = sfFont_createFromFile("./assets/Text.ttf");
    pnj->text10 = sfText_create();
    sfText_setString(pnj->text10, "Bonjour, je suis le docteur");
    sfText_setFont(pnj->text10, pnj->font);
    sfText_setColor(pnj->text10, sfBlack);
    sfText_setCharacterSize(pnj->text10, 30);
    sfText_setPosition(pnj->text10, (sfVector2f){310, 920});
    pnj->text5 = sfText_create();
    sfText_setString(pnj->text5, "Apporte moi le composant pour le serum");
    sfText_setFont(pnj->text5, pnj->font);
    sfText_setColor(pnj->text5, sfBlack);
    sfText_setCharacterSize(pnj->text5, 30);
    sfText_setPosition(pnj->text5, (sfVector2f){310, 960});
    pnj->text6 = sfText_create();
    sfText_setString(pnj->text6, "Je serai un hero en sauvant le monde");
    sfText_setFont(pnj->text6, pnj->font);
    sfText_setColor(pnj->text6, sfBlack);
    sfText_setCharacterSize(pnj->text6, 30);
    sfText_setPosition(pnj->text6, (sfVector2f){310, 1000});
}

void text_purple_pnj2(asset_t *pnj)
{
    pnj->font = sfFont_createFromFile("./assets/Text.ttf");
    pnj->text11 = sfText_create();
    sfText_setString(pnj->text11, "Les zombies sont dangereux, Attention !");
    sfText_setFont(pnj->text11, pnj->font);
    sfText_setColor(pnj->text11, sfBlack);
    sfText_setCharacterSize(pnj->text11, 30);
    sfText_setPosition(pnj->text11, (sfVector2f){310, 920});
    pnj->text16 = sfText_create();
    sfText_setString(pnj->text16, "Avec une arme tu peux les tuer easy !");
    sfText_setFont(pnj->text16, pnj->font);
    sfText_setColor(pnj->text16, sfBlack);
    sfText_setCharacterSize(pnj->text16, 30);
    sfText_setPosition(pnj->text16, (sfVector2f){310, 960});
    pnj->text17 = sfText_create();
    sfText_setString(pnj->text17, "Maintenant trouve toi une arme");
    sfText_setFont(pnj->text17, pnj->font);
    sfText_setColor(pnj->text17, sfBlack);
    sfText_setCharacterSize(pnj->text17, 30);
    sfText_setPosition(pnj->text17, (sfVector2f){310, 1000});
}
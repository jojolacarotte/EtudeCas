/**
 * \file      carte.c
 * \author    PHAN Joseph, SEYDI Sarta, MONCAYO Lo�c
 * \version   1.1
 * \date      10 Decembre 2014
 * \brief     Contient la fonction permettant d'associer les images "sprites" aux positions sur la carte.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "carte.h"

/**
 * \brief      Chargement des images + initialisation des sprites pour les cases de la carte + position du personnage
 * \details    Choix des positions gr�ce a la taille d'un sprite et chargement des images + gestion de la transparence
 */
void initilisationPositions()
{
    positionChemin.x = TAILLE_SPRITE*2;
    positionChemin.y = TAILLE_SPRITE*0;
    positionChemin.h = TAILLE_SPRITE;
    positionChemin.w = TAILLE_SPRITE;

    positionHerbe.x = TAILLE_SPRITE*3;
    positionHerbe.y = 0;
    positionHerbe.w = TAILLE_SPRITE;
    positionHerbe.h = TAILLE_SPRITE;

    positionEau.x = TAILLE_SPRITE*1;
    positionEau.y = TAILLE_SPRITE*4;
    positionEau.w = TAILLE_SPRITE;
    positionEau.h = TAILLE_SPRITE;

    positionMur.x = TAILLE_SPRITE*2;
    positionMur.y = TAILLE_SPRITE*3;
    positionMur.w = TAILLE_SPRITE;
    positionMur.h = TAILLE_SPRITE;

    positionArbre.x = TAILLE_SPRITE*0;
    positionArbre.y = TAILLE_SPRITE*1;
    positionArbre.w = TAILLE_SPRITE;
    positionArbre.h = TAILLE_SPRITE;

    positionPerso.x = 0;
    positionPerso.y = 0;
    positionPerso.w = TAILLE_SPRITE;
    positionPerso.h = TAILLE_SPRITE;

    PosFinal.x = 0;
    PosFinal.y = 0;
    PosFinal.w = TAILLE_SPRITE;
    PosFinal.h = TAILLE_SPRITE;

    posPerso.x = 0;
    posPerso.y = 0;

    sprites = IMG_Load("images/sprites1.bmp");
    perso = IMG_Load("images/perso.bmp");
    gland = IMG_Load("images/gland.bmp");

    SDL_SetColorKey(perso, SDL_SRCCOLORKEY, SDL_MapRGB(perso->format, 255, 255, 255));
    SDL_SetColorKey(sprites, SDL_SRCCOLORKEY, SDL_MapRGB(sprites->format, 255, 255, 255));
    SDL_SetColorKey(gland, SDL_SRCCOLORKEY, SDL_MapRGB(gland->format, 255, 255, 255));

}


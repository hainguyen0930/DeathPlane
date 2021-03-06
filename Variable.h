#ifndef VARIABLE_H
#define VARIABLE_H


#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

static SDL_Window* gWindow = NULL;


static SDL_Renderer* gRenderer = NULL;

//Screen dimension constants
const int SCREEN_WIDTH =  720;
const int SCREEN_HEIGHT =  720 ;
static int STEPBG = 1;
static int NUMTHREATS = 3;
const int PLAYERPOWER = 1;
const int FRAME = 8;
static int SCORE = 0;
static int STEPBULLET = STEPBG + 2;

#define WIDTH_SPHERE 10
#define HEIGHT_SPHERE 10
#define WIDTH_AIRCRAFT 90
#define HEIGHT_AIRCRAFT 100
#define WIDTH_LASER 5
#define HEIGHT_LASER 35

// SOUND
static Mix_Chunk* g_Sound_Bullet;
static Mix_Music * g_Sound_Background;
static Mix_Chunk * g_Sound_Broken;
static Mix_Music * g_Sound_Menu;
static Mix_Chunk * g_Sound_Laser;


//Setup Text
static TTF_Font * gFont = NULL;
static SDL_Color textColor = { 255, 255, 255, 0xFF };
static SDL_Color textColor1 = { 0, 0, 0, 0xFF };

#endif // VARIABLE_H

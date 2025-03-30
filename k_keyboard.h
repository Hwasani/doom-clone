#ifndef K_KEYBOARD
#define K_KEYBOARD

#include <SDL2/SDL_scancode.h>
#ifdef _WIN64
#include "libs/win_sdl2/include/SDL2/SDL.h"
#elif __APPLE__
#include "libs/macos_sdl2/include/SDL2/SDL.h"
#endif

#include "g_game_state.h"
#include "p_player.h"
#include <stdio.h>

typedef struct _keymap
{
    SDL_Scancode left;
    SDL_Scancode right;
    SDL_Scancode backward;
    SDL_Scancode forward;
    SDL_Scancode up;
    SDL_Scancode down;
    SDL_Scancode strafe_left;
    SDL_Scancode strafe_right;
    SDL_Scancode quit;
    SDL_Scancode debug_mode;
} keymap_t;

typedef struct _keystates
{
    bool left;
    bool right;
    bool backward;
    bool forward;
    bool up;
    bool down;
    bool strafe_left;
    bool strafe_right;
    bool quit;
    bool debug_mode;
} keystates_t;

enum KBD_KEY_STATE
{
    KEY_STATE_UP,
    KEY_STATE_DOWN,
};

void K_InitKeymap();
void K_HandleEvents(game_state_t *game_state, player_t *player);
void K_ProcessKeyStates();
void K_HandleRealtimeKeys(SDL_Scancode key_scancode, enum KBD_KEY_STATE state);

#endif
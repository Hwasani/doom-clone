#include "k_keyboard.h"

void K_InitKeymap()
{
    
}
void K_HandleEvents(game_state_t *game_state, player_t *player);
void K_ProcessKeyStates();
void K_HandleRealtimeKeys(SDL_Scancode key_scancode, enum KBD_KEY_STATE state);
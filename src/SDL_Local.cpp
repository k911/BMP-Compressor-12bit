#include "SDL_Local.h"

SDL::SDL(uint32_t flags)
{
    if (SDL_Init(flags) != 0)
        throw RuntimeError();
}

SDL::~SDL()
{
    SDL_Quit();
}

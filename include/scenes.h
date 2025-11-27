#ifndef AMPHORA_SCENES_H
#define AMPHORA_SCENES_H

#include "SDL.h"

#ifdef __cplusplus
extern "C" {
#endif
int Amphora_LoadScene(const char *name);
int Amphora_SetSceneFadeParameters(Uint16 ms, SDL_Color color);
#ifdef __cplusplus
}
#endif

#endif /* AMPHORA_SCENES_H */

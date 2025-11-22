#ifndef AMPHORA_COLLISION_INTERNAL_H
#define AMPHORA_COLLISION_INTERNAL_H

#include "../collision.h"
#include "internal/render.h"

struct amphora_collidable_t {
	enum amphora_object_type_e type;
	SDL_FRect rectangle;
};

#endif /* AMPHORA_COLLISION_INTERNAL_H */

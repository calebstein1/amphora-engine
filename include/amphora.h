#ifndef AMPHORA_H
#define AMPHORA_H

#include "config.h"

typedef struct input_state_t {
#define KMAP(action, ...) bool action : 1;
	DEFAULT_KEYMAP
#undef KMAP
} InputState;

#include "collision.h"
#include "db.h"
#include "error.h"
#include "events.h"
#include "img.h"
#include "input.h"
#include "memory.h"
#include "mixer.h"
#include "particles.h"
#include "random.h"
#include "render.h"
#include "save_data.h"
#include "scenes.h"
#include "session_data.h"
#include "tilemap.h"
#include "ttf.h"
#include "typewriter.h"
#include "util.h"

#endif /* AMPHORA_H */

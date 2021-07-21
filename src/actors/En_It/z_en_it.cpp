extern "C" {
#include "z_en_it.hpp"

#define FLAGS 0x00000000

void EnIt_Init(Actor* actor, GameState* state);
void EnIt_Destroy(Actor* actor, GameState* state);
void EnIt_Update(Actor* actor, GameState* state);

/*
ActorInit En_It_InitVars = {
    ACTOR_EN_IT,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnIt),
    (ActorFunc)EnIt_Init,
    (ActorFunc)EnIt_Destroy,
    (ActorFunc)EnIt_Update,
    (ActorFunc)NULL,
};
*/
}

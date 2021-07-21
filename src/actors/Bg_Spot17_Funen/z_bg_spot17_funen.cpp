extern "C" {
#include "z_bg_spot17_funen.hpp"

#define FLAGS 0x80400030

void BgSpot17Funen_Init(Actor* actor, GameState* state);
void BgSpot17Funen_Destroy(Actor* actor, GameState* state);
void BgSpot17Funen_Update(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot17_Funen_InitVars = {
    ACTOR_BG_SPOT17_FUNEN,
    ACTORCAT_SWITCH,
    FLAGS,
    OBJECT_SPOT17_OBJ,
    sizeof(BgSpot17Funen),
    (ActorFunc)BgSpot17Funen_Init,
    (ActorFunc)BgSpot17Funen_Destroy,
    (ActorFunc)BgSpot17Funen_Update,
    (ActorFunc)NULL,
};
*/
}

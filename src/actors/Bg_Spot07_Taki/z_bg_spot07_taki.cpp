extern "C" {
#include "z_bg_spot07_taki.hpp"

#define FLAGS 0x80400030

void BgSpot07Taki_Init(Actor* actor, GameState* state);
void BgSpot07Taki_Destroy(Actor* actor, GameState* state);
void BgSpot07Taki_Update(Actor* actor, GameState* state);
void BgSpot07Taki_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot07_Taki_InitVars = {
    ACTOR_BG_SPOT07_TAKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT07_OBJECT,
    sizeof(BgSpot07Taki),
    (ActorFunc)BgSpot07Taki_Init,
    (ActorFunc)BgSpot07Taki_Destroy,
    (ActorFunc)BgSpot07Taki_Update,
    (ActorFunc)BgSpot07Taki_Draw,
};
*/
}

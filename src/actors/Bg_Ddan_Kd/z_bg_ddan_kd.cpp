extern "C" {
#include "z_bg_ddan_kd.hpp"

#define FLAGS 0x80400010

void BgDdanKd_Init(Actor* actor, GameState* state);
void BgDdanKd_Destroy(Actor* actor, GameState* state);
void BgDdanKd_Update(Actor* actor, GameState* state);
void BgDdanKd_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Ddan_Kd_InitVars = {
    ACTOR_BG_DDAN_KD,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_DDAN_OBJECTS,
    sizeof(BgDdanKd),
    (ActorFunc)BgDdanKd_Init,
    (ActorFunc)BgDdanKd_Destroy,
    (ActorFunc)BgDdanKd_Update,
    (ActorFunc)BgDdanKd_Draw,
};
*/
}
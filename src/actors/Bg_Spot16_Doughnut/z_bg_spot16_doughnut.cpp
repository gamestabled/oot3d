extern "C" {
#include "z_bg_spot16_doughnut.hpp"

#define FLAGS 0x40400000

void BgSpot16Doughnut_Init(Actor* actor, GameState* state);
void BgSpot16Doughnut_Destroy(Actor* actor, GameState* state);
void BgSpot16Doughnut_Update(Actor* actor, GameState* state);
void BgSpot16Doughnut_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot16_Doughnut_InitVars = {
    ACTOR_BG_SPOT16_DOUGHNUT,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_EFC_DOUGHNUT,
    sizeof(BgSpot16Doughnut),
    (ActorFunc)BgSpot16Doughnut_Init,
    (ActorFunc)BgSpot16Doughnut_Destroy,
    (ActorFunc)BgSpot16Doughnut_Update,
    (ActorFunc)BgSpot16Doughnut_Draw,
};
*/
}

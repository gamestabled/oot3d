extern "C" {
#include "z_demo_du.hpp"

#define FLAGS 0x00000010

void DemoDu_Init(Actor* actor, GameState* state);
void DemoDu_Destroy(Actor* actor, GameState* state);
void DemoDu_Update(Actor* actor, GameState* state);
void DemoDu_Draw(Actor* actor, GameState* state);

/*
ActorInit Demo_Du_InitVars = {
    ACTOR_DEMO_DU,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DU,
    sizeof(DemoDu),
    (ActorFunc)DemoDu_Init,
    (ActorFunc)DemoDu_Destroy,
    (ActorFunc)DemoDu_Update,
    (ActorFunc)DemoDu_Draw,
};
*/
}

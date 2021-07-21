extern "C" {
#include "z_efc_erupc.hpp"

#define FLAGS 0x00000030

void EfcErupc_Init(Actor* actor, GameState* state);
void EfcErupc_Destroy(Actor* actor, GameState* state);
void EfcErupc_Update(Actor* actor, GameState* state);
void EfcErupc_Draw(Actor* actor, GameState* state);

/*
ActorInit Efc_Erupc_InitVars = {
    ACTOR_EFC_ERUPC,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_EFC_ERUPC,
    sizeof(EfcErupc),
    (ActorFunc)EfcErupc_Init,
    (ActorFunc)EfcErupc_Destroy,
    (ActorFunc)EfcErupc_Update,
    (ActorFunc)EfcErupc_Draw,
};
*/
}

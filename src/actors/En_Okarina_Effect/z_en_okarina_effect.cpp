extern "C" {
#include "z_en_okarina_effect.hpp"

#define FLAGS 0x02000010

void EnOkarinaEffect_Init(Actor* actor, GameState* state);
void EnOkarinaEffect_Destroy(Actor* actor, GameState* state);
void EnOkarinaEffect_Update(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Okarina_Effect.data.o")

/*
ActorInit En_Okarina_Effect_InitVars = {
    ACTOR_EN_OKARINA_EFFECT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnOkarinaEffect),
    (ActorFunc)EnOkarinaEffect_Init,
    (ActorFunc)EnOkarinaEffect_Destroy,
    (ActorFunc)EnOkarinaEffect_Update,
    (ActorFunc)NULL,
};
*/

GLOBAL_ASM("binary/EnOkarinaEffect_Init.o")

GLOBAL_ASM("binary/EnOkarinaEffect_Destroy.o")

GLOBAL_ASM("binary/EnOkarinaEffect_Update.o")
}

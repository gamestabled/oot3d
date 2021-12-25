extern "C" {
#include "z_en_zl2.hpp"

#define FLAGS 0x00000010

void EnZl2_Init(Actor* actor, GameState* state);
void EnZl2_Destroy(Actor* actor, GameState* state);
void EnZl2_Update(Actor* actor, GameState* state);
void EnZl2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Zl2.data.o")

/*
ActorInit En_Zl2_InitVars = {
    ACTOR_EN_ZL2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZL2,
    sizeof(EnZl2),
    (ActorFunc)EnZl2_Init,
    (ActorFunc)EnZl2_Destroy,
    (ActorFunc)EnZl2_Update,
    (ActorFunc)EnZl2_Draw,
};
*/

GLOBAL_ASM("binary/EnZl2_Init.o")

GLOBAL_ASM("binary/EnZl2_Destroy.o")

GLOBAL_ASM("binary/EnZl2_Update.o")

GLOBAL_ASM("binary/EnZl2_Draw.o")
}

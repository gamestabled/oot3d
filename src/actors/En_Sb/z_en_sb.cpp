extern "C" {
#include "z_en_sb.hpp"

#define FLAGS 0x00000005

void EnSb_Init(Actor* actor, GameState* state);
void EnSb_Destroy(Actor* actor, GameState* state);
void EnSb_Update(Actor* actor, GameState* state);
void EnSb_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Sb.data.o")

/*
ActorInit En_Sb_InitVars = {
    ACTOR_EN_SB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_SB,
    sizeof(EnSb),
    (ActorFunc)EnSb_Init,
    (ActorFunc)EnSb_Destroy,
    (ActorFunc)EnSb_Update,
    (ActorFunc)EnSb_Draw,
};
*/

GLOBAL_ASM("binary/EnSb_Init.o")

GLOBAL_ASM("binary/EnSb_Destroy.o")

GLOBAL_ASM("binary/EnSb_Update.o")

GLOBAL_ASM("binary/EnSb_Draw.o")
}

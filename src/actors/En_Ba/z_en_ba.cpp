extern "C" {
#include "z_en_ba.hpp"

#define FLAGS 0x00000015

void EnBa_Init(Actor* actor, GameState* state);
void EnBa_Destroy(Actor* actor, GameState* state);
void EnBa_Update(Actor* actor, GameState* state);
void EnBa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Ba.data.o")

ActorInit En_Ba_InitVars = {
    ACTOR_EN_BA,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BXA,
    sizeof(EnBa),
    (ActorFunc)EnBa_Init,
    (ActorFunc)EnBa_Destroy,
    (ActorFunc)EnBa_Update,
    (ActorFunc)EnBa_Draw,
};

GLOBAL_ASM("binary/EnBa_Init.o")

GLOBAL_ASM("binary/EnBa_Destroy.o")

GLOBAL_ASM("binary/EnBa_Update.o")

GLOBAL_ASM("binary/EnBa_Draw.o")
}

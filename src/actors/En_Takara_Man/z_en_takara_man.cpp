extern "C" {
#include "z_en_takara_man.hpp"

#define FLAGS 0x08000039

void EnTakaraMan_Init(Actor* actor, GameState* state);
void EnTakaraMan_Destroy(Actor* actor, GameState* state);
void EnTakaraMan_Update(Actor* actor, GameState* state);
void EnTakaraMan_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Takara_Man.data.o")

/*
ActorInit En_Takara_Man_InitVars = {
    ACTOR_EN_TAKARA_MAN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TS,
    sizeof(EnTakaraMan),
    (ActorFunc)EnTakaraMan_Init,
    (ActorFunc)EnTakaraMan_Destroy,
    (ActorFunc)EnTakaraMan_Update,
    (ActorFunc)EnTakaraMan_Draw,
};
*/

GLOBAL_ASM("binary/EnTakaraMan_Init.o")

GLOBAL_ASM("binary/EnTakaraMan_Destroy.o")

GLOBAL_ASM("binary/EnTakaraMan_Update.o")

GLOBAL_ASM("binary/EnTakaraMan_Draw.o")
}

extern "C" {
#include "z_bg_hidan_hrock.hpp"

#define FLAGS 0x00400000

void BgHidanHrock_Init(Actor* actor, GameState* state);
void BgHidanHrock_Destroy(Actor* actor, GameState* state);
void BgHidanHrock_Update(Actor* actor, GameState* state);
void BgHidanHrock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Hidan_Hrock.data.o")

/*
ActorInit Bg_Hidan_Hrock_InitVars = {
    ACTOR_BG_HIDAN_HROCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanHrock),
    (ActorFunc)BgHidanHrock_Init,
    (ActorFunc)BgHidanHrock_Destroy,
    (ActorFunc)BgHidanHrock_Update,
    (ActorFunc)BgHidanHrock_Draw,
};
*/

GLOBAL_ASM("binary/BgHidanHrock_Init.o")

GLOBAL_ASM("binary/BgHidanHrock_Destroy.o")

GLOBAL_ASM("binary/BgHidanHrock_Update.o")

GLOBAL_ASM("binary/BgHidanHrock_Draw.o")
}

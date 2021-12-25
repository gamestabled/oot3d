extern "C" {
#include "z_bg_hidan_fwbig.hpp"

#define FLAGS 0x80400010

void BgHidanFwbig_Init(Actor* actor, GameState* state);
void BgHidanFwbig_Destroy(Actor* actor, GameState* state);
void BgHidanFwbig_Update(Actor* actor, GameState* state);
void BgHidanFwbig_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Hidan_Fwbig.data.o")

/*
ActorInit Bg_Hidan_Fwbig_InitVars = {
    ACTOR_BG_HIDAN_FWBIG,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanFwbig),
    (ActorFunc)BgHidanFwbig_Init,
    (ActorFunc)BgHidanFwbig_Destroy,
    (ActorFunc)BgHidanFwbig_Update,
    (ActorFunc)BgHidanFwbig_Draw,
};
*/

GLOBAL_ASM("binary/BgHidanFwbig_Init.o")

GLOBAL_ASM("binary/BgHidanFwbig_Destroy.o")

GLOBAL_ASM("binary/BgHidanFwbig_Update.o")

GLOBAL_ASM("binary/BgHidanFwbig_Draw.o")
}

extern "C" {
#include "z_bg_jya_zurerukabe.hpp"

#define FLAGS 0x80400010

void BgJyaZurerukabe_Init(Actor* actor, GameState* state);
void BgJyaZurerukabe_Destroy(Actor* actor, GameState* state);
void BgJyaZurerukabe_Update(Actor* actor, GameState* state);
void BgJyaZurerukabe_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Jya_Zurerukabe.data.o")

/*
ActorInit Bg_Jya_Zurerukabe_InitVars = {
    ACTOR_BG_JYA_ZURERUKABE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaZurerukabe),
    (ActorFunc)BgJyaZurerukabe_Init,
    (ActorFunc)BgJyaZurerukabe_Destroy,
    (ActorFunc)BgJyaZurerukabe_Update,
    (ActorFunc)BgJyaZurerukabe_Draw,
};
*/

GLOBAL_ASM("binary/BgJyaZurerukabe_Init.o")

GLOBAL_ASM("binary/BgJyaZurerukabe_Destroy.o")

GLOBAL_ASM("binary/BgJyaZurerukabe_Update.o")

GLOBAL_ASM("binary/BgJyaZurerukabe_Draw.o")
}

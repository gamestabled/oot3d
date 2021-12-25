extern "C" {
#include "z_bg_jya_bombiwa.hpp"

#define FLAGS 0x80400000

void BgJyaBombiwa_Init(Actor* actor, GameState* state);
void BgJyaBombiwa_Destroy(Actor* actor, GameState* state);
void BgJyaBombiwa_Update(Actor* actor, GameState* state);
void BgJyaBombiwa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Jya_Bombiwa.data.o")

/*
ActorInit Bg_Jya_Bombiwa_InitVars = {
    ACTOR_BG_JYA_BOMBIWA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaBombiwa),
    (ActorFunc)BgJyaBombiwa_Init,
    (ActorFunc)BgJyaBombiwa_Destroy,
    (ActorFunc)BgJyaBombiwa_Update,
    (ActorFunc)BgJyaBombiwa_Draw,
};
*/

GLOBAL_ASM("binary/BgJyaBombiwa_Init.o")

GLOBAL_ASM("binary/BgJyaBombiwa_Destroy.o")

GLOBAL_ASM("binary/BgJyaBombiwa_Update.o")

GLOBAL_ASM("binary/BgJyaBombiwa_Draw.o")
}

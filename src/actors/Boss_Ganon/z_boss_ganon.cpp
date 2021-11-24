extern "C" {
#include "z_boss_ganon.hpp"

#define FLAGS 0x00000035

void BossGanon_Init(Actor* actor, GameState* state);
void BossGanon_Destroy(Actor* actor, GameState* state);
void BossGanon_Update(Actor* actor, GameState* state);
void BossGanon_Draw(Actor* actor, GameState* state);

/*
ActorInit Boss_Ganon_InitVars = {
    ACTOR_BOSS_GANON,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GANON,
    sizeof(BossGanon),
    (ActorFunc)BossGanon_Init,
    (ActorFunc)BossGanon_Destroy,
    (ActorFunc)BossGanon_Update,
    (ActorFunc)BossGanon_Draw,
};
*/

GLOBAL_ASM("binary/BossGanon_Init.o")

GLOBAL_ASM("binary/BossGanon_Destroy.o")

GLOBAL_ASM("binary/BossGanon_Update.o")

GLOBAL_ASM("binary/BossGanon_Draw.o")
}

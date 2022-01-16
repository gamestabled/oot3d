extern "C" {
#include "z_en_fd_fire.hpp"

#define FLAGS 0x00000015

void EnFdFire_Init(Actor* actor, GameState* state);
void EnFdFire_Destroy(Actor* actor, GameState* state);
void EnFdFire_Update(Actor* actor, GameState* state);
void EnFdFire_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Fd_Fire.data.o")

ActorInit En_Fd_Fire_InitVars = {
    ACTOR_EN_FD_FIRE,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(EnFdFire),
    (ActorFunc)EnFdFire_Init,
    (ActorFunc)EnFdFire_Destroy,
    (ActorFunc)EnFdFire_Update,
    (ActorFunc)EnFdFire_Draw,
};

GLOBAL_ASM("binary/EnFdFire_Init.o")

GLOBAL_ASM("binary/EnFdFire_Destroy.o")

GLOBAL_ASM("binary/EnFdFire_Update.o")

GLOBAL_ASM("binary/EnFdFire_Draw.o")
}

extern "C" {
#include "z_en_fire_rock.hpp"

#define FLAGS 0x00000030

void EnFireRock_Init(Actor* actor, GameState* state);
void EnFireRock_Destroy(Actor* actor, GameState* state);
void EnFireRock_Update(Actor* actor, GameState* state);
void EnFireRock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Fire_Rock.data.o")

ActorInit En_Fire_Rock_InitVars = {
    ACTOR_EN_FIRE_ROCK,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_EFC_STAR_FIELD,
    sizeof(EnFireRock),
    (ActorFunc)EnFireRock_Init,
    (ActorFunc)EnFireRock_Destroy,
    (ActorFunc)EnFireRock_Update,
    (ActorFunc)EnFireRock_Draw,
};

GLOBAL_ASM("binary/EnFireRock_Init.o")

GLOBAL_ASM("binary/EnFireRock_Destroy.o")

GLOBAL_ASM("binary/EnFireRock_Update.o")

GLOBAL_ASM("binary/EnFireRock_Draw.o")
}

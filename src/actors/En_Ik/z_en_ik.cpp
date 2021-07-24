extern "C" {
#include "z_en_ik.hpp"

#define FLAGS 0x00000010

void EnIk_Init(Actor* actor, GameState* state);
void EnIk_Destroy(Actor* actor, GameState* state);
void EnIk_Update(Actor* actor, GameState* state);
void EnIk_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Ik_InitVars = {
    ACTOR_EN_IK,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_IK,
    sizeof(EnIk),
    (ActorFunc)EnIk_Init,
    (ActorFunc)EnIk_Destroy,
    (ActorFunc)EnIk_Update,
    (ActorFunc)EnIk_Draw,
};
*/
}
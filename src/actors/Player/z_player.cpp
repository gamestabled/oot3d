extern "C" {
#include "global.hpp"

#define FLAGS 0x06000035

void Player_Init(Actor* actor, GameState* state);
void Player_Destroy(Actor* actor, GameState* state);
void Player_Update(Actor* actor, GameState* state);
void Player_Draw(Actor* actor, GameState* state);

/*
ActorInit Player_InitVars = {
    ACTOR_PLAYER,
    ACTORCAT_PLAYER,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(Player),
    (ActorFunc)Player_Init,
    (ActorFunc)Player_Destroy,
    (ActorFunc)Player_Update,
    (ActorFunc)Player_Draw,
};
*/
}
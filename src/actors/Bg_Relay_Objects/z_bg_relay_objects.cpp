extern "C" {
#include "z_bg_relay_objects.hpp"

#define FLAGS 0x80400010

void BgRelayObjects_Init(Actor* actor, GameState* state);
void BgRelayObjects_Destroy(Actor* actor, GameState* state);
void BgRelayObjects_Update(Actor* actor, GameState* state);
void BgRelayObjects_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Relay_Objects.data.o")

/*
ActorInit Bg_Relay_Objects_InitVars = {
    ACTOR_BG_RELAY_OBJECTS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_RELAY_OBJECTS,
    sizeof(BgRelayObjects),
    (ActorFunc)BgRelayObjects_Init,
    (ActorFunc)BgRelayObjects_Destroy,
    (ActorFunc)BgRelayObjects_Update,
    (ActorFunc)BgRelayObjects_Draw,
};
*/

GLOBAL_ASM("binary/BgRelayObjects_Init.o")

GLOBAL_ASM("binary/BgRelayObjects_Destroy.o")

GLOBAL_ASM("binary/BgRelayObjects_Update.o")

GLOBAL_ASM("binary/BgRelayObjects_Draw.o")
}

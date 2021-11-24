extern "C" {
#include "z_door_toki.hpp"

#define FLAGS 0x80000000

void DoorToki_Init(Actor* actor, GameState* state);
void DoorToki_Destroy(Actor* actor, GameState* state);
void DoorToki_Update(Actor* actor, GameState* state);

/*
ActorInit Door_Toki_InitVars = {
    ACTOR_DOOR_TOKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_TOKI_OBJECTS,
    sizeof(DoorToki),
    (ActorFunc)DoorToki_Init,
    (ActorFunc)DoorToki_Destroy,
    (ActorFunc)DoorToki_Update,
    (ActorFunc)NULL,
};
*/

GLOBAL_ASM("binary/DoorToki_Init.o")

GLOBAL_ASM("binary/DoorToki_Destroy.o")

GLOBAL_ASM("binary/DoorToki_Update.o")
}

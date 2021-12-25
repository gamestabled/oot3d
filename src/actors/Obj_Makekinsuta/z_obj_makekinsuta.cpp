extern "C" {
#include "z_obj_makekinsuta.hpp"

#define FLAGS 0x00000010

void ObjMakekinsuta_Init(Actor* actor, GameState* state);
void ObjMakekinsuta_Destroy(Actor* actor, GameState* state);
void ObjMakekinsuta_Update(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Obj_Makekinsuta.data.o")

/*
ActorInit Obj_Makekinsuta_InitVars = {
    ACTOR_OBJ_MAKEKINSUTA,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjMakekinsuta),
    (ActorFunc)ObjMakekinsuta_Init,
    (ActorFunc)Actor_Noop,
    (ActorFunc)ObjMakekinsuta_Update,
    (ActorFunc)NULL,
};
*/

GLOBAL_ASM("binary/ObjMakekinsuta_Init.o")

GLOBAL_ASM("binary/ObjMakekinsuta_Update.o")
}

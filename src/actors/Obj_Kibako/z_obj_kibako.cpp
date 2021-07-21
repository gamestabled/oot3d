extern "C" {
#include "z_obj_kibako.hpp"

#define FLAGS 0x84000010

void ObjKibako_Init(Actor* actor, GameState* state);
void ObjKibako_Destroy(Actor* actor, GameState* state);
void ObjKibako_Update(Actor* actor, GameState* state);
void ObjKibako_Draw(Actor* actor, GameState* state);

/*
ActorInit Obj_Kibako_InitVars = {
    ACTOR_OBJ_KIBAKO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(ObjKibako),
    (ActorFunc)ObjKibako_Init,
    (ActorFunc)ObjKibako_Destroy,
    (ActorFunc)ObjKibako_Update,
    (ActorFunc)ObjKibako_Draw,
};
*/
}

extern "C" {
#include "z_en_scene_change.hpp"

#define FLAGS 0x80000000

void EnSceneChange_Init(Actor* actor, GameState* state);
void EnSceneChange_Destroy(Actor* actor, GameState* state);
void EnSceneChange_Update(Actor* actor, GameState* state);
void EnSceneChange_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Scene_Change.data.o")

/*
ActorInit En_Scene_Change_InitVars = {
    ACTOR_EN_SCENE_CHANGE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_JJ,
    sizeof(EnSceneChange),
    (ActorFunc)EnSceneChange_Init,
    (ActorFunc)EnSceneChange_Destroy,
    (ActorFunc)EnSceneChange_Update,
    (ActorFunc)EnSceneChange_Draw,
};
*/

GLOBAL_ASM("binary/EnSceneChange_Init.o")

GLOBAL_ASM("binary/EnSceneChange_Destroy.o")

GLOBAL_ASM("binary/EnSceneChange_Update.o")

GLOBAL_ASM("binary/EnSceneChange_Draw.o")
}

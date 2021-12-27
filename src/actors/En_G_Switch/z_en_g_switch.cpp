extern "C" {
#include "z_en_g_switch.hpp"

#define FLAGS 0x80000030

void EnGSwitch_Init(Actor* actor, GameState* state);
void EnGSwitch_Destroy(Actor* actor, GameState* state);
void EnGSwitch_Update(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_G_Switch.data.o")

/*
ActorInit En_G_Switch_InitVars = {
    ACTOR_EN_G_SWITCH,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnGSwitch),
    (ActorFunc)EnGSwitch_Init,
    (ActorFunc)EnGSwitch_Destroy,
    (ActorFunc)EnGSwitch_Update,
    NULL,
};
*/

GLOBAL_ASM("binary/EnGSwitch_Init.o")

GLOBAL_ASM("binary/EnGSwitch_Destroy.o")

GLOBAL_ASM("binary/EnGSwitch_Update.o")
}

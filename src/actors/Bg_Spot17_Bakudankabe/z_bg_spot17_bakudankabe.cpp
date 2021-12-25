extern "C" {
#include "z_bg_spot17_bakudankabe.hpp"

#define FLAGS 0x80400000

void BgSpot17Bakudankabe_Init(Actor* actor, GameState* state);
void BgSpot17Bakudankabe_Destroy(Actor* actor, GameState* state);
void BgSpot17Bakudankabe_Update(Actor* actor, GameState* state);
void BgSpot17Bakudankabe_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Spot17_Bakudankabe.data.o")

/*
ActorInit Bg_Spot17_Bakudankabe_InitVars = {
    ACTOR_BG_SPOT17_BAKUDANKABE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT17_OBJ,
    sizeof(BgSpot17Bakudankabe),
    (ActorFunc)BgSpot17Bakudankabe_Init,
    (ActorFunc)BgSpot17Bakudankabe_Destroy,
    (ActorFunc)BgSpot17Bakudankabe_Update,
    (ActorFunc)BgSpot17Bakudankabe_Draw,
};
*/

GLOBAL_ASM("binary/BgSpot17Bakudankabe_Init.o")

GLOBAL_ASM("binary/BgSpot17Bakudankabe_Destroy.o")

GLOBAL_ASM("binary/BgSpot17Bakudankabe_Update.o")

GLOBAL_ASM("binary/BgSpot17Bakudankabe_Draw.o")
}

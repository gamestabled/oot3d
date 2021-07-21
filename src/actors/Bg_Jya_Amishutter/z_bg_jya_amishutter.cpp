extern "C" {
#include "z_bg_jya_amishutter.hpp"

#define FLAGS 0x80000000

void BgJyaAmishutter_Init(Actor* actor, GameState* state);
void BgJyaAmishutter_Destroy(Actor* actor, GameState* state);
void BgJyaAmishutter_Update(Actor* actor, GameState* state);
void BgJyaAmishutter_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Jya_Amishutter_InitVars = {
    ACTOR_BG_JYA_AMISHUTTER,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaAmishutter),
    (ActorFunc)BgJyaAmishutter_Init,
    (ActorFunc)BgJyaAmishutter_Destroy,
    (ActorFunc)BgJyaAmishutter_Update,
    (ActorFunc)BgJyaAmishutter_Draw,
};
*/
}

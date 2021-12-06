extern "C" {
#include "global.hpp"

void Actor_Kill(Actor* actor) {
    actor->draw = 0;
    actor->update = 0;
    actor->flags &= ~0x1;
}

void ActorShape_Init(ActorShape* shape, f32 yOffset, ActorShadowFunc shadowDraw, f32 shadowScale) {
    shape->yOffset = yOffset;
    shape->shadowDraw = shadowDraw;
    shape->shadowScale = shadowScale;
    shape->shadowAlpha = 255;
}

extern void ActorShadow_Draw(Actor* actor, Lights* lights, GlobalContext* globalCtx, s32 arg3, Color_RGBA8* color);

void ActorShadow_DrawCircle(Actor* actor, Lights* lights, GlobalContext* globalCtx) {
    ActorShadow_Draw(actor, lights, globalCtx, 0, (Color_RGBA8*)NULL);
}

void ActorShadow_DrawWhiteCircle(Actor* actor, Lights* lights, GlobalContext* globalCtx) {
    // static Color_RGBA8 white = { 255, 255, 255, 255 };

    // ActorShadow_Draw(actor, lights, globalCtx, 0, &white);
    ActorShadow_Draw(actor, lights, globalCtx, 0, (Color_RGBA8*)0x50C924);
}

void ActorShadow_DrawHorse(Actor* actor, Lights* lights, GlobalContext* globalCtx) {
    ActorShadow_Draw(actor, lights, globalCtx, 1, (Color_RGBA8*)NULL);
}

// void ActorShadow_DrawFoot(GlobalContext* globalCtx, Light* light, MtxF* arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6);

// void ActorShadow_DrawFeet(Actor* actor, Lights* lights, GlobalContext* globalCtx);

// void Actor_SetFeetPos(Actor* actor, s32 limbIndex, s32 leftFootIndex, Vec3f* leftFootPos, s32 rightFootIndex,
                    //   Vec3f* rightFootPos);

// void Math_GetProjectionPos(GlobalContext* globalCtx, Vec3f* src, Vec3f* xyzDest, f32* wDest);

// target stuff

s32 Flags_GetEnv(GlobalContext* globalCtx, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = 1 << bit;

    return globalCtx->envFlags[index] & mask;
}

void Flags_SetEnv(GlobalContext* globalCtx, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = 1 << bit;

    globalCtx->envFlags[index] |= mask;
}


void Flags_UnsetEnv(GlobalContext* globalCtx, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = (1 << bit) ^ 0xFFFF;

    globalCtx->envFlags[index] &= mask;
}

/**
 * Tests if current scene switch flag is set.
 */
s32 Flags_GetSwitch(GlobalContext* globalCtx, s32 flag) {
    if (flag < 0x20) {
        return globalCtx->actorCtx.flags.swch & (1 << flag);
    } else {
        return globalCtx->actorCtx.flags.tempSwch & (1 << (flag - 0x20));
    }
}

/**
 * Sets current scene switch flag.
 */
void Flags_SetSwitch(GlobalContext* globalCtx, s32 flag) {
    if (flag < 0x20) {
        globalCtx->actorCtx.flags.swch |= (1 << flag);
    } else {
        globalCtx->actorCtx.flags.tempSwch |= (1 << (flag - 0x20));
    }
}

/**
 * Unsets current scene switch flag.
 */
void Flags_UnsetSwitch(GlobalContext* globalCtx, s32 flag) {
    if (flag < 0x20) {
        globalCtx->actorCtx.flags.swch &= ~(1 << flag);
    } else {
        globalCtx->actorCtx.flags.tempSwch &= ~(1 << (flag - 0x20));
    }
}

/**
 * Tests if current scene chest flag is set.
 */
s32 Flags_GetTreasure(GlobalContext* globalCtx, s32 flag) {
    return globalCtx->actorCtx.flags.chest & (1 << flag);
}

/**
 * Sets current scene chest flag.
 */
void Flags_SetTreasure(GlobalContext* globalCtx, s32 flag) {
    globalCtx->actorCtx.flags.chest |= (1 << flag);
}

/**
 * Tests if current scene clear flag is set.
 */
s32 Flags_GetClear(GlobalContext* globalCtx, s32 flag) {
    return globalCtx->actorCtx.flags.clear & (1 << flag);
}

/**
 * Sets current scene clear flag.
 */
void Flags_SetClear(GlobalContext* globalCtx, s32 flag) {
    globalCtx->actorCtx.flags.clear |= (1 << flag);
}

/**
 * Unsets current scene clear flag.
 */
void Flags_UnsetClear(GlobalContext* globalCtx, s32 flag) {
    globalCtx->actorCtx.flags.clear &= ~(1 << flag);
}

/**
 * Tests if current scene temp clear flag is set.
 */
s32 Flags_GetTempClear(GlobalContext* globalCtx, s32 flag) {
    return globalCtx->actorCtx.flags.tempClear & (1 << flag);
}

/**
 * Sets current scene temp clear flag.
 */
void Flags_SetTempClear(GlobalContext* globalCtx, s32 flag) {
    globalCtx->actorCtx.flags.tempClear |= (1 << flag);
}

/**
 * Tests if current scene collectible flag is set.
 */
s32 Flags_GetCollectible(GlobalContext* globalCtx, s32 flag) {
    if (flag < 0x20) {
        return globalCtx->actorCtx.flags.collect & (1 << flag);
    } else {
        return globalCtx->actorCtx.flags.tempCollect & (1 << (flag - 0x20));
    }
}

/**
 * Sets current scene collectible flag.
 */
void Flags_SetCollectible(GlobalContext* globalCtx, s32 flag) {
    if (flag != 0) {
        if (flag < 0x20) {
            globalCtx->actorCtx.flags.collect |= (1 << flag);
        } else {
            globalCtx->actorCtx.flags.tempCollect |= (1 << (flag - 0x20));
        }
    }
}

/**
 * Tests if event_chk_inf flag is set.
 */
s32 Flags_GetEventChkInf(s32 flag) {
    const s32 bit = 1 << (flag & 0xF);
    return gSaveContext.eventChkInf[flag >> 4] & bit;
}

/**
 * Sets event_chk_inf flag.
 */
void Flags_SetEventChkInf(s32 flag) {
    const s32 bit = 1 << (flag & 0xF);
    const s32 idx = flag >> 4;
    gSaveContext.eventChkInf[idx] |= bit;
}

}

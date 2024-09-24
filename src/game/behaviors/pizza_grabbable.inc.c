//pizza_grabbable
struct ObjectHitbox sPizza_grabbable = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 20,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 150,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 150,
    /* hurtboxHeight:     */ 200,
};
void bhv_pizza_grabbable_init() {
    o->oGravity = 2.5f;
    obj_set_hitbox(o, &sPizza_grabbable);
}


void bhv_pizza_grabbable_loop() {
    switch (o->oHeldState) {
        case HELD_FREE:
            cur_obj_update_floor_and_walls();
            break;
        case HELD_THROWN:
            o->oForwardVel = 40.0f;
            o->oVelY = 20.0f;
            cur_obj_get_thrown_or_placed(10000.0f,10.0f,0.0f);
            break;
        case HELD_DROPPED:
            cur_obj_become_tangible();
            cur_obj_enable_rendering();
            cur_obj_get_dropped();
            break;
    }
}

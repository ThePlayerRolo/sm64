void bhv_posion1up_take_life(void) {
    gMarioState->health = 0;
}

void bhv_posion1up_interact(void) {
    if(obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        bhv_posion1up_take_life();
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_posion1up_loop(void) {
    bhv_posion1up_interact();
}

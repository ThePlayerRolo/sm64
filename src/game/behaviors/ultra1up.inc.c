int i;
void bhv_ultra1up_give_life(void) {
    for (i = 0; i < 10; i++) {     
            play_sound(SOUND_GENERAL_COLLECT_1UP, gGlobalSoundSource);
            gMarioState->numLives++;
       }
}

void bhv_ultra1up_interact(void) {
    if(obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        bhv_ultra1up_give_life();
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_ultra1up_loop(void) {
    bhv_ultra1up_interact();
}

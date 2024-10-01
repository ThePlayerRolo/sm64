int mario;
void bhv_luigi_init(void) {
    o->oInteractionSubtype = INT_SUBTYPE_NPC;
}

void bhv_luigi_loop(void) {
    if (o->oInteractStatus == INT_STATUS_INTERACTED) {
        if (cur_obj_update_dialog(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_TEXT_DEFAULT, DIALOG_098, 0)) {
            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oInteractStatus = 0;        
        }
   }
}

void bhv_pizza_star_hitbox_loop() {
    struct Object *Pizza;
    Pizza = cur_obj_nearest_object_with_behavior(bhvPizzaGrabbable);
    if(obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        gMarioState->numLives++;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
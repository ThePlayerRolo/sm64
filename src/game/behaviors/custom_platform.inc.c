f32 movement_vel_positive = 10.0f;
f32 movement_vel_negative = -10.0f;
int away_from_home = 0;
int back_and_forth = 0;
int positive_or_negative = 0;
//7490
//SOUND_ENV_ELEVATOR1
f32 movement_vel_positives[] = {10.0f, 50.0f};
f32 movement_vel_negatives[] = {-10.0f, -50.0f};
int away_from_home_values[] = {13490, 7490};
int positive_or_negative_values[] = {1, 0};
void bhv_custom_platform_init(void) {
    movement_vel_positive = movement_vel_positives[o->oBhvParams2ndByte];
    movement_vel_negative = movement_vel_negatives[o->oBhvParams2ndByte];
    away_from_home = away_from_home_values[o->oBhvParams2ndByte]; 
    positive_or_negative = positive_or_negative_values[o->oBhvParams2ndByte];
    o->oVelZ = 0;
    o->oAction = 0;
    back_and_forth = 0;
}
void bhv_custom_platform_wait(void) {
    o->oVelZ = 0;
    if (gMarioObject->platform != o) {
        o->oAction = 0;
    }
}
void bhv_custom_platform_move(f32 vel) {
        cur_obj_play_sound_1(SOUND_ENV_ELEVATOR1);
        o->oVelZ = vel;
}
void bhv_kbi_platorm_check_mario(void) {
    if (gMarioObject->platform == o) {
        if (back_and_forth == 0) {
            if (positive_or_negative == 1) {
                o->oAction = 1;
            } else {
                o->oAction = 4;
            }
        } else {
            if (positive_or_negative == 1) {
                o->oAction = 3;
            } else {
                o->oAction = 5;
            }
        }
    }
}
void bhv_custom_platform_loop(void) {
    switch (o->oAction) {
        case 0:
            bhv_kbi_platorm_check_mario();
            break;
    
        case 1:
            back_and_forth = 1;
            bhv_custom_platform_move(movement_vel_negative);
            if (o->oPosZ <= (o->oHomeZ - away_from_home) )
            {
                o->oAction = 2;    
            }
            break;
        case 2:
            bhv_custom_platform_wait();
            break;
        case 3:
            back_and_forth = 0;
            bhv_custom_platform_move(movement_vel_positive);
            if (o->oPosZ >= (o->oHomeZ)) {
                o->oAction = 2;    
            }
            break;
        case 4:
            back_and_forth = 1;
            bhv_custom_platform_move(movement_vel_positive);
            if (o->oPosZ >= (o->oHomeZ + away_from_home) )
            {
                o->oAction = 2;    
            }
            break;
        case 5:
            back_and_forth = 0;
            bhv_custom_platform_move(movement_vel_negative);
            if (o->oPosZ <= (o->oHomeZ)) {
                o->oAction = 2;    
            }
            break;
    }
    cur_obj_move_using_vel();
}


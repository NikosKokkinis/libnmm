#include <sml/types/stateVariables.hh>
#include <string>
using namespace std;
using namespace STATES;
int STATES::toID(string s){
    if(s == "LEFT_FOOT") return LEFT_FOOT;
    if(s == "RIGHT_FOOT") return RIGHT_FOOT;
    if(s == "FALLED") return FALLED;
    if(s == "CURRENT_CYCLE_DURATION") return CURRENT_CYCLE_DURATION;
    if(s == "NB_FALL") return NB_FALL;
    if(s == "STAY_IN_LOOP") return STAY_IN_LOOP;
    if(s == "STEADY_STATE_WAITFOR") return STEADY_STATE_WAITFOR;
    if(s == "STEADY_STATE_REACHEDAT") return STEADY_STATE_REACHEDAT;
    if(s == "STEADY_STATE") return STEADY_STATE;
    if(s == "IS_LAUNCHING_PHASE") return IS_LAUNCHING_PHASE;
    if(s == "IS_LAST_PHASE") return IS_LAST_PHASE;
    if(s == "LEFT_UP_EFX_PARAMETERS") return LEFT_UP_EFX_PARAMETERS;
    if(s == "RIGHT_UP_EFX_PARAMETERS") return RIGHT_UP_EFX_PARAMETERS;
    if(s == "SELF_CONTACT_COUNT") return SELF_CONTACT_COUNT;
    if(s == "THETA_TRUNK") return THETA_TRUNK;
    if(s == "THETACOR_TRUNK") return THETACOR_TRUNK;
    if(s == "MEAN_THETACOR_TRUNK") return MEAN_THETACOR_TRUNK;
    if(s == "MEAN_THETA_TRUNK") return MEAN_THETA_TRUNK;
    if(s == "VAR_THETACOR_TRUNK") return VAR_THETACOR_TRUNK;
    if(s == "VAR_THETA_TRUNK") return VAR_THETA_TRUNK;
    if(s == "LEFT_HIP_MAX") return LEFT_HIP_MAX;
    if(s == "LEFT_HIP_MIN") return LEFT_HIP_MIN;
    if(s == "LEFT_HIPCOR_MAX") return LEFT_HIPCOR_MAX;
    if(s == "LEFT_HIPCOR_MIN") return LEFT_HIPCOR_MIN;
    if(s == "RIGHT_HIP_MAX") return RIGHT_HIP_MAX;
    if(s == "RIGHT_HIP_MIN") return RIGHT_HIP_MIN;
    if(s == "RIGHT_HIPCOR_MAX") return RIGHT_HIPCOR_MAX;
    if(s == "RIGHT_HIPCOR_MIN") return RIGHT_HIPCOR_MIN;
    if(s == "LEFT_KNEE_MAX") return LEFT_KNEE_MAX;
    if(s == "LEFT_KNEE_MIN") return LEFT_KNEE_MIN;
    if(s == "RIGHT_KNEE_MAX") return RIGHT_KNEE_MAX;
    if(s == "RIGHT_KNEE_MIN") return RIGHT_KNEE_MIN;
    if(s == "LEFT_ANKLE_MAX") return LEFT_ANKLE_MAX;
    if(s == "LEFT_ANKLE_MIN") return LEFT_ANKLE_MIN;
    if(s == "RIGHT_ANKLE_MAX") return RIGHT_ANKLE_MAX;
    if(s == "RIGHT_ANKLE_MIN") return RIGHT_ANKLE_MIN;
    if(s == "VAR_LEFT_HIP_MIN") return VAR_LEFT_HIP_MIN;
    if(s == "VAR_LEFT_HIPCOR_MIN") return VAR_LEFT_HIPCOR_MIN;
    if(s == "VAR_RIGHT_HIP_MIN") return VAR_RIGHT_HIP_MIN;
    if(s == "VAR_RIGHT_HIPCOR_MIN") return VAR_RIGHT_HIPCOR_MIN;
    if(s == "VAR_LEFT_KNEE_MIN") return VAR_LEFT_KNEE_MIN;
    if(s == "VAR_RIGHT_KNEE_MIN") return VAR_RIGHT_KNEE_MIN;
    if(s == "VAR_LEFT_ANKLE_MIN") return VAR_LEFT_ANKLE_MIN;
    if(s == "VAR_RIGHT_ANKLE_MIN") return VAR_RIGHT_ANKLE_MIN;
    if(s == "VAR_LEFT_HIP_MAX") return VAR_LEFT_HIP_MAX;
    if(s == "VAR_LEFT_HIPCOR_MAX") return VAR_LEFT_HIPCOR_MAX;
    if(s == "VAR_RIGHT_HIP_MAX") return VAR_RIGHT_HIP_MAX;
    if(s == "VAR_RIGHT_HIPCOR_MAX") return VAR_RIGHT_HIPCOR_MAX;
    if(s == "VAR_LEFT_KNEE_MAX") return VAR_LEFT_KNEE_MAX;
    if(s == "VAR_RIGHT_KNEE_MAX") return VAR_RIGHT_KNEE_MAX;
    if(s == "VAR_LEFT_ANKLE_MAX") return VAR_LEFT_ANKLE_MAX;
    if(s == "VAR_RIGHT_ANKLE_MAX") return VAR_RIGHT_ANKLE_MAX;
    if(s == "MEAN_LEFT_HIP_MIN") return MEAN_LEFT_HIP_MIN;
    if(s == "MEAN_LEFT_HIPCOR_MIN") return MEAN_LEFT_HIPCOR_MIN;
    if(s == "MEAN_RIGHT_HIP_MIN") return MEAN_RIGHT_HIP_MIN;
    if(s == "MEAN_RIGHT_HIPCOR_MIN") return MEAN_RIGHT_HIPCOR_MIN;
    if(s == "MEAN_LEFT_KNEE_MIN") return MEAN_LEFT_KNEE_MIN;
    if(s == "MEAN_RIGHT_KNEE_MIN") return MEAN_RIGHT_KNEE_MIN;
    if(s == "MEAN_LEFT_ANKLE_MIN") return MEAN_LEFT_ANKLE_MIN;
    if(s == "MEAN_RIGHT_ANKLE_MIN") return MEAN_RIGHT_ANKLE_MIN;
    if(s == "MEAN_LEFT_HIP_MAX") return MEAN_LEFT_HIP_MAX;
    if(s == "MEAN_RIGHT_HIP_MAX") return MEAN_RIGHT_HIP_MAX;
    if(s == "MEAN_LEFT_HIPCOR_MAX") return MEAN_LEFT_HIPCOR_MAX;
    if(s == "MEAN_RIGHT_HIPCOR_MAX") return MEAN_RIGHT_HIPCOR_MAX;
    if(s == "MEAN_LEFT_KNEE_MAX") return MEAN_LEFT_KNEE_MAX;
    if(s == "MEAN_RIGHT_KNEE_MAX") return MEAN_RIGHT_KNEE_MAX;
    if(s == "MEAN_LEFT_ANKLE_MAX") return MEAN_LEFT_ANKLE_MAX;
    if(s == "MEAN_RIGHT_ANKLE_MAX") return MEAN_RIGHT_ANKLE_MAX;
    if(s == "STOP_REASON") return STOP_REASON;
    if(s == "CURRENT_LEFT_CYCLE_DURATION") return CURRENT_LEFT_CYCLE_DURATION;
    if(s == "CYCLE_COUNT") return CYCLE_COUNT;
    if(s == "RESET_AT") return RESET_AT;
    if(s == "CYCLE_LENGTH") return CYCLE_LENGTH;
    if(s == "COV_LEFT_RIGHT_HIP_ANGLE") return COV_LEFT_RIGHT_HIP_ANGLE;
    if(s == "COV_LEFT_RIGHT_KNEE_ANGLE") return COV_LEFT_RIGHT_KNEE_ANGLE;
    if(s == "COV_LEFT_RIGHT_ANKLE_ANGLE") return COV_LEFT_RIGHT_ANKLE_ANGLE;
    if(s == "COV_LEFT_RIGHT_ANGLE") return COV_LEFT_RIGHT_ANGLE;
    if(s == "NOISE_MUSCLE") return NOISE_MUSCLE;
    if(s == "NOISE_SENSORS") return NOISE_SENSORS;
    if(s == "NOISE_INTERNEURONS") return NOISE_INTERNEURONS;
    if(s == "LEFT_X_DIST_NECK") return LEFT_X_DIST_NECK;
    if(s == "RIGHT_X_DIST_NECK") return RIGHT_X_DIST_NECK;
    if(s == "LEFT_Y_DIST_NECK") return LEFT_Y_DIST_NECK;
    if(s == "RIGHT_Y_DIST_NECK") return RIGHT_Y_DIST_NECK;
    if(s == "LEFT_Z_DIST_NECK") return LEFT_Z_DIST_NECK;
    if(s == "RIGHT_Z_DIST_NECK") return RIGHT_Z_DIST_NECK;
    if(s == "LEFT_STEP_LENGTH") return LEFT_STEP_LENGTH;
    if(s == "RIGHT_STEP_LENGTH") return RIGHT_STEP_LENGTH;
    if(s == "MEAN_LEFT_STEP_LENGTH") return MEAN_LEFT_STEP_LENGTH;
    if(s == "MEAN_RIGHT_STEP_LENGTH") return MEAN_RIGHT_STEP_LENGTH;
    if(s == "VAR_LEFT_STEP_LENGTH") return VAR_LEFT_STEP_LENGTH;
    if(s == "VAR_RIGHT_STEP_LENGTH") return VAR_RIGHT_STEP_LENGTH;
    if(s == "LEFT_CYCLE_DURATION") return LEFT_CYCLE_DURATION;
    if(s == "LEFT_STANCE_DURATION") return LEFT_STANCE_DURATION;
    if(s == "LEFT_STANCE_END_DURATION") return LEFT_STANCE_END_DURATION;
    if(s == "LEFT_SWING_DURATION") return LEFT_SWING_DURATION;
    if(s == "RIGHT_CYCLE_DURATION") return RIGHT_CYCLE_DURATION;
    if(s == "RIGHT_STANCE_DURATION") return RIGHT_STANCE_DURATION;
    if(s == "RIGHT_STANCE_END_DURATION") return RIGHT_STANCE_END_DURATION;
    if(s == "RIGHT_SWING_DURATION") return RIGHT_SWING_DURATION;
    if(s == "LEFT_GOLDEN_RATIO_0") return LEFT_GOLDEN_RATIO_0;
    if(s == "LEFT_GOLDEN_RATIO_1") return LEFT_GOLDEN_RATIO_1;
    if(s == "LEFT_GOLDEN_RATIO_2") return LEFT_GOLDEN_RATIO_2;
    if(s == "RIGHT_GOLDEN_RATIO_0") return RIGHT_GOLDEN_RATIO_0;
    if(s == "RIGHT_GOLDEN_RATIO_1") return RIGHT_GOLDEN_RATIO_1;
    if(s == "RIGHT_GOLDEN_RATIO_2") return RIGHT_GOLDEN_RATIO_2;
    if(s == "MEAN_LEFT_GOLDEN_RATIO_0") return MEAN_LEFT_GOLDEN_RATIO_0;
    if(s == "MEAN_LEFT_GOLDEN_RATIO_1") return MEAN_LEFT_GOLDEN_RATIO_1;
    if(s == "MEAN_LEFT_GOLDEN_RATIO_2") return MEAN_LEFT_GOLDEN_RATIO_2;
    if(s == "MEAN_RIGHT_GOLDEN_RATIO_0") return MEAN_RIGHT_GOLDEN_RATIO_0;
    if(s == "MEAN_RIGHT_GOLDEN_RATIO_1") return MEAN_RIGHT_GOLDEN_RATIO_1;
    if(s == "MEAN_RIGHT_GOLDEN_RATIO_2") return MEAN_RIGHT_GOLDEN_RATIO_2;
    if(s == "VAR_LEFT_GOLDEN_RATIO_0") return VAR_LEFT_GOLDEN_RATIO_0;
    if(s == "VAR_LEFT_GOLDEN_RATIO_1") return VAR_LEFT_GOLDEN_RATIO_1;
    if(s == "VAR_LEFT_GOLDEN_RATIO_2") return VAR_LEFT_GOLDEN_RATIO_2;
    if(s == "VAR_RIGHT_GOLDEN_RATIO_0") return VAR_RIGHT_GOLDEN_RATIO_0;
    if(s == "VAR_RIGHT_GOLDEN_RATIO_1") return VAR_RIGHT_GOLDEN_RATIO_1;
    if(s == "VAR_RIGHT_GOLDEN_RATIO_2") return VAR_RIGHT_GOLDEN_RATIO_2;
    if(s == "POSITION_X") return POSITION_X;
    if(s == "OLD_POSITION_X") return OLD_POSITION_X;
    if(s == "POSITION_Y") return POSITION_Y;
    if(s == "OLD_POSITION_Y") return OLD_POSITION_Y;
    if(s == "POSITION_Z") return POSITION_Z;
    if(s == "OLD_POSITION_Z") return OLD_POSITION_Z;
    if(s == "IN_VELOCITY") return IN_VELOCITY;
    if(s == "OLD_IN_VELOCITY") return OLD_IN_VELOCITY;
    if(s == "IN_ACCELERATION") return IN_ACCELERATION;
    if(s == "IN_VELOCITY_FILTERED") return IN_VELOCITY_FILTERED;
    if(s == "IN_ACCELERATION_FILTERED") return IN_ACCELERATION_FILTERED;
    if(s == "MEAN_VELOCITY") return MEAN_VELOCITY;
    if(s == "VAR_VELOCITY") return VAR_VELOCITY;
    if(s == "MEAN_ACCELERATION") return MEAN_ACCELERATION;
    if(s == "VAR_ACCELERATION") return VAR_ACCELERATION;
    if(s == "MEAN_VELOCITY_CYCLE") return MEAN_VELOCITY_CYCLE;
    if(s == "VAR_VELOCITY_CYCLE") return VAR_VELOCITY_CYCLE;
    if(s == "MEAN_VELOCITY_CYCLE_OLD") return MEAN_VELOCITY_CYCLE_OLD;
    if(s == "VAR_VELOCITY_CYCLE_OLD") return VAR_VELOCITY_CYCLE_OLD;
    if(s == "HEIGHT") return HEIGHT;
    if(s == "DISTANCE") return DISTANCE;
    if(s == "DISTANCE_LATERAL") return DISTANCE_LATERAL;
    if(s == "DISTANCE_FRONTAL") return DISTANCE_FRONTAL;
    if(s == "TIME") return TIME;
    if(s == "TIME_AT_RESET") return TIME_AT_RESET;
    if(s == "TIME_CYCLE") return TIME_CYCLE;
    if(s == "ENERGY_DT") return ENERGY_DT;
    if(s == "ENERGY_OE_DT") return ENERGY_OE_DT;
    if(s == "ENERGY") return ENERGY;
    if(s == "ENERGY_W") return ENERGY_W;
    if(s == "ENERGY_M") return ENERGY_M;
    if(s == "ENERGY_OVEREXTENSION") return ENERGY_OVEREXTENSION;
    if(s == "MEAN_CYCLE_LENGTH") return MEAN_CYCLE_LENGTH;
    if(s == "VAR_CYCLE_LENGTH") return VAR_CYCLE_LENGTH;
    if(s == "MEAN_DOUBLESTANCE_DURATION") return MEAN_DOUBLESTANCE_DURATION;
    if(s == "VAR_DOUBLESTANCE_DURATION") return VAR_DOUBLESTANCE_DURATION;
    if(s == "MEAN_LEFT_CYCLE_DURATION") return MEAN_LEFT_CYCLE_DURATION;
    if(s == "MEAN_LEFT_STANCE_DURATION") return MEAN_LEFT_STANCE_DURATION;
    if(s == "MEAN_LEFT_STANCE_END_DURATION") return MEAN_LEFT_STANCE_END_DURATION;
    if(s == "MEAN_LEFT_SWING_DURATION") return MEAN_LEFT_SWING_DURATION;
    if(s == "MEAN_RIGHT_CYCLE_DURATION") return MEAN_RIGHT_CYCLE_DURATION;
    if(s == "MEAN_RIGHT_STANCE_DURATION") return MEAN_RIGHT_STANCE_DURATION;
    if(s == "MEAN_RIGHT_STANCE_END_DURATION") return MEAN_RIGHT_STANCE_END_DURATION;
    if(s == "MEAN_RIGHT_SWING_DURATION") return MEAN_RIGHT_SWING_DURATION;
    if(s == "VAR_LEFT_CYCLE_DURATION") return VAR_LEFT_CYCLE_DURATION;
    if(s == "VAR_LEFT_STANCE_DURATION") return VAR_LEFT_STANCE_DURATION;
    if(s == "VAR_LEFT_STANCE_END_DURATION") return VAR_LEFT_STANCE_END_DURATION;
    if(s == "VAR_LEFT_SWING_DURATION") return VAR_LEFT_SWING_DURATION;
    if(s == "VAR_RIGHT_CYCLE_DURATION") return VAR_RIGHT_CYCLE_DURATION;
    if(s == "VAR_RIGHT_STANCE_DURATION") return VAR_RIGHT_STANCE_DURATION;
    if(s == "VAR_RIGHT_STANCE_END_DURATION") return VAR_RIGHT_STANCE_END_DURATION;
    if(s == "VAR_RIGHT_SWING_DURATION") return VAR_RIGHT_SWING_DURATION;
    if(s == "HEADING_X") return HEADING_X;
    if(s == "HEADING_Y") return HEADING_Y;
    if(s == "LATERALSPEED_TRUNK") return LATERALSPEED_TRUNK;
    if(s == "PREDICTION_ERROR") return PREDICTION_ERROR;
    return -1;
}
string STATES::toString(int id){
    switch(id){
        case LEFT_FOOT: return "LEFT_FOOT"; break;
        case RIGHT_FOOT: return "RIGHT_FOOT"; break;
        case FALLED: return "FALLED"; break;
        case CURRENT_CYCLE_DURATION: return "CURRENT_CYCLE_DURATION"; break;
        case NB_FALL: return "NB_FALL"; break;
        case STAY_IN_LOOP: return "STAY_IN_LOOP"; break;
        case STEADY_STATE_WAITFOR: return "STEADY_STATE_WAITFOR"; break;
        case STEADY_STATE_REACHEDAT: return "STEADY_STATE_REACHEDAT"; break;
        case STEADY_STATE: return "STEADY_STATE"; break;
        case IS_LAUNCHING_PHASE: return "IS_LAUNCHING_PHASE"; break;
        case IS_LAST_PHASE: return "IS_LAST_PHASE"; break;
        case LEFT_UP_EFX_PARAMETERS: return "LEFT_UP_EFX_PARAMETERS"; break;
        case RIGHT_UP_EFX_PARAMETERS: return "RIGHT_UP_EFX_PARAMETERS"; break;
        case SELF_CONTACT_COUNT: return "SELF_CONTACT_COUNT"; break;
        case THETA_TRUNK: return "THETA_TRUNK"; break;
        case THETACOR_TRUNK: return "THETACOR_TRUNK"; break;
        case MEAN_THETACOR_TRUNK: return "MEAN_THETACOR_TRUNK"; break;
        case MEAN_THETA_TRUNK: return "MEAN_THETA_TRUNK"; break;
        case VAR_THETACOR_TRUNK: return "VAR_THETACOR_TRUNK"; break;
        case VAR_THETA_TRUNK: return "VAR_THETA_TRUNK"; break;
        case LEFT_HIP_MAX: return "LEFT_HIP_MAX"; break;
        case LEFT_HIP_MIN: return "LEFT_HIP_MIN"; break;
        case LEFT_HIPCOR_MAX: return "LEFT_HIPCOR_MAX"; break;
        case LEFT_HIPCOR_MIN: return "LEFT_HIPCOR_MIN"; break;
        case RIGHT_HIP_MAX: return "RIGHT_HIP_MAX"; break;
        case RIGHT_HIP_MIN: return "RIGHT_HIP_MIN"; break;
        case RIGHT_HIPCOR_MAX: return "RIGHT_HIPCOR_MAX"; break;
        case RIGHT_HIPCOR_MIN: return "RIGHT_HIPCOR_MIN"; break;
        case LEFT_KNEE_MAX: return "LEFT_KNEE_MAX"; break;
        case LEFT_KNEE_MIN: return "LEFT_KNEE_MIN"; break;
        case RIGHT_KNEE_MAX: return "RIGHT_KNEE_MAX"; break;
        case RIGHT_KNEE_MIN: return "RIGHT_KNEE_MIN"; break;
        case LEFT_ANKLE_MAX: return "LEFT_ANKLE_MAX"; break;
        case LEFT_ANKLE_MIN: return "LEFT_ANKLE_MIN"; break;
        case RIGHT_ANKLE_MAX: return "RIGHT_ANKLE_MAX"; break;
        case RIGHT_ANKLE_MIN: return "RIGHT_ANKLE_MIN"; break;
        case VAR_LEFT_HIP_MIN: return "VAR_LEFT_HIP_MIN"; break;
        case VAR_LEFT_HIPCOR_MIN: return "VAR_LEFT_HIPCOR_MIN"; break;
        case VAR_RIGHT_HIP_MIN: return "VAR_RIGHT_HIP_MIN"; break;
        case VAR_RIGHT_HIPCOR_MIN: return "VAR_RIGHT_HIPCOR_MIN"; break;
        case VAR_LEFT_KNEE_MIN: return "VAR_LEFT_KNEE_MIN"; break;
        case VAR_RIGHT_KNEE_MIN: return "VAR_RIGHT_KNEE_MIN"; break;
        case VAR_LEFT_ANKLE_MIN: return "VAR_LEFT_ANKLE_MIN"; break;
        case VAR_RIGHT_ANKLE_MIN: return "VAR_RIGHT_ANKLE_MIN"; break;
        case VAR_LEFT_HIP_MAX: return "VAR_LEFT_HIP_MAX"; break;
        case VAR_LEFT_HIPCOR_MAX: return "VAR_LEFT_HIPCOR_MAX"; break;
        case VAR_RIGHT_HIP_MAX: return "VAR_RIGHT_HIP_MAX"; break;
        case VAR_RIGHT_HIPCOR_MAX: return "VAR_RIGHT_HIPCOR_MAX"; break;
        case VAR_LEFT_KNEE_MAX: return "VAR_LEFT_KNEE_MAX"; break;
        case VAR_RIGHT_KNEE_MAX: return "VAR_RIGHT_KNEE_MAX"; break;
        case VAR_LEFT_ANKLE_MAX: return "VAR_LEFT_ANKLE_MAX"; break;
        case VAR_RIGHT_ANKLE_MAX: return "VAR_RIGHT_ANKLE_MAX"; break;
        case MEAN_LEFT_HIP_MIN: return "MEAN_LEFT_HIP_MIN"; break;
        case MEAN_LEFT_HIPCOR_MIN: return "MEAN_LEFT_HIPCOR_MIN"; break;
        case MEAN_RIGHT_HIP_MIN: return "MEAN_RIGHT_HIP_MIN"; break;
        case MEAN_RIGHT_HIPCOR_MIN: return "MEAN_RIGHT_HIPCOR_MIN"; break;
        case MEAN_LEFT_KNEE_MIN: return "MEAN_LEFT_KNEE_MIN"; break;
        case MEAN_RIGHT_KNEE_MIN: return "MEAN_RIGHT_KNEE_MIN"; break;
        case MEAN_LEFT_ANKLE_MIN: return "MEAN_LEFT_ANKLE_MIN"; break;
        case MEAN_RIGHT_ANKLE_MIN: return "MEAN_RIGHT_ANKLE_MIN"; break;
        case MEAN_LEFT_HIP_MAX: return "MEAN_LEFT_HIP_MAX"; break;
        case MEAN_RIGHT_HIP_MAX: return "MEAN_RIGHT_HIP_MAX"; break;
        case MEAN_LEFT_HIPCOR_MAX: return "MEAN_LEFT_HIPCOR_MAX"; break;
        case MEAN_RIGHT_HIPCOR_MAX: return "MEAN_RIGHT_HIPCOR_MAX"; break;
        case MEAN_LEFT_KNEE_MAX: return "MEAN_LEFT_KNEE_MAX"; break;
        case MEAN_RIGHT_KNEE_MAX: return "MEAN_RIGHT_KNEE_MAX"; break;
        case MEAN_LEFT_ANKLE_MAX: return "MEAN_LEFT_ANKLE_MAX"; break;
        case MEAN_RIGHT_ANKLE_MAX: return "MEAN_RIGHT_ANKLE_MAX"; break;
        case STOP_REASON: return "STOP_REASON"; break;
        case CURRENT_LEFT_CYCLE_DURATION: return "CURRENT_LEFT_CYCLE_DURATION"; break;
        case CYCLE_COUNT: return "CYCLE_COUNT"; break;
        case RESET_AT: return "RESET_AT"; break;
        case CYCLE_LENGTH: return "CYCLE_LENGTH"; break;
        case COV_LEFT_RIGHT_HIP_ANGLE: return "COV_LEFT_RIGHT_HIP_ANGLE"; break;
        case COV_LEFT_RIGHT_KNEE_ANGLE: return "COV_LEFT_RIGHT_KNEE_ANGLE"; break;
        case COV_LEFT_RIGHT_ANKLE_ANGLE: return "COV_LEFT_RIGHT_ANKLE_ANGLE"; break;
        case COV_LEFT_RIGHT_ANGLE: return "COV_LEFT_RIGHT_ANGLE"; break;
        case NOISE_MUSCLE: return "NOISE_MUSCLE"; break;
        case NOISE_SENSORS: return "NOISE_SENSORS"; break;
        case NOISE_INTERNEURONS: return "NOISE_INTERNEURONS"; break;
        case LEFT_X_DIST_NECK: return "LEFT_X_DIST_NECK"; break;
        case RIGHT_X_DIST_NECK: return "RIGHT_X_DIST_NECK"; break;
        case LEFT_Y_DIST_NECK: return "LEFT_Y_DIST_NECK"; break;
        case RIGHT_Y_DIST_NECK: return "RIGHT_Y_DIST_NECK"; break;
        case LEFT_Z_DIST_NECK: return "LEFT_Z_DIST_NECK"; break;
        case RIGHT_Z_DIST_NECK: return "RIGHT_Z_DIST_NECK"; break;
        case LEFT_STEP_LENGTH: return "LEFT_STEP_LENGTH"; break;
        case RIGHT_STEP_LENGTH: return "RIGHT_STEP_LENGTH"; break;
        case MEAN_LEFT_STEP_LENGTH: return "MEAN_LEFT_STEP_LENGTH"; break;
        case MEAN_RIGHT_STEP_LENGTH: return "MEAN_RIGHT_STEP_LENGTH"; break;
        case VAR_LEFT_STEP_LENGTH: return "VAR_LEFT_STEP_LENGTH"; break;
        case VAR_RIGHT_STEP_LENGTH: return "VAR_RIGHT_STEP_LENGTH"; break;
        case LEFT_CYCLE_DURATION: return "LEFT_CYCLE_DURATION"; break;
        case LEFT_STANCE_DURATION: return "LEFT_STANCE_DURATION"; break;
        case LEFT_STANCE_END_DURATION: return "LEFT_STANCE_END_DURATION"; break;
        case LEFT_SWING_DURATION: return "LEFT_SWING_DURATION"; break;
        case RIGHT_CYCLE_DURATION: return "RIGHT_CYCLE_DURATION"; break;
        case RIGHT_STANCE_DURATION: return "RIGHT_STANCE_DURATION"; break;
        case RIGHT_STANCE_END_DURATION: return "RIGHT_STANCE_END_DURATION"; break;
        case RIGHT_SWING_DURATION: return "RIGHT_SWING_DURATION"; break;
        case LEFT_GOLDEN_RATIO_0: return "LEFT_GOLDEN_RATIO_0"; break;
        case LEFT_GOLDEN_RATIO_1: return "LEFT_GOLDEN_RATIO_1"; break;
        case LEFT_GOLDEN_RATIO_2: return "LEFT_GOLDEN_RATIO_2"; break;
        case RIGHT_GOLDEN_RATIO_0: return "RIGHT_GOLDEN_RATIO_0"; break;
        case RIGHT_GOLDEN_RATIO_1: return "RIGHT_GOLDEN_RATIO_1"; break;
        case RIGHT_GOLDEN_RATIO_2: return "RIGHT_GOLDEN_RATIO_2"; break;
        case MEAN_LEFT_GOLDEN_RATIO_0: return "MEAN_LEFT_GOLDEN_RATIO_0"; break;
        case MEAN_LEFT_GOLDEN_RATIO_1: return "MEAN_LEFT_GOLDEN_RATIO_1"; break;
        case MEAN_LEFT_GOLDEN_RATIO_2: return "MEAN_LEFT_GOLDEN_RATIO_2"; break;
        case MEAN_RIGHT_GOLDEN_RATIO_0: return "MEAN_RIGHT_GOLDEN_RATIO_0"; break;
        case MEAN_RIGHT_GOLDEN_RATIO_1: return "MEAN_RIGHT_GOLDEN_RATIO_1"; break;
        case MEAN_RIGHT_GOLDEN_RATIO_2: return "MEAN_RIGHT_GOLDEN_RATIO_2"; break;
        case VAR_LEFT_GOLDEN_RATIO_0: return "VAR_LEFT_GOLDEN_RATIO_0"; break;
        case VAR_LEFT_GOLDEN_RATIO_1: return "VAR_LEFT_GOLDEN_RATIO_1"; break;
        case VAR_LEFT_GOLDEN_RATIO_2: return "VAR_LEFT_GOLDEN_RATIO_2"; break;
        case VAR_RIGHT_GOLDEN_RATIO_0: return "VAR_RIGHT_GOLDEN_RATIO_0"; break;
        case VAR_RIGHT_GOLDEN_RATIO_1: return "VAR_RIGHT_GOLDEN_RATIO_1"; break;
        case VAR_RIGHT_GOLDEN_RATIO_2: return "VAR_RIGHT_GOLDEN_RATIO_2"; break;
        case POSITION_X: return "POSITION_X"; break;
        case OLD_POSITION_X: return "OLD_POSITION_X"; break;
        case POSITION_Y: return "POSITION_Y"; break;
        case OLD_POSITION_Y: return "OLD_POSITION_Y"; break;
        case POSITION_Z: return "POSITION_Z"; break;
        case OLD_POSITION_Z: return "OLD_POSITION_Z"; break;
        case IN_VELOCITY: return "IN_VELOCITY"; break;
        case OLD_IN_VELOCITY: return "OLD_IN_VELOCITY"; break;
        case IN_ACCELERATION: return "IN_ACCELERATION"; break;
        case IN_VELOCITY_FILTERED: return "IN_VELOCITY_FILTERED"; break;
        case IN_ACCELERATION_FILTERED: return "IN_ACCELERATION_FILTERED"; break;
        case MEAN_VELOCITY: return "MEAN_VELOCITY"; break;
        case VAR_VELOCITY: return "VAR_VELOCITY"; break;
        case MEAN_ACCELERATION: return "MEAN_ACCELERATION"; break;
        case VAR_ACCELERATION: return "VAR_ACCELERATION"; break;
        case MEAN_VELOCITY_CYCLE: return "MEAN_VELOCITY_CYCLE"; break;
        case VAR_VELOCITY_CYCLE: return "VAR_VELOCITY_CYCLE"; break;
        case MEAN_VELOCITY_CYCLE_OLD: return "MEAN_VELOCITY_CYCLE_OLD"; break;
        case VAR_VELOCITY_CYCLE_OLD: return "VAR_VELOCITY_CYCLE_OLD"; break;
        case HEIGHT: return "HEIGHT"; break;
        case DISTANCE: return "DISTANCE"; break;
        case DISTANCE_LATERAL: return "DISTANCE_LATERAL"; break;
        case DISTANCE_FRONTAL: return "DISTANCE_FRONTAL"; break;
        case TIME: return "TIME"; break;
        case TIME_AT_RESET: return "TIME_AT_RESET"; break;
        case TIME_CYCLE: return "TIME_CYCLE"; break;
        case ENERGY_DT: return "ENERGY_DT"; break;
        case ENERGY_OE_DT: return "ENERGY_OE_DT"; break;
        case ENERGY: return "ENERGY"; break;
        case ENERGY_W: return "ENERGY_W"; break;
        case ENERGY_M: return "ENERGY_M"; break;
        case ENERGY_OVEREXTENSION: return "ENERGY_OVEREXTENSION"; break;
        case MEAN_CYCLE_LENGTH: return "MEAN_CYCLE_LENGTH"; break;
        case VAR_CYCLE_LENGTH: return "VAR_CYCLE_LENGTH"; break;
        case MEAN_DOUBLESTANCE_DURATION: return "MEAN_DOUBLESTANCE_DURATION"; break;
        case VAR_DOUBLESTANCE_DURATION: return "VAR_DOUBLESTANCE_DURATION"; break;
        case MEAN_LEFT_CYCLE_DURATION: return "MEAN_LEFT_CYCLE_DURATION"; break;
        case MEAN_LEFT_STANCE_DURATION: return "MEAN_LEFT_STANCE_DURATION"; break;
        case MEAN_LEFT_STANCE_END_DURATION: return "MEAN_LEFT_STANCE_END_DURATION"; break;
        case MEAN_LEFT_SWING_DURATION: return "MEAN_LEFT_SWING_DURATION"; break;
        case MEAN_RIGHT_CYCLE_DURATION: return "MEAN_RIGHT_CYCLE_DURATION"; break;
        case MEAN_RIGHT_STANCE_DURATION: return "MEAN_RIGHT_STANCE_DURATION"; break;
        case MEAN_RIGHT_STANCE_END_DURATION: return "MEAN_RIGHT_STANCE_END_DURATION"; break;
        case MEAN_RIGHT_SWING_DURATION: return "MEAN_RIGHT_SWING_DURATION"; break;
        case VAR_LEFT_CYCLE_DURATION: return "VAR_LEFT_CYCLE_DURATION"; break;
        case VAR_LEFT_STANCE_DURATION: return "VAR_LEFT_STANCE_DURATION"; break;
        case VAR_LEFT_STANCE_END_DURATION: return "VAR_LEFT_STANCE_END_DURATION"; break;
        case VAR_LEFT_SWING_DURATION: return "VAR_LEFT_SWING_DURATION"; break;
        case VAR_RIGHT_CYCLE_DURATION: return "VAR_RIGHT_CYCLE_DURATION"; break;
        case VAR_RIGHT_STANCE_DURATION: return "VAR_RIGHT_STANCE_DURATION"; break;
        case VAR_RIGHT_STANCE_END_DURATION: return "VAR_RIGHT_STANCE_END_DURATION"; break;
        case VAR_RIGHT_SWING_DURATION: return "VAR_RIGHT_SWING_DURATION"; break;
        case HEADING_X: return "HEADING_X"; break;
        case HEADING_Y: return "HEADING_Y"; break;
        case LATERALSPEED_TRUNK: return "LATERALSPEED_TRUNK"; break;
        case PREDICTION_ERROR: return "PREDICTION_ERROR"; break;
    }
}
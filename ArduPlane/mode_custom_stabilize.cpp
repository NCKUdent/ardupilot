#include "mode.h"
#include "Plane.h"

bool ModeCustomStabilize::_enter()
{
    plane.throttle_allows_nudging = false;
    plane.auto_throttle_mode = false;
    plane.auto_navigation_mode = false;

    return true;
}

void ModeCustomStabilize::update()
{
    plane.custom_nav_roll_cd = 0;
    plane.custom_nav_pitch_cd = 0;
}

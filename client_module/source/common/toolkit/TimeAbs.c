#include <common/toolkit/TimeAbs.h>
#include <common/Common.h>


void TimeAbs_init(TimeAbs* this)
{
   this->now = ktime_get_real();
}

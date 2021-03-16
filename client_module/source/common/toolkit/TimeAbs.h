#ifndef OPEN_TIMEABS_H_
#define OPEN_TIMEABS_H_

#include <common/Common.h>


struct TimeAbs;
typedef struct TimeAbs TimeAbs;


extern void TimeAbs_init(TimeAbs* this);

// getters & setters
static inline s64 TimeAbs_getSec(TimeAbs* this);

/**
 * This time class is based on a non-monotonic clock. Use the Time class instead of this one,
 * whenever possible.
 */
struct TimeAbs
{
   ktime_t now;
};


s64 TimeAbs_getSec(TimeAbs* this)
{
   return ktime_divns(this->now, NSEC_PER_SEC);
}

#endif /*OPEN_TIMEABS_H_*/

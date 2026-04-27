#include <windows.h>

#ifndef HIGHTRESOLUTIONTIMER_H
#define HIGHTRESOLUTIONTIMER_H

class HighResolutionTimer {
public:
    HighResolutionTimer() {
        timeBeginPeriod(1);
    }
    ~HighResolutionTimer() {
        timeEndPeriod(1);
    }
};

#endif // HIGHTRESOLUTIONTIMER_H
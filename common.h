#ifndef __COMMON_H__
#define __COMMON_H__

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>

double GetTime(){
    struct timeval tv;
    int rc = gettimeofday(&tv, NULL);
    assert(rc==0);
    return (double) tv.tv_sec + (double) tv.tv_sec/1e6;
}

void sleep_ms(int howlong){
    double t = GetTime();
    while((GetTime() - t) < (double) howlong);
}
#endif //__COMMON_H__

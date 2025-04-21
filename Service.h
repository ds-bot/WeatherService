#ifndef SERVICE_H
#define SERVICE_H

#include "Weather.h"

class Service {
public:
    virtual Weather getWeather(string s) = 0;
    virtual ~Service() = default;
};

#endif
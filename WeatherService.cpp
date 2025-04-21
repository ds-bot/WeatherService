#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "XmlService.h"
#include "JsonService.h"


int main()
{
    XmlService xs;
    Weather w1 = xs.getWeather("weather.xml");
    JsonService js;
    Weather w2 = js.getWeather("weather.json");

}


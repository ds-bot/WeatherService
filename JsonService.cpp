﻿#include <fstream>
#include <exception>
#include "json.hpp"
#include "Weather.h"
#include "JsonService.h"



Weather JsonService::getWeather(string s)
{
    ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    string city = j["name"]; //  Êèðîâ
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lat"]; // 58.5966  
    double temperature = j["main"]["temp"]; // 5.69
    string weather = j["weather"][0]["description"]; // äîæäü
    double windSpeed = j["wind"]["speed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
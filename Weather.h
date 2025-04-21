#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Weather {
private:
    string city;            // Киров
    double lon;            // 49.6601
    double lat;            // 58.5966
    double temperature;    // 5.69
    string weather;        // дождь
    double windSpeed;      // 4.27
    int clouds;            // 100

public:
    Weather(const string& city_, double lon_, double lat_, double temperature_,
        const string& weather_, double windSpeed_, int clouds_)
        : city(city_), lon(lon_), lat(lat_), temperature(temperature_),
        weather(weather_), windSpeed(windSpeed_), clouds(clouds_) {}

    string getDescription() const;
};
#include "Weather.h"

string Weather::getDescription() const {
    ostringstream oss;
    oss << "Погода в городе " << city << " (" << fixed << setprecision(4)
        << lat << "N, " << lon << "E):\n"
        << "Температура: " << temperature << "°C\n"
        << "Состояние: " << weather << "\n"
        << "Скорость ветра: " << windSpeed << " м/с\n"
        << "Облачность: " << clouds << "%";
    return oss.str();
}
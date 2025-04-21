#include "Weather.h"

string Weather::getDescription() const {
    ostringstream oss;
    oss << "������ � ������ " << city << " (" << fixed << setprecision(4)
        << lat << "N, " << lon << "E):\n"
        << "�����������: " << temperature << "�C\n"
        << "���������: " << weather << "\n"
        << "�������� �����: " << windSpeed << " �/�\n"
        << "����������: " << clouds << "%";
    return oss.str();
}
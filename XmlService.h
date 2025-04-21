#ifndef XMLSERVICE_H
#define XMLSERVICE_H

#include "Weather.h"
#include "Service.h"

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


#endif
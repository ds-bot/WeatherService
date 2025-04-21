#include <fstream>
#include <exception>
#include "json.hpp"
#include "Service.h"
#include "Weather.h"

using nlohmann::json;

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
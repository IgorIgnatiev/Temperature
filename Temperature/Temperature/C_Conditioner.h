#pragma once
#include"C_Sensor.h"
class C_Conditioner
{
private:
	C_Sensor* _sensor;
	bool _is_on;
public:
	C_Conditioner();
	C_Conditioner(C_Sensor* obj);

	C_Sensor* get_sensor();
	bool get_is_on();

	void turn_on();
	void turn_off();
};


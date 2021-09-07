#include "C_Conditioner.h"

C_Conditioner::C_Conditioner()
{
	this->_sensor = new C_Sensor;
	this->_is_on = false;
}

C_Conditioner::C_Conditioner(C_Sensor* obj)
{
	this->_sensor = obj;
	this->_is_on = false;
}

C_Sensor* C_Conditioner::get_sensor()
{
	return this->_sensor;
}

bool C_Conditioner::get_is_on()
{
	return this->_is_on;
}

void C_Conditioner::turn_on()
{
	this->_is_on = true;
}

void C_Conditioner::turn_off()
{
	this->_is_on = false;
}

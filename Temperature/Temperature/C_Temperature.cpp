#include "C_Temperature.h"

C_Temperature::C_Temperature()
{
	this->_temp = 0;
}

C_Temperature::C_Temperature(short t)
{
	this->_temp = t;
}

short C_Temperature::get_temp()
{
	return this->_temp;
}

void C_Temperature::set_temp(short t)
{
	this->_temp = t;
}

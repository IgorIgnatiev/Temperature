#include "C_Room.h"

C_Room::C_Room()
{
	this->_conditioner = new C_Conditioner;
	this->_temp = new C_Temperature;
}

C_Room::C_Room(C_Conditioner* cond, C_Temperature* t)
{
	this->_conditioner = cond; 
	this->_temp = t;
}

C_Temperature* C_Room::get_temp()
{
	return this->_temp;
}

void C_Room::set_temp(short t)
{
	this->_temp->set_temp(t);
}

#pragma once
#include"C_Conditioner.h"
class C_Room
{
private:
	C_Conditioner* _conditioner;
	C_Temperature* _temp;
public:
	C_Room();
	C_Room(C_Conditioner* cond, C_Temperature* t);

	C_Temperature* get_temp();
	void set_temp(short t);
};


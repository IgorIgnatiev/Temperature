#include"C_Room.h"

#include <iostream>

int main()
{
	C_Temperature temp(15);
	C_Conditioner cond(new C_Sensor);
	C_Room room;
	std::cout << temp.get_temp() << "\n" << cond.get_sensor()->get_temp(temp) << "\n";
}


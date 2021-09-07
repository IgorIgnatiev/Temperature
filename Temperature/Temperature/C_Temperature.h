#pragma once
class C_Temperature
{
private:
	short _temp;
public:
	C_Temperature();
	C_Temperature(short t);

	short get_temp();
	void set_temp(short t);
};


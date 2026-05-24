#pragma once
#include "IDevice.h"
#include <vector>

class SmartRemote : public IDevice
{
public:
	SmartRemote(IDevice* device)
		:device{device}{}

	void setDevice(IDevice* device)
	{
		this->device = device;
	}

	void power() override
	{
		if (device)
			device->power();
	}

	void plus() override
	{
		if (device)
			device->plus();
	}
	
	void minus() override
	{
		if (device)
			device->minus();
	}
	
	void next() override
	{
		if (device)
			device->next();
	}
	
	void prev() override
	{
		if (device)
			device->prev();
	}
	
	void showinfo() const override
	{
		if (device)
			device->showinfo();
		else
			cout << "device not found" << endl;
	}

	void allPrint() const
	{
		if (device)
			device->allPrint();
	}

private:
	IDevice* device;
};

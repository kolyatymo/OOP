#include "TV.h"



void TV::nextChannel()
{
	if (this->state == State::on)
	{
		if (this->channel == this->numbChannel)
			this->channel = 1;

		else
			++this->channel;
	}

}

void TV::prevChannel()
{
	if (this->state == State::on)
	{
		if (this->channel == 1)
			this->channel = this->numbChannel;
		else
			--this->channel;
	}
}

void TV::incVolume()
{
	if (this->state == State::on)
	{
		if (this->volume == this->maxVolume)
			this->volume = this->maxVolume;
		else
			++this->volume;
	}
}

void TV::decVolume()
{
	if (this->state == State::on)
	{
		if (this->volume == 0)
			this->volume = 0;

		else
			--this->volume;
	}
}

void TV::print() const
{
	if(this->state == State::on)
		cout << "State        --> " << "on" << endl;
	if (this->state == State::off)
		cout << "State        --> " << "off" << endl;
	cout << "Volume       --> " << this->volume << endl;
	cout << "Channel      --> " << this->channel << endl;
	cout << "Numb Channel --> " << this->numbChannel << endl;
	cout << "Max Volume   --> " << this->maxVolume << endl;
	cout << "\n\n";
}

void TV::power()
{
	if (this->state == State::off)
		this->state = State::on;
	else
		this->state = State::off;

}

void Remote::chooseTV(TV* tv)
{
	this->tv = tv;
}

Remote::Remote(TV* tv)
{
	chooseTV(tv);
}

void Remote::power()
{
	tv->power();
}

void Remote::operator++() const
{
	tv->nextChannel();
}

void Remote::operator--() const
{
	tv->prevChannel();
}

void Remote::operator+() const
{
	tv->incVolume();
}

void Remote::operator-() const
{
	tv->decVolume();
}

void Remote::goChannel(const size_t& channel)
{
	if(channel >= 1 and channel <= tv->numbChannel)
		tv->channel = channel;
}

#pragma once
#include <iostream>
using std::cout;
using std::endl;


enum State
{
	on = 1, off
};



class TV
{
public:
	TV() = default;
	TV(State state, size_t volume = 1, size_t channel = 1, size_t numbChannel = 10, size_t maxVolume = 20);
	void power();
	void nextChannel();
	void prevChannel();
	void incVolume();
	void decVolume();
	void print() const;
	 
	friend class Remote;



private:
	State state = State::off;
	size_t volume = 1;
	size_t channel = 1;
	const size_t numbChannel = 10;
	const size_t maxVolume = 20;
};


inline TV::TV(State state, size_t volume, size_t channel, size_t numbChannel, size_t maxVolume)
	:state{state}, volume{ volume }, channel{ channel }, numbChannel{numbChannel}, maxVolume{maxVolume}
{
	
}


class TV;

class Remote 
{
private:
	TV* tv = nullptr;
public:
	void chooseTV(TV* tv);
	Remote(TV* tv = nullptr);
	void power();
	void operator ++() const;
	void operator --() const;
	void operator +() const;
	void operator -() const;
	void goChannel(const size_t& channel);

};



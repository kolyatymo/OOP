#pragma once
#include <iostream>
using namespace std;

class Grandpa
{
	string sleap = "No sleap";
	string name = "No name";
public:
	Grandpa() = default;

	Grandpa(const string& name, const string& sleap)
		:name{name}
	{
		setSleap(sleap);
	}

	void setSleap(const string& sleap)
	{
		if (!sleap.empty())
			this->sleap = sleap;
	}

	virtual void Sleap()
	{
		cout << "Sleap --> " << sleap << endl;
	}

	virtual void print()const
	{
		cout << "Name  --> " << name << endl;
		cout << "Sleap --> " << sleap << endl;


	}
};

class Daddy : public Grandpa
{
	string walk = "No walk";
public:
	Daddy() = default;

	Daddy(const string& name, const string& sleap, const string& walk)
		:Grandpa(name, sleap)
	{
		setWalk(walk);
	}

	void setWalk(const string& walk)
	{
		if (!walk.empty())
			this->walk = walk;
	}

	virtual void Walk()
	{
		cout << "------- Walk() -------" << endl;

		cout << "Walk --> " << walk << endl;
	}

	void print() const override
	{
		Grandpa::print();
		cout << "Walk  --> " << walk << endl;	
	}
	

};

class Son : public Daddy
{
	string play = "No play";
public:
	Son(const string& name,const string& sleap,const string& walk,const string& play)
		:Daddy(name, sleap, walk)
	{
		setPlay(play);
	}
	void setPlay(const string& play)
	{
		if (!play.empty())
			this->play = play;
	}

	virtual void Play()
	{
		cout << "------- Play() -------" << endl;
		cout << "Play --> " << play << endl;
	}

	void print() const override
	{
		cout << "------------------ Son  ------------------" << endl;
		Daddy::print();
		cout << "Play  --> " << play << endl;
		cout << endl;
	}
};


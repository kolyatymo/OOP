#pragma once
#include <iostream>


enum TypeReservoirs
{
	lake = 1, sea, ocean
};

class Reservoirs
{
public:
	Reservoirs() = default;
	Reservoirs(const std::string& name, const TypeReservoirs& type, const size_t& width = 0, const size_t& length = 0, const size_t& depth = 1000)
		:name{name}, type{type}, width{width}, length{length}, depth{depth}
	{
		numRes++;
	}
	;

	void setName(const std::string& name)
	{
		this->name = name;
	}
	
	void setType(TypeReservoirs type)
	{
		this->type = type;
	}
	void setWidth(size_t width)
	{
		this->width = width;
	}
	void setLength(size_t length)
	{
		this->length = length;
	}
	void setDepth(size_t depth)
	{
		this->depth = depth;
	}

	std::string getName() const
	{
		return name;
	}
	TypeReservoirs getType() const
	{
		return type;
	}
	size_t getWidth() const
	{
		return width;
	}
	size_t getLength() const
	{
		return length;
	}
	size_t getDepth() const
	{
		return depth;
	}

	int getVolume() const
	{
		return width * length * depth;
	}

	int getArea() const
	{
		return width * length;
	}

	bool whichToType(const Reservoirs& other)
	{
		if (this->type = other.type)
		{
			std::cout << "one type";
		}
		else
		{
			std::cout << "different type";
		}
	}

	size_t Сomparison(const Reservoirs& other)
	{
		if (this->getArea() > other.getArea())
			return 1;
		if (this->getArea() < other.getArea())
			return -1;
		else
			return 0;
	}




private:
	std::string name = "None";
	TypeReservoirs type;
	size_t width = 0;
	size_t length = 0;
	size_t depth = 1000;
	static size_t numRes;

	friend std::ostream& operator<<(std::ostream& out, const Reservoirs& obj);
	friend std::istream& operator>>(std::istream& in, const Reservoirs& obj);

};

inline std::ostream& operator<<(std::ostream& out, const Reservoirs& obj)
{
	out << "(" << obj.name << ", " << obj.type << ", " << obj.width << ", " << obj.length << ", " << obj.depth;
	
	return out;
}

inline std::istream& operator>>(std::istream& in, const Reservoirs& obj)
{
	in >> obj.name >> obj.type >> obj.width >> obj.length >> obj.depth;

	return in;
}

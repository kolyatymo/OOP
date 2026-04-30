#pragma once

class Point
{
public:
	void setX(const double& x);
	void setY(const double& y);
	double getX() const;
	double getY() const;

	// ctor
	Point() = default;
	Point(const double& x);
	Point(const double& x, const double& y);

	void print() const;

	// binary operator, +, -, ==, !=
	Point operator +(const Point& other);
	Point operator -(const Point& other);
	bool operator ==(const Point& other);
	bool operator !=(const Point& other);


	// ++unary
	Point& operator++();
	Point operator++(int);


private:
	double x = 0, y = 0;
};

inline void Point::setX(const double& x)
{
	this->x = x;
}

inline void Point::setY(const double& y)
{
	this->y = y;
}

inline double Point::getX() const
{
	return this->x;
}

inline double Point::getY() const
{
	return this->y;
}

inline Point::Point(const double& x)
	:Point(x, 0){}


inline Point::Point(const double& x, const double& y)
	:x{ x }, y{ y }{}




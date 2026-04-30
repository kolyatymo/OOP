#pragma once




class Food
{
public:
	// static = глобальний існуючий ресурс, видно буде(public) через імя Food::MAX_WEIGHT
	static const size_t MAX_WEIGHT = 2000;


	const char* getName() const
	{
		return this->name;
	}
	const size_t& getKkal() const;

	const size_t& getWeight() const;


	void setName(const char* name);
	void setKkal(const size_t& kkal);
	void setWeight(const size_t& weight);

	void print() const;

	Food(const char* name = "NoFood", const size_t& kkal = 0, const size_t& weight = 0);
	Food(const Food& other);

	void operator =(const Food& other); // a = b; a(this) = b(other)


	~Food()
	{
		if (this->name != nullptr)
			delete[] this->name;
	}

private:
	char* name = nullptr;
	size_t kkal = 0;
	size_t weight;
};
inline const size_t& Food::getKkal() const
{
	return this->kkal;
}

inline const size_t& Food::getWeight() const
{
	return this->weight;
}
inline void Food::setKkal(const size_t& kkal)
{
	this->kkal = kkal;
}

inline void Food::setWeight(const size_t& weight)
{
	if (weight < MAX_WEIGHT)
	{
		this->weight = weight;
	}
}


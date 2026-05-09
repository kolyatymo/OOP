#pragma once
#include <iostream>


template <typename T>
struct Node
{
	int priority;
	T data;
};


template <typename T>
class Queuets
{
public:
	Queuets() 
	{
		queue = new Node<T>[capacity];
	};
	Queuets(const Queuets& other);

	Queuets<T>& operator = (const Queuets<T> & other);

	void push(const T& element, int priority);
	void pop();
	T Getltem() const;
	void clear();
	bool isEmpty() const;
	int GetN() const;
	void print() const;





	~Queuets();

private:
	Node<T>* queue = nullptr;
	size_t count = 0;
	size_t capacity = 10;
	bool full()const;

};

template<typename T>
inline Queuets<T>::Queuets(const Queuets& other)
	:count{ other.count }, capacity{other.capacity}
{

	queue = new Node<T>[capacity];
	for (size_t i = 0; i < count; i++)
	{
		queue[i] = other.queue[i];
	}
}

template<typename T>
inline Queuets<T>& Queuets<T>::operator=(const Queuets<T>& other)
{
	if (this == &other)
		return*this;

	delete[] queue;

	count = other.count;
	capacity = other.capacity;

	queue = new Node<T>[capacity];
	for (size_t i = 0; i < count; i++)
	{
		queue[i] = other.queue[i];
	}

	return *this;

}

template<typename T>
inline Queuets<T>::~Queuets()
{
	delete[] queue;
}

template<typename T>
inline bool Queuets<T>::full() const
{
	return capacity == count;
}

template<typename T>
inline void Queuets<T>::push(const T& element, int priority)
{
	if (full())
	{
		capacity += 5;
		Node<T>* tmp = new Node<T>[capacity];
		for (size_t i = 0; i < count; i++)
		{
			tmp[i] = queue[i];
		}
		delete[] queue;
		queue = tmp;
	}

	queue[count].data = element;
	queue[count].priority = priority;

	count++;

}

template<typename T>
inline void Queuets<T>::pop()
{
	if (isEmpty())
		return;

	int Maxindex = 0;

	for (size_t i = 0; i < count; i++)
	{
		if (queue[i].priority > queue[Maxindex].priority)
		{
			Maxindex = i;
		}
	}

	for (size_t i = Maxindex; i < count - 1; i++)
	{
		queue[i] = queue[i + 1];
	}
	count--;
}

template<typename T>
inline T Queuets<T>::Getltem() const
{
	if (isEmpty())
	{
		std::cout << "queue is empty";
	}

	int Maxindex = 0;

	for (size_t i = 0; i < count; i++)
	{
		if (queue[i].priority > queue[Maxindex].priority)
			Maxindex = i;
	}

	return queue[Maxindex].data;
}


template<typename T>
inline void Queuets<T>::clear()
{
	if (isEmpty())
		return;

	delete[] queue;

	queue = new Node<T>[capacity];
	count = 0;
}

template<typename T>
inline bool Queuets<T>::isEmpty() const
{
	return count == 0;
}

template<typename T>
inline int Queuets<T>::GetN() const
{
	return count;
}

template<typename T>
inline void Queuets<T>::print() const
{
	if (isEmpty())
	{
		std::cout << "queue is empty";
	}

	for (size_t i = 0; i < count; i++)
	{
		std::cout << "num --> " << queue[i].data << "\t";
		std::cout << "Priority --> " << queue[i].priority << "\t";
	}
	std::cout << "\n";
}

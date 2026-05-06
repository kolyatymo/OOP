#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class Queue
{
	enum { EMPTY = -1, DAFAULT_CAPCITY = 10, DEFAULT_GROW = 5 };
public:
	Queue(size_t capacity = DAFAULT_CAPCITY, size_t grow = DEFAULT_GROW);
	void push(const T& element);
	void pop();
	T back() const;
	size_t size() const;
	bool empty() const;
	T front() const;


	~Queue() {
		if (queue != nullptr)
			delete[] queue;
	}

private:
	T* queue = nullptr;
	size_t step_grow;
	int back_ = EMPTY;
	int front_ = EMPTY;
	size_t capacity;
	bool full() const;
	void resize();
};

template<typename T>
inline Queue<T>::Queue(size_t capacity, size_t grow)
	:capacity{ capacity }, step_grow{ grow }, queue{ new T[capacity] }
{
}

template<typename T>
inline void Queue<T>::push(const T& element)
{
	if (full())
		resize();
	queue[++back_] = element;
}

template<typename T>
inline void Queue<T>::pop()
{
	if (!empty())
	{
		for (size_t i = 0; i < back_; i++)
		{
			queue[i - 1] = queue[i];
		}
		--back_;
	}
}

template<typename T>
inline T Queue<T>::back() const
{
	if (!empty())
		return queue[back_];
	static T errorValue;
	cout << "Error!!! queue is empty!!! \n";
	return errorValue;
}

template<typename T>
inline size_t Queue<T>::size() const
{
	return back_ + 1;
}

template<typename T>
inline bool Queue<T>::empty() const
{
	return front_ == EMPTY+1;
}

template<typename T>
inline T Queue<T>::front() const
{
	if (!empty())
		return queue[front_];
	static T errorValue;
	cout << "Error!!! queue is empty!!! \n";
	return errorValue;
}

template<typename T>
inline bool Queue<T>::full() const
{
	return back_ == capacity - 1;
}

template<typename T>
inline void Queue<T>::resize()
{
	T* tmp = new T[capacity += step_grow];
	for (size_t i = 0; i < back_; i++)
	{
		tmp[i] = queue[i];
	}
	delete[] queue;
	queue = tmp;

}


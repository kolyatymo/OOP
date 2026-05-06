#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class Stack
{
	enum {EMPTY = -1, DAFAULT_CAPCITY = 10, DEFAULT_GROW = 5};
public:
	Stack(size_t capacity = DAFAULT_CAPCITY, size_t grow = DEFAULT_GROW);
	void push(const T& element);
	void pop();
	T top() const;
	size_t size() const;
	bool empty() const;
	size_t capacity;
	~Stack() {
		if (stack != nullptr)
			delete[] stack;
	}

private:
	T* stack = nullptr;
	size_t step_grow;
	int top_ = EMPTY;
	bool full() const;
	void resize();
};

template<typename T>
inline Stack<T>::Stack(size_t capacity, size_t grow)
	:capacity{capacity}, step_grow{grow}, stack{new T[capacity]}
{
	/*this->capacity = capacity;*/
}

template<typename T>
inline void Stack<T>::push(const T& element)
{
	if(full())
		resize();

	stack[++top_] = element;
}

template<typename T>
inline void Stack<T>::pop()
{  
	if (!empty())
		--top_;
}

template<typename T>
inline T Stack<T>::top() const
{
	if (!empty())
		return stack[top_];
	static T errorValue;
	cout << "Error!!! Stack is empty!!! \n";
	return errorValue;
}

template<typename T>
inline size_t Stack<T>::size() const
{
	return top_ + 1;
}

template<typename T>
inline bool Stack<T>::empty() const
{
	return top_ == EMPTY;
}

template<typename T>
inline bool Stack<T>::full() const
{
	return top_ == capacity - 1;
}

template<typename T>
inline void Stack<T>::resize()
{
	T* tmp = new T[capacity += step_grow];
	for (size_t i = 0; i < top_; i++)
	{
		tmp[i] = stack[i];
	}
	delete[] stack;
	stack = tmp;
	
}

#pragma once
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
struct Node  // структура для опису одного вузла одновз списку
{
	T data;
	Node* next;
	Node(const T& data = T(), Node* next = nullptr)
		:data{ data }, next{ next } {};
};

template <typename T>
class Fwdlist
{
public:
	Fwdlist() = default;
	Fwdlist(const Fwdlist& other);
	void AddHead(const T& data);
	void print() const;
	void RemoveHead();
	bool isempty() const;

	void AddTail(const T& data);

	void clear();

	void RemoveAt(const T& data);

	void operator=(const Fwdlist& other);

	


	~Fwdlist();


private:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;
	size_t size = 0;
};

template<typename T>
inline Fwdlist<T>::Fwdlist(const Fwdlist& other)
	:head{ nullptr }, tail{ nullptr }, size(0)
{
	auto tmp = other.head;
	while (tmp != nullptr)
	{
		AddTail(tmp->data);
		tmp = tmp->next;
	}
	
}

template<typename T>
inline void Fwdlist<T>::AddHead(const T& data)
{
	/* Node<T>* */ auto tmp = new Node<T>(data, head);
	head = tmp;
	if (isempty())
		tail = tmp;
	++size;
}

template<typename T>
inline void Fwdlist<T>::print() const
{
	if (isempty())
	{
		cout << "List is Empty" << endl;
		return;
	}

	auto tmp = head;

	cout << "List -->\n";
	while (tmp != nullptr)
	{
		cout << tmp->data << "\t";
		tmp = tmp->next;
		
	}
	cout << endl;
}

template<typename T>
inline void Fwdlist<T>::RemoveHead()
{
	if (isempty())
		return;

	auto tmp = head;
	head = tmp->next;
	--size;
	delete[] tmp;
	if (isempty())
		tail = nullptr;


}

template<typename T>
inline bool Fwdlist<T>::isempty() const
{
	return head == nullptr;

	// return size == 0;
}

template<typename T>
inline void Fwdlist<T>::AddTail(const T& data)
{
	auto tmp = new Node<T>(data);
	++size;
	if (isempty())
	{
		head = tail = tmp;
		return;
	}
	tail->next = tmp;
	tail = tmp;
}

template<typename T>
inline void Fwdlist<T>::clear()
{
	while (head!= nullptr)
	{
		RemoveHead();
	}
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename T>
inline void Fwdlist<T>::RemoveAt(const T& data)
{
	if (isempty())
		return;

	auto tmp = head;

	while (tmp != nullptr)
	{
		if (tmp->data == data)
		{


			if (tmp == head) {
				head = head->next;
			}
			delete tmp;
			--size;
		}
	}
	
}

template<typename T>
inline void Fwdlist<T>::operator=(const Fwdlist& other)
{
	clear();

	auto tmp = other.head;
	while (tmp != nullptr)
	{
		AddTail(tmp->data);
		tmp = tmp->next;
	}
}

template<typename T>
inline Fwdlist<T>::~Fwdlist()
{

	clear();
}

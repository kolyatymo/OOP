#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
struct Node
{
	T data;
	Node* next, * prev;
	Node(const T& data = T(), Node* prev = nullptr, Node* next = nullptr)
		:data{data}, prev{prev}, next{next}
	{}
};

template <typename T>
class List
{
public:
	List() = default;
	List(const List& other)
		:head{nullptr}, tail{nullptr}, size(0)
	{
		auto tmp = other.head;
		while (tmp != nullptr)
		{
			AddTail(tmp->data);
			tmp = tmp->next;
		}
	};
	
	void AddHead(const T& data);
	void AddTail(const T& data);
	void RemoveHead();
	void RemoveTail();

	bool isEmpty() const;

	void print() const;
	void printRev() const;

	void RemoveData(const T& data);

	void clear();
	
	void operator = (const List& other);

	void delByIndex(int index);
	void insByIndex(int index, const T& value);

	//void opeartor[](int index);



	~List();

private:
	Node<T>* findNode(const T& data);
	Node<T>* head = nullptr, *tail = nullptr;
	size_t size = 0;


};


template<typename T>
inline void List<T>::AddHead(const T& data)
{
	auto tmp = new Node<T>(data, nullptr, head);
	if (isEmpty())
		tail = tmp;
	else
		head->prev = tmp;

	head = tmp;
	++size;
}

template<typename T>
inline void List<T>::AddTail(const T& data)
{
	auto tmp = new Node<T>(data, tail);
	if (isEmpty())
		head = tmp;
	else
		tail->next = tmp;

	tail = tmp;
	++size;
}



template<typename T>
inline void List<T>::RemoveHead()
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	--size;

	auto tmp = head;
	head = head->next;
	delete tmp;
	if (isEmpty())
		tail = nullptr;
	else
		head->prev = nullptr;
}

template<typename T>
inline void List<T>::RemoveTail()
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	--size;

	auto tmp = tail;
	tail = tail->prev;
	delete tmp;
	if (isEmpty())
		head = nullptr;
	else
		tail->next = nullptr;
}

template<typename T>
inline bool List<T>::isEmpty() const
{
	return head == nullptr;
}

template<typename T>
inline void List<T>::print() const
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	auto tmp = head;
	cout << "List in direct :: \t";
	while (tmp != nullptr)
	{
		cout << tmp->data << "\t";
		tmp = tmp->next;
	}
	cout << endl;
}

template<typename T>
inline void List<T>::printRev() const
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	auto tmp = tail;
	cout << "List in revers :: \t";
	while (tmp != nullptr)
	{
		cout << tmp->data << "\t";
		tmp = tmp->prev;
	}
	cout << endl;
}

template<typename T>
inline void List<T>::RemoveData(const T& data)
{
	auto find = findNode(data);
	if (find == nullptr)
		return;
	if (find == head)
	{
		RemoveHead();
		return;
	}
	if (find == tail)
	{
		RemoveTail();
		return;
	}

	find->prev->next = find->next;
	find->next->prev = find->prev;
	delete find;
	--size;
}

template<typename T>
inline void List<T>::clear()
{
	/*while (head != nullptr)
	{
		RemoveHead();
	}
	this->head = nullptr;
	this->tail = nullptr;
	this->size = 0;*/


	if (!isEmpty)
	{
		this->head = nullptr;
		this->tail = nullptr;
		this->size = 0;
	}

}

template<typename T>
inline void List<T>::operator=(const List& other)
{
	clear();

	auto tmp = other.head;
	while (tmp != nullptr)
	{
		AddHead(tmp->data);
		tmp = tmp->next;
	}
}


template<typename T>
inline void List<T>::delByIndex(int index)
{
	if (isEmpty())
		cout << "List is empty";

	if (index < 0 or index > size)
		cout << "index not found";

	auto tmp = head;
	for (size_t i = 0; i < index; i++)
		tmp = tmp->next;

	if (tmp == head)
		RemoveHead();
	else if (tmp == tail)
		RemoveTail();

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	delete tmp;
	--size;
}

template<typename T>
inline void List<T>::insByIndex(int index, const T& value)
{
	if (index < 0 or index > size)
		cout << "index not found";

	if (isEmpty())
	{
		head = tmp;
		tail = tmp;
	}
	auto tmp =head;
	for (size_t i = 0; i < index; i++)
		tmp = tmp->next;

	auto newNode = Node<T>(value);

	newNode->prev = tmp->prev;
	newNode->nexe = tmp;

	tmp->prev->next = newNode;
	tmp->prev = newNode;

	++size;
}

template<typename T>
inline List<T>::~List()
{
	clear();
}


template<typename T>
inline Node<T>* List<T>::findNode(const T& data)
{
	auto tmp = head;
	while (tmp != nullptr && tmp->data != data)
	{
		tmp = tmp->next;
	}
	return tmp;
}

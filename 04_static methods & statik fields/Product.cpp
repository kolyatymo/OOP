#include "Product.h"
#include <iostream>
using std::cout;
using std::endl;

Product::Product(const char* name)
{
	setName(name);
}

Product::Product(const char* name, const size_t& price, const size_t& quantity, const ProductType& productType)
{
	setName(name);
	setPrice(price);
	setQuantity(quantity);
	setProductType(productType);

}

Product::Product(const Product& other)
	:Product(other.name, other.price, other.quantity, other.productType)
{
	/*setName(other.name);
	setPrice(other.price);
	setQuantity(other.quantity);
	setProductType(other.productType);*/
}

void Product::operator=(const Product& other)
{
	if (this == &other)
		return;

	setName(other.name);
	setPrice(other.price);
	setQuantity(other.quantity);
	setProductType(other.productType);
}

Product::~Product()
{
	counter--;
	if (this->name != nullptr)
	{
		delete[] this->name;
		this->name = nullptr;
	}
}

void Product::setName(const char* name)
{
	if (this->name != nullptr)
		delete[] this->name;

	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
}

void Product::setPrice(const size_t& price)
{
	this->price = price;
}

void Product::setQuantity(const size_t& quantity)
{
	if (this->quantity <= MAX_QUANTITY)
		this->quantity = quantity;
	else
		this->quantity = MAX_QUANTITY;
}

void Product::setProductType(const ProductType& productType)
{
	if (productType >= ProductType::NONE and productType <= ProductType::BEVEREAGES)
		this->productType = productType;
}

void Product::print() const
{
	cout << "\n ID %" << id << endl;
	cout << "Product  -->" << name << endl;
	cout << "Price    -->" << price << endl;
	cout << "Quantity -->" << quantity << endl;
	cout << "Category -->" << (int)this->productType << endl;
}
size_t Product::counter = 0;

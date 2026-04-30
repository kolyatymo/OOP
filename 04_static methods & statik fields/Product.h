#pragma once
enum ProductType{NONE, BAERY, DAIRY, CONFECTIONERS, BEVEREAGES };

class Product
{
public:
	static const size_t MAX_QUANTITY = 1000;
	Product() = default;
	Product(const char* name);
	Product(const char* name, const size_t& price, const size_t& quantity = 0, const ProductType& productType = ProductType::NONE);
	Product(const Product& other);

	void operator=(const Product& other);
	~Product();

	void setName(const char* name);
	void setPrice(const size_t& price);
	void setQuantity(const size_t& quantity);
	void setProductType(const ProductType& productType);
	void print() const;
	static size_t getCounter()
	{
		return counter;
	}
	static bool someTypeProduct(const Product& product1, const Product& product2)
	{
		return product1.productType == product2.productType;
	}
private:
	size_t id = ++counter;
	char* name = nullptr;
	size_t price = 0;
	size_t quantity = 0;
	ProductType productType = ProductType::NONE;
	static size_t counter;
};


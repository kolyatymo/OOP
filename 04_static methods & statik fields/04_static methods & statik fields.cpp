#include <iostream>
#include "Product.h"
using namespace std;



int main()
{


    cout << "Counter --> " << Product::getCounter() << endl;

    Product bread("Bread", 30, 160, ProductType::BAERY);
    bread.print();
    

    Product cake("cake", 200, 18, ProductType::CONFECTIONERS);
    cake.print();
    
    cout << "\n\nCounter --> " << Product::getCounter() << endl;
    
    cout << "check category --> " << boolalpha << Product::someTypeProduct(bread, cake) << endl;

}


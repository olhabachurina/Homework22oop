// Homework22oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "electronicProduct.h"
#include "clothing.h"
#include "OrderException.h"


int main() {
    Product* product = new electronicProduct("Laptop", 1499.99, 12, 0);
    
    try {
        std::cout << "Placing order for product: " << product->getName() << std::endl;
        product->placeOrder();
    }
    catch (const OrderException& ex) {
        std::cerr << "Order exception occurred: " << ex.what() << std::endl;
    }

    
    Product* clothing = new Clothing("Shirt", 35, "L", "Red");

    try {
        clothing->placeOrder();
        std::cout << "Order placed successfully!" << std::endl;
    }
    catch (const OrderException& ex) {
        std::cerr << "Order exception occurred: " << ex.what() << std::endl;
    }
    delete clothing;
    delete product;
   
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

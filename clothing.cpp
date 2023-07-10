#include "clothing.h"
#include <iostream>
#include "orderException.h"

Clothing::Clothing(const std::string& name, double price, const std::string& size, const std::string& color)
    : Product(name, price), size(size), color(color) {}

std::string Clothing::getSize() const {
    return size;
}

std::string Clothing::getColor() const {
    return color;
}
void Clothing::placeOrder() const {
    if (size.empty() || color.empty()) {
        throw OrderException("Order processing failed: Invalid clothing size or color");
    }

    std::cout << "Processing order for clothing: " << getName() << std::endl; // ƒополнительна€ логика дл€ обработки заказа одежды
}
   
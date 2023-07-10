#include "product.h"
Product::Product(const std::string& name, double price) : name(name), price(price) {}

std::string Product::getName() const {
	return name;
}

double Product::getPrice() const {
	return price;
}
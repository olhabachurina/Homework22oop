#pragma once
#include <string>
class Product {
private:
	std::string name;
	double price;

public:
	Product(const std::string& name, double price);
	std::string getName() const;
	double getPrice() const;
	virtual void placeOrder() const = 0;  // Абстрактный метод для разных типов товаров
};
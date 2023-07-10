#pragma once
#include "product.h"
class Clothing : public Product {
private:
	std::string size;
	std::string color;

public:
	Clothing(const std::string& name, double price, const std::string& size, const std::string& color);
	std::string getSize() const;
	std::string getColor() const;
	void placeOrder() const override;
};


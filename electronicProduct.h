#pragma once
#include "product.h"
class electronicProduct : public Product {
private:
	int warrantyPeriod;
	int stockQuantity;

public:
	electronicProduct(const std::string& name, double price, int warrantyPeriod, int stockQuantity);
	int getWarrantyPeriod() const;
	int getStockQuantity() const;
	void placeOrder() const override;
};



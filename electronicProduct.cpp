#include "electronicProduct.h"
#include <iostream>
#include "OrderException.h"

electronicProduct::electronicProduct(const std::string& name, double price, int warrantyPeriod, int stockQuantity)
    : Product(name, price), warrantyPeriod(warrantyPeriod), stockQuantity(stockQuantity) {}

int electronicProduct::getWarrantyPeriod() const {
    return warrantyPeriod;
}

int electronicProduct::getStockQuantity() const {
    return stockQuantity;
}

void electronicProduct::placeOrder() const {
    if (stockQuantity <= 0) {
        throw OrderException("Order processing failed: Product is out of stock");
    }

    std::cout << "Processing order for electronic product: " << getName() << std::endl;
    // Дополнительная логика для обработки заказа электронного товара
};
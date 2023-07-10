#include "OrderException.h"
OrderException::OrderException(const char* message) : message(message) {}

const char* OrderException::what() const noexcept {
	return message;
}
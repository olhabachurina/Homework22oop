#pragma once
#include <exception>

class OrderException : public std::exception {
private:
	const char* message;

public:
	OrderException(const char* message);
	const char* what() const noexcept override;
};


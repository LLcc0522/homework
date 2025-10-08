#include "elephant.h"

Elephant::Elephant(const std::string& elephantName)
	: name(elephantName) {
}

std::string Elephant::getName() const {
	return name;
}
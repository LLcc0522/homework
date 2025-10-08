#pragma once
#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <string>

class Elephant {
private:
	std::string name;

public:
	Elephant(const std::string& elephantName);
	std::string getName() const;
};

#endif // ELEPHANT_H

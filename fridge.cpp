#include "Fridge.h"
#include <iostream>

void Fridge::openDoor() {
	std::cout << "冰箱门已打开" << std::endl;
}

void Fridge::closeDoor() {
	std::cout << "冰箱门已关闭" << std::endl;
}

void Fridge::putIn(Elephant* elephant) {
	std::cout << "将大象放入冰箱" << std::endl;
}
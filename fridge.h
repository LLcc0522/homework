#pragma once
#ifndef FRIDGE_H
#define FRIDGE_H

#include "elephant.h"

class Fridge {
public:
	// 冰箱操作 - 三个核心步骤
	void openDoor();      // 第一步：打开冰箱门
	void putIn(Elephant* elephant); // 第二步：把大象装进冰箱
	void closeDoor();     // 第三步：关闭冰箱门
};

#endif // FRIDGE_H
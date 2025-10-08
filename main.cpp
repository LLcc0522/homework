#include <iostream>
#include "elephant.h"
#include "fridge.h"

int main() {
	std::cout << "=== 大象装进冰箱程序 ===" << std::endl;

	// 创建大象对象
	Elephant* elephant = new Elephant("大象");

	// 创建冰箱对象，使用fridge作为变量名
	Fridge fridge;

	// 执行三个核心步骤
	fridge.openDoor();        // 第一步：打开冰箱门
	fridge.putIn(elephant);   // 第二步：把大象装进冰箱
	fridge.closeDoor();       // 第三步：关闭冰箱门

	std::cout << "\n程序执行完毕" << std::endl;

	// 清理内存
	delete elephant;

	return 0;
}
#pragma once
#ifndef FRIDGE_H
#define FRIDGE_H

#include "elephant.h"

class Fridge {
public:
	// ������� - �������Ĳ���
	void openDoor();      // ��һ�����򿪱�����
	void putIn(Elephant* elephant); // �ڶ������Ѵ���װ������
	void closeDoor();     // ���������رձ�����
};

#endif // FRIDGE_H
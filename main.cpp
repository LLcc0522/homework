#include <iostream>
#include "elephant.h"
#include "fridge.h"

int main() {
	std::cout << "=== ����װ��������� ===" << std::endl;

	// �����������
	Elephant* elephant = new Elephant("����");

	// �����������ʹ��fridge��Ϊ������
	Fridge fridge;

	// ִ���������Ĳ���
	fridge.openDoor();        // ��һ�����򿪱�����
	fridge.putIn(elephant);   // �ڶ������Ѵ���װ������
	fridge.closeDoor();       // ���������رձ�����

	std::cout << "\n����ִ�����" << std::endl;

	// �����ڴ�
	delete elephant;

	return 0;
}
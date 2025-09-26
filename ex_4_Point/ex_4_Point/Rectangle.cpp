#include <iostream>
#include "Rectangle.h"
using namespace std;

// �Ű����� ������
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2): upLeft(x1, y1), lowRight(x2, y2) { } // ��� �̴ϼȶ����� �� �Ű����� ������ ȣ�� �� �������(�Ǵ� ���) ����� ���ÿ� �ʱ�ȭ�� ������ �Ѵ�.

void Rectangle::ShowRecInfo() const {
	cout << "�� ���" << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ�" << '[' << upLeft.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}

/*
	Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2): upLeft(x1, y1), lowRight(x2, y2) { }

	�� �ڵ�� �Ʒ� �ǹ̸� ������ �ִ�.

	��ü upLeft ������������ x1�� y1�� ���ڷ� ���޹޴� ������ ȣ��
	��ü lowRight ������������ x2�� y2�� ���ڷ� ���޹޴� ������ ȣ��

	����� Rectangle.h �� ���� �Ʒ��� ���� upLeft, lowRight ���� Point ��ü(Ŭ����)�� ������ Rectangle�� ��� �������� �� �� �ִ�.
	��, ���� upLeft, lowRight�� Point �����ڸ� ȣ��(�ʱ�ȭ)�� Rectangle�� ������ �����϶�� �ǹ̴�.

	class Rectangle {
		private:
			Point upLeft;
			Point lowRight;
		public:
			Rectangle(const int& x1, const int& y, const int& x2, const int& y2); // �Ű����� ������ �� �̰� ���� �� �ϸ� �Ű������� ���� �⺻ �����ڰ� �ڵ� �����ȴ�.
			void ShowRecInfo() const;
	};

	�� ��ü�� �ƴϾ �ȴ�. ��� �̴ϼȶ������� ��ü�� �ƴ� ��� �ʱ�ȭ�� ����ص� ������ ����.
	�ڵ尡 ������µ� ���ŷӱ� ������ ��� �̴ϼȶ������� �Ʒ��� ���� ������ �ִٰ� �Ѵ�.

	1. ��� ������ �鿩�ٺ��� �ʾƵ� �ʱ�ȭ ����� ��Ȯ�� �ν� ����
	2. ���ɿ� �ణ�� ���� ����(����� ���ÿ� �ʱ�ȭ�̹Ƿ�)

	�� ���� '����� ���ÿ� �ʱ�ȭ'�ϴ� ��� �̴ϼȶ������� Ư¡�� ��������� �����ڸ� ������ �� �ְ� �ϴ� �����̱⵵ �ϴ�.
	
*/
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle {
	private:
		Point upLeft;
		Point lowRight;
	public:
		Rectangle(const int& x1, const int& y, const int& x2, const int& y2); // �Ű����� ������ �� �̰� ���� �� �ϸ� �Ű������� ���� �⺻ �����ڰ� �ڵ� �����ȴ�.
		void ShowRecInfo() const;
};

#endif // !__RECTANGLE_H_

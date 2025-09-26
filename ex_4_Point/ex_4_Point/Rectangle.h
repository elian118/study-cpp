#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle {
	private:
		Point upLeft;
		Point lowRight;
	public:
		Rectangle(const int& x1, const int& y, const int& x2, const int& y2); // 매개변수 생성자 → 이걸 선언 안 하면 매개변수가 없는 기본 생성자가 자동 생성된다.
		void ShowRecInfo() const;
};

#endif // !__RECTANGLE_H_

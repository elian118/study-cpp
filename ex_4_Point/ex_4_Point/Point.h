#ifndef __POINT_H_
#define __POINT_H_

class Point {
	private:
		int x;
		int y;
	public:
		Point(const int& xpos, const int& ypos); // 매개변수 생성자 → 이걸 선언 안 하면 매개변수가 없는 기본 생성자가 자동 생성된다.
		int GetX() const;
		int GetY() const;
		bool SetX(int xpos);
		bool SetY(int ypos);
};

#endif // !__POINT_H__

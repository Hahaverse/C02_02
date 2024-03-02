//2023111359 최가윤
//사각형 클래스 작성
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }

    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea() { return width * height; }

};

int main()
{
    Rectangle r1;

    r1.setHeight(3);
    r1.setWidth(7);

    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getHeight() << endl;
    cout << "Area = " << r1.getArea() << endl << endl;
    return 0;
}

#include<iostream>
#include<string.h>
#include"Task 2_lab4.h"
using namespace std;
class Shape
{
private:
	Point2D  postion;
	int colorRGB [4];
public:
	Shape(Point2D point, int color_array[4])
	{
		for (int i = 0; i <4; i++)
		{
			if (color_array[i] >= 0 && color_array[i] <= 255)
				colorRGB[i] = color_array[i];
		}
		postion.x = point.x;
		postion.y = point.y; 
	}
	virtual void render() = 0;
	string get_apoint() {
		return postion.toString();
	}
	void get_acolor()
	{
		for (int i = 0; i < 4; i++)
			cout << colorRGB[i];
		cout << endl;
	}
};
		

class Rectangle : public Shape {
public:
	float width;
	float height;
	Rectangle(Point2D point, float width,float height, int  colorArr[4]) :width(width),height(height),Shape(point, colorArr)
	{}
	void render();
};
class Triangle : public Shape {
public:
	float base;
	float height;
	Triangle(Point2D point, float base, float height, int colorArr[4]) : base(base),height(height),Shape(point, colorArr)
	{}
	void render();
	

};
class Circle : public Shape {
public:
	float radius;
	Circle(Point2D point,float radius, int colorArr[4]):radius(radius),Shape(point,colorArr)
	{}
	string point = get_apoint();
	void render();
};


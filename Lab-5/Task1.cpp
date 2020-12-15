#include<iostream>
#include "Task1.h"
#include<vector>
#include<string>
using namespace std;

void Circle::render()
{
	cout << "Circle" << " position: " << get_apoint() << " Radius: " << radius << endl;
}

void Rectangle::render()
{
	cout << "Rectangle" << " position: " <<  get_apoint() << " width: " << width << "  height: " << height << endl;
}

void Triangle::render()
{
	cout << "Triangle" << " position: " << get_apoint() << " base: " << base << "  height: " << height << endl;
}

void testRendering ( vector <Shape *> testing)
{
	testing[0]->render();
	testing[1]->render();
	testing[2]->render();

}
/*
int main()
{
	Point2D point;
	point.x = 0;
	point.y = 1;
	int color_arr[4] = { 12,12,12,214 };
	Rectangle first(point, 12.5, 14.7, color_arr);
	Triangle second(point, 7.5, 12.2, color_arr);
	Circle thred (point, 6.2, color_arr);
	vector <Shape*> vector_Shaped;
	vector_Shaped.push_back(&first);
	vector_Shaped.push_back(&second);
	vector_Shaped.push_back(&thred);
	testRendering(vector_Shaped);



}*/
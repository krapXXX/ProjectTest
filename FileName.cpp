#include<iostream>
using namespace std;

class Point
{
private:
	int x; 
	int y;
public:
	void Print()
	{
		cout << "X: " << x << "\tY: " << y<<endl;
	}
	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
};

int main()
{
	Point a;
	a.Init(1, 2);
	a.Print();

	Point b;
	b.Init(10, 20);
	b.Print();

}
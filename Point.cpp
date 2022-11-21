#include <iostream>

using std::cout, std::endl;

class Point{
	
	private:
		int x=1;
		int y=1;
	public:
		Point(){cout<<"Konstrukcja"<<endl;}
		Point(Point& p)
		{
			cout<<"Kopia"<<endl;
			this->x=p.x;
			this->y=p.y;
		}
		Point(Point&& p)
		{
			cout<<"Przeniesienie"<<endl;
			this->x=p.x;
			this->y=p.y;
			p.x=0;
			p.y=0;

		}
		Point(int x, int y=0)
		{
			this->x=x;
			this->y=y;
		};
		void Translate (int dX, int dY)
		{
			x+=dX;
			y+=dY;
		}
		void print() const
		{
			cout<<"("<<x<<","<<y<<")\n";
		}



};

void test(Point& p)
{
	p.print();
	p.Translate(5,5) ;
	p.print();
}
Point testPrzenoszenie(int n)
{
	if(m>0)
	{
		return Point(1);
	}
	return p;
}

int main()
{
//	Point point(0,0);
//	point.print();
//	point.Translate(4,5);
//	point.print();
//	Point p;
	Point p1;
	Point p = testPrzenoszenie();
//	test(p);
//	Point p2 = p;
	return 0;
}

#include <iostream>

using std::cout, std::endl;

class Point{
	
	private:
		int x=1;
		int y=1;
	public:
		Point(){cout<<"Konstrukcja domyslna"<<endl;}
//Konstruktor kopiujacy tworzy kopie do obiketu
		Point(Point& p)
		{
			cout<<"Kopia"<<endl;
			this->x=p.x;
			this->y=p.y;
		}
//Konstruktor przenoszacy obiekt z ktorego przenosimy czyscimy
		Point(Point&& p)
		{
			cout<<"Przeniesienie"<<endl;
			this->x=p.x;
			this->y=p.y;
			p.x=0;
			p.y=0;

		}
//Konstuktor z parametrami
		Point(int x, int y=0)
		{
			cout<<"Konstrukcja z parametrem";
			this->x=x;
			this->y=y;
		};
//Destruktor
		~Point()
		{
			cout<<"Desktruckja"<<endl;
		}
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
//Przekazanie przez referencje konstuktor tylko konstruktor jakby przekazac Point p to bylaby konstrukcja i kopia
void test(Point& p)
{
	p.print();
	p.Translate(5,5) ;
	p.print();
}
Point testMove(int n)
{
	Point p;
	if(n>0)
	{
		return Point(1);
	}
	else 
	{
		return p;
	}
}

int main()
{
//	Point point(0,0);
//	point.print();
//	point.Translate(4,5);
//	point.print();
	Point zwykly;
	Point kopiujacy = zwykly;
	Point przenoszacy=testMove(-1);


	cout<<"----------------------------"<<endl;
	test(kopiujacy);
//	testPrzenoszenie(przenoszacy);
//	Point p2 = p;
	for (int i=1;i<6;i++)
	{
		Point p(i,i);
		p.print();
	}
}

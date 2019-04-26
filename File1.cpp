#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream.h>
#include <windows.h>
#include <conio.h>

using namespace std;
class Par
{
private:
	int x1,x2,x3,y1,y2,y3, S_S;
	float fi;

public:
	Par (int x1, int x2, int x3, int y1, int y2, int y3)
	{
	   this->x1 = x1;
	   this->x2 = x2;
	   this->x3 = x3;
	   this->y1 = y1;
	   this->y2 = y2;
	   this->y3 = y3;
	}
	int S()
	{
		S_S = (x2 - x1) * (y3 - y2);
		return S_S;
	}
	float F()
	{
	  fi = asin((double(y3-y2))/(sqrt(pow((double(y3-y2)),2) + pow((double(x3 - x2)),2)))) * 180 / M_PI;
	  return fi;
	}
};

int main(int argc, char* argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Par P(2,4,5,2,2,6);
	int S = P.S();
	float fi = P.F();
	cout << "Площадь параллелограмма: " ;
	cout << S << " метров квадратных" << endl;
	cout << "угол смежных сторон параллелограмма: " ;
	cout << fi << " градусов";
	getch ();
	return 0;
}

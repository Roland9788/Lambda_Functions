//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<functional>
//#include<list>
//#include<vector>
//#include<windows.h>
//using namespace std;
//
///*
//	������ ���������
//	#include<algorithm>
//	#include<cmath>
//	void abssort(float* x, unsigned n)
//	{
//		std:sort(x,x+n,//lambda ��������� ����������
//		[](float a, float b){return (abs(a)<abs(b));
//		}//����� lambda ���������
//		};
//		}
//
//
//
//	[=] () mutable thcrow()->int
//	1	 2	  3		 4		  5
//
//	6 {
//
//		int n=x+y;
//		x=y;
//		y=n;
//		return n;
//	}
//
//	1. ����������� Capture(����� ��������� ��� �������� ������-��������� � ������������ �++).
//	2. ������ ���������� ������������. (����� ���������� ������-�����������).
//	3. ���������� ������������ ������������.
//	4. ������������ Exception ������������.
//	5. ����������-������������ ��� ������������.
//	6. ���� ������-���������.
//
//	[&total, factor]
//	[factor, &total]
//	[&, facor]
//	[=, &total]
//	&identifier
//	=identifier
//
//
//struct S
//{
//	void f(int i);
//};
//void S::f(int i)
//{
//
//	[&, i] {};//Ok
//	//[&, &i] {};//Error: i preceded by & when & is the default
//	//[=, this] {};// Error: this when = is the default
//	//[=, *this] {};//Ok: capture this by value. See below.
//	//[i, i] {};//Error: i repeated
//}
//
//template<class ... Args>
//void f(Args... args)
//{
//	auto x = [args...]{ return g(args...); };
//	x();
//}
//
//*/
//
///*
//
//	void ApplyScale(const vector<int>& v)const
//	{
//		for_each(v.begin(), v.end(), [this](int n) {cout << n*_scale << "\n"; });
//	}
//
//		void ApplyScale2(const vector<int>& v) 
//	{
//		for_each(v.begin(), v.end(), [*this](int n) {cout << n*_scale << "\n"; });
//	}
//
//	void ApplyScale(const vector<int>& v)const
//	{
//		for_each(v.begin, v.end,[=](int n){cout<<n*_scale<<"\n";});
//	}
//
//*/
//
//
//class Scale
//{
//
//	int _scale;
//
//public:
//
//	explicit Scale(int scale) :_scale(scale) {};
//
//	void ApplyScale(const vector<int>& v)const
//	{
//		for_each(v.begin(), v.end(), [=](int n) {cout << n*_scale << "\n"; });
//	}
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	srand(time(NULL));
//
//	//auto f1 = [](int x, int y) {return x + y; };
//	//cout << f1(2, 3)<<"\n";
//	//function<int(int, int)> f2 = [](int x, int y) {return x + y; };
//	//cout << f2(3, 4) << "\n";
//
//	//int i = 3;
//	//int j = 5;
//	//function<int(void)>f = [i, &j] {return i + j; };
//	//i = 22;
//	//j = 44;
//	//cout << f();
//
//	//list<int> numbers;	
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	numbers.push_back(rand() % 10);
//	//}
//	// 
//	//const list<int>::const_iterator result = find_if(numbers.begin(), numbers.end(), [](int n) {return (n % 2) == 0; });
//	//if (result != numbers.end())
//	//{
//	//	cout << "\n������ ������ ����� � ������ - " << *result << ".\n";
//	//}
//	//else
//	//{
//	//	cout << "\n� ������ ���� �����\n";
//	//}
//
//	//int timestwoplusthree = [](int x) {return [](int y) {return y * 2; }(x)+3; }(5);
//	//cout << timestwoplusthree << "\n";
//
//	//auto addtwointegers = [](int x)->function<int(int)> {return [=](int y) {return x + y; }; };
//	//auto higherorde = [](const function<int(int)>& f, int z) {return f(z) * 2; };
//	//auto answer = higherorde(addtwointegers(7), 8);
//	//cout << answer << "\n";
//
//
//	vector<int>values;
//	for (int i = 0; i < 5; i++)
//	{
//		values.push_back(i);
//	}
//
//	Scale s(3);
//	s.ApplyScale(values);
//
//
//
//	return 0;
//}



#include <iostream>
#include <map>
#include <windows.h>
std::map<char, double> note{
    {'C', 32.703}, {'D', 36.708}, {'E', 41.203}, // ��, ��, ��
    {'F', 43.654}, {'G', 48.999}, {'A', 55.}, // ��, ����, ��
    {'H', 61.735} }; // ��
const int duration{ 400 }; // �����������
const int octave{ 4 }; // ������
int main()
{
    while (1) {
        Beep(note['G'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['F'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['D'] * octave, duration); 
        Beep(note['C'] * octave, duration);
        Beep(note['A'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['A'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['F'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['D'] * octave, duration);
        Beep(note['C'] * octave, duration);

    }
}
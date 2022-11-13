#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

using namespace std;

class Student;
class Queue
{
	Student* Wait;
	int MaxQueueLength;
	int QueueLength;
public:
	Queue(int m);
	~Queue();
	void Add(Student _st);
	int Extract();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Show1();
	friend Student;

};

class Student
{
	string FName;
	string LName;
	static int round;
	int ball[3] = {};
public:
	Student();
	Student(string _n, string _s);
	int Get_round();
	int Get_ball(int _n);
	void Set_ball(int _n);
	friend ostream& operator <<(ostream& os, Student& _st);
	friend void cout_ball(Student _st);
	static void round_n(int n);
	static void round_null();
	Student rand_ball(Student& _st);
	friend void res(Student& _st);
};

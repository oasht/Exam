#include "Exam.h"
int Student::round = 0;

Student::Student()
{
	FName = "FName";
	LName = "LName";
}

Student::Student(string f, string l)
{
	FName = f;
	LName = l;
}

int Student::Get_round()
{
	return round;
}

int Student::Get_ball(int _n)
{
	return ball[_n];
}

void Student::Set_ball(int _n)
{
	ball[round] = _n;
}

void Student::round_n(int n)
{
	round = n;
}

void Student::round_null()
{
	round = 0;
}

Student Student::rand_ball(Student& _st)
{
	int n = rand() % 12 + 1;
	_st.ball[round] = n;
	return _st;
}


void Queue::Show1()
{
	if (!IsEmpty())
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "       Name      Surname      Marks:      Results:";
		cout << "\n-----------------------------------------------------\n";
		for (int i = 0; i < QueueLength; i++)
		{
			cout << Wait[i]; cout_ball(Wait[i]); res(Wait[i]); cout << endl;
		}
		cout << "\n-----------------------------------------------------\n";
	}
	else cout << "Empty!!!" << endl;
}

Queue::~Queue()
{
	delete[]Wait;
}
Queue::Queue(int m)
{
	MaxQueueLength = m;
	Wait = new Student[MaxQueueLength];
	QueueLength = 0;
}
void Queue::Clear()
{
	QueueLength = 0;
}
bool Queue::IsEmpty()
{
	return QueueLength == 0;
}
bool Queue::IsFull()
{
	return QueueLength == MaxQueueLength;
}
int Queue::GetCount()
{
	return QueueLength;
}
void Queue::Add(Student _st)
{
	if (!IsFull())
	{
		Wait[QueueLength++] = _st;
	}

}
int Queue::Extract()
{
	if (!IsEmpty())
	{
		Student temp = Wait[0];
		int n = temp.Get_round();
		for (int i = 1; i < QueueLength; i++)
		{
			Wait[i - 1] = Wait[i];
		}
		if (temp.Get_ball(n) >= 7)
		{
			Wait[QueueLength - 1] = temp;
			return 1;
		}
		else
		{
			QueueLength--;
			return 0;
		}
	}
}

ostream& operator<<(ostream& os, Student& _st)
{
	os << setw(12) << _st.FName << setw(12) << _st.LName;
	return os;
}



void cout_ball(Student _st)
{
	cout << setw(4) << _st.ball[0] << setw(4) << _st.ball[1]
		<< setw(4) << _st.ball[2];
}

void res(Student& _st)
{
	if (_st.ball[0] < 7 || _st.ball[1] < 7 || _st.ball[2] < 7)
	{
		cout << "   Not enrolled";
	}
	else cout << "     Enrolled";
}

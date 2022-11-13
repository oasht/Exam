#include "Exam.h"

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	Queue Q(15), Q1(15);

	int key = 0, n = 0;
	bool key_1 = 1;
	int size = 15;

	Student st1("Olga", "Ivanova"); Student st2("Maria", "Petrova");
	Student st3("Ivan", "Dudkin"); Student st4("Philipp", "Kirkorov");
	Student st5("Laima", "Vaikule"); Student st6("Alla", "Pugacheva");
	Student st7("Lev", "Tolstoy"); Student st8("Anton", "Chekhov");
	Student st9("Fedor", "Yegorov"); Student st10("Arkadiy", "Ukupnik");
	Student st11("Valeriy", "Leontiev"); Student st12("Sergey", "Lazarev");
	Student st13("Boris", "Akunin"); Student st14("Elena", "Proklova");
	Student st15("Ingeborga", "Dapkunaite");

	Student* gr_p = new Student[size]{ st1,st2,st3,st4,st5,st6,st7,st8,st9,st10,st11,st12,st13,st14,st15 };

	do
	{
		system("cls");
		cout << "1 - First row" << endl;
		cout << "2 - Second row" << endl;
		cout << "3 - Third row" << endl;
		cout << "4 - Show the list" << endl;
		cout << "5 - Show enrolled students" << endl;
		cout << "0 - Exit" << endl;
		cout << "Enter: "; cin >> key; cout << endl;
		switch (key)
		{
		case 1:
		{
			for (int i = 0; i < 5; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::round_n(1);
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::round_n(2);
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tPress enter" << endl;
			_getch();
		}break;
		case 2:
		{
			Student::round_null();
			for (int i = 5; i < 10; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::round_n(1);
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::round_n(2);
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tPress enter" << endl;
			_getch();
		}break;
		case 3:
		{
			Student::round_null();
			for (int i = 10; i < 15; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::round_n(1);
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::round_n(2);
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tPress enter" << endl;
			_getch();
		}break;
		case 4:
		{
			int count = 0;
			Q.Clear();
			for (int i = 0; i < 15; i++)
			{
				Q.Add(gr_p[i]);
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7
					&& gr_p[i].Get_ball(2) >= 7)
				{
					count++;
				}

			}
			Q.Show1();
			cout << "\nEnrolled students:  " << count << endl;
			cout << "\n\t\tPress enter" << endl;
			_getch();
		}break;

		case 5:
		{
			int count = 0;
			Q.Clear();
			for (int i = 0; i < 15; i++)
			{

				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7
					&& gr_p[i].Get_ball(2) >= 7)
				{
					Q.Add(gr_p[i]);
					count++;
				}

			}
			Q.Show1();
			cout << "\nEnrolled students:  " << count << endl;
			cout << "\n\t\tPress enter" << endl;
			_getch();
		}break;

		case 0:
		{
			key_1 = 0;
		}break;

		default:
			break;
		}
	} while (key_1);

}

#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "struct.h"
#include "Header.h"

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));


	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "������� ����� �������: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			cout << "���������� ������� ������� ���������� � ������� �������� � ����������," << endl
				<< "������� ������� ������ 25 ���\n\n";
			int a = 5 + rand() % 10;
			hockey * team = NULL;
			team = (hockey*)malloc(a * sizeof(hockey));
			printf("���-�� ������� � ������� %d\n\n", a);

			int sumAge = 0;

			if (team == NULL)
			{
				printf("error\n");
				EXIT_FAILURE;
			}
			else
			{
				printf("  \t ��� \t\t ������� \t ���� \t\t �����\n");
				for (int i = 0; i < a; i++)
				{
					(team + i)->surname = (char*)malloc(12 * sizeof(char));
					generateSurname((team + i)->surname); 

					(team + i)->age = (int)malloc(12 * sizeof(int));
					(team + i)->age = 20 + rand() % 25;
					sumAge += (team + i)->age;

					(team + i)->countGame = (int)malloc(12 * sizeof(int));
					(team + i)->countGame = 5 + rand() % 20;

					(team + i)->countGoal = (int)malloc(12 * sizeof(int));
					(team + i)->countGoal = 10 + rand() % 40;

					if((team+i)->age<25)
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					
					printf("�%d\t %s \t %d  \t\t %d \t\t %d\n",
						i+1,(team + i)->surname, (team + i)->age, 
						(team + i)->countGame, (team + i)->countGoal);

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				}
				printf("\n������� ������� ���������� ����������: %d ��� \n", sumAge / a);
			}

		}break;

		case 2:
		{
			cout << "���������� ����� ��������� ���� �������, ���������� � ������� ����"<<endl
				<< "� ������� �������� �� ���� �������.\n\n";
			int a = 10 + rand() % 10;
			product * things = NULL;
			things = (product*)malloc(a * sizeof(product));
			printf("���-�� �������: %d\n\n", a);

			int sumOfprice = 0;

			if (things == NULL)
			{
				printf("error\n");
				EXIT_FAILURE;
			}
			else
			{
				printf("  \t ������������  \t ������������� \t\t ���\t���-��\t\t����\n");
				for (int i = 0; i < a; i++)
				{
					(things + i)->name = (char*)malloc(12 * sizeof(char));
					generateNameOfProduct((things + i)->name);

					(things + i)->PrName = (char*)malloc(12 * sizeof(char));
					generateNameOfPr((things + i)->PrName);

					(things + i)->year = (int)malloc(12 * sizeof(int));
					(things + i)->year = 2018 - rand() % 3;

					(things + i)->count = (int)malloc(12 * sizeof(int));
					(things + i)->count = 200 + rand() % 100;

					(things + i)->price = (int)malloc(12 * sizeof(int));
					(things + i)->price = 100 + rand() % 3000;

					if ((things + i)->year == 2018)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						sumOfprice += (things + i)->price;
					}
					printf("�%d\t %s \t\t %s \t %d  \t %d \t\t %d\n", 
						i+1, (things + i)->name, (things + i)->PrName, 
						(things + i)->year, (things + i)->count, (things + i)->price);

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				}
				printf("\n����� ��� ���� �������, ���������� � ���� ���� ����������: %d ��\n", sumOfprice);
			}

		}break;

		case 3:
		{
			cout << "���������� ������� ��������� ������� � ����� � ����������� ����������.\n\n";
			
			int a = 10 + rand() % 10;
			product * things = NULL;
			things = (product*)malloc(a * sizeof(product));
			printf("���-�� �������: %d\n\n", a);

			int sumOfprice = 0, min = 5000, index;

			if (things == NULL)
			{
				printf("error\n");
				EXIT_FAILURE;
			}
			else
			{
				printf("  \t ������������  \t ������������� \t\t ���\t���-��\t\t����\n");
				for (int i = 0; i < a; i++)
				{
					(things + i)->name = (char*)malloc(12 * sizeof(char));
					generateNameOfProduct((things + i)->name);

					(things + i)->PrName = (char*)malloc(12 * sizeof(char));
					generateNameOfPr((things + i)->PrName);

					(things + i)->year = (int)malloc(12 * sizeof(int));
					(things + i)->year = 2018 - rand() % 3;

					(things + i)->count = (int)malloc(12 * sizeof(int));
					(things + i)->count = 200 + rand() % 100;

					(things + i)->price = (int)malloc(12 * sizeof(int));
					(things + i)->price = 100 + rand() % 3000;
					
					sumOfprice += (things + i)->price;

					if ((things + i)->price < min)
					{
						min = (things + i)->price;
						index = i;
					}
					printf("�%d\t %s \t\t %s \t %d  \t %d \t\t %d\n",
						i + 1, (things + i)->name, (things + i)->PrName,
						(things + i)->year, (things + i)->count, (things + i)->price);

				}
				printf("\n������� ����� ������� ����������: %d ��\n", sumOfprice/a);
				printf("\n���������� ������ � ����������� �����\n");
				printf("�%d\t %s \t\t %s \t %d  \t %d \t\t %d\n",
					index +1, (things + index)->name, (things + index)->PrName,
					(things + index)->year, (things + index)->count, (things + index)->price);
			}

		}break;

		case 4:
		{
			cout << "���������� ������ �������� ��������� � ���������� �������� � ���.\n\n";
			int a = 5 + rand() % 10;
			employee * people = NULL;
			people = (employee*)malloc(a * sizeof(employee));
			printf("���-�� ������� � ������� %d\n\n", a);

			int min = 50, index;

			if (people == NULL)
			{
				printf("error\n");
				EXIT_FAILURE;
			}
			else
			{
				printf("  \t ��� \t\t�� \t��������� \t ��\t\t �����������\n");
				for (int i = 0; i < a; i++)
				{
					(people + i)->name = (char*)malloc(12 * sizeof(char));
					generateSurname((people + i)->name); 

					(people + i)->year = (int)malloc(12 * sizeof(int));
					(people + i)->year = 1975 + rand() % 20;

					(people + i)->position = (char*)malloc(12 * sizeof(char));
					generatePosition((people + i)->position);

					(people + i)->salary = (int)malloc(12 * sizeof(int));
					(people + i)->salary = 400 + rand() % 600;

					(people + i)->education = (char*)malloc(12 * sizeof(char));
					generateEducation((people + i)->education);

					if (2018 - (people + i)->year < min)
					{
						min = 2018 -(people + i)->year;
						index = i;
					}
					printf("�%d\t %s \t %d\t%s  \t %d$ \t\t %s\n",
						i + 1, (people + i)->name, (people + i)->year, (people + i)->position,
						(people + i)->salary, (people + i)->education);

				}
				printf("\n���������� � ������� ���������� ��������\n");
				printf("�%d\t %s \t %d\t%s  \t %d$ \t\t %s\n",
					index + 1, (people + index)->name, (people + index)->year, 
					(people + index)->position,(people + index)->salary, 
					(people + index)->education);
			}

		}break;

		case 5:
		{
			cout << "���������� ������� ���������, ������� ����� ���������� �� �95�, "<<endl
				<<"� ���������� �� ����������.\n\n";
			int a = 5 + rand() % 10;
			students * people = NULL;
			people = (students*)malloc(a * sizeof(students));
			printf("���-�� ��������� %d\n\n", a);

			int count95 = 0;

			if (people == NULL)
			{
				printf("error\n");
				EXIT_FAILURE;
			}
			else
			{
				printf("  \t ��� \t\t������ \t ��\t������\t����������\t�����������\n");
				for (int i = 0; i < a; i++)
				{
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

					(people + i)->name = (char*)malloc(12 * sizeof(char));
					generateSurname((people + i)->name);

					(people + i)->group = (int)malloc(12 * sizeof(int));
					(people + i)->group = 10 + rand() % 20;

					(people + i)->year = (int)malloc(12 * sizeof(int));
					(people + i)->year = 1995 + rand() % 5;

					(people + i)->physics = (int)malloc(12 * sizeof(int));
					(people + i)->physics = 60 + rand() % 40;

					(people + i)->math = (int)malloc(12 * sizeof(int));
					(people + i)->math = 60 + rand() % 40;

					(people + i)->informatics = (int)malloc(12 * sizeof(int));
					(people + i)->informatics = 60 + rand() % 40;

					if ((people + i)->math >= 95)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						count95++;
					}

					printf("#%d\t %s \t %d \t %d \t %d\t\t%d\t\t%d\n",
						i+1,(people + i)->name, (people + i)->group, (people + i)->year,
						(people + i)->physics, (people + i)->math, (people + i)->informatics);
				}
				printf("\n���-�� ���������, ������� ���������� �� 95 � ������: %d\n", count95);
			}
		}break;

		}

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}
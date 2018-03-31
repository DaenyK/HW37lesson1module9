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

void generateSurname(char *name)
{
	strcpy(name, "person #");
	int a = 1 + rand() % 25;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}

void generateNameOfProduct(char *name)
{
	strcpy(name, "product #");
	int a = 1 + rand() % 25;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}


void generateNameOfPr(char *name)
{
	strcpy(name, "TOO ");
	int a = 20 + rand() % 25;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}

void generatePosition(char *name)
{
	strcpy(name, "position ");
	int a = 20 + rand() % 25;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}

void generateEducation(char *name)
{
	strcpy(name, "university ");
	int a = 20 + rand() % 25;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<Windows.h>

using namespace std;

void Print(FILE* resume, const char name[])
{
	char text[256];
	if ((resume = fopen(name, "r")) == NULL)
	{
		perror("ERROR!");
	}
	else
		while (fgets(text, 256, resume) != NULL)
		{
			printf("%s", text);
		}
	fclose(resume);
}

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* fp;

	const char name[] = "resume.txt";
	char FIO[256];
	char BirthDay[256];
	char Phone[256];
	char City[256];
	char Position[256];
	char Exp[2560];
	char Education[256];
	char Skills[256];
	char Hobby[256];

	fp = fopen(name, "w");
	cout << "�.�.�. : ";
	gets_s(FIO);
	fprintf(fp, "%s\t", "�.�.�. : ");
	fprintf(fp, "%s\n\n", FIO);
	cout << "���� �������� : ";
	gets_s(BirthDay);
	fprintf(fp, "%s\t", "���� �������� : ");
	fprintf(fp, "%s\n\n", BirthDay);
	cout << "������� : ";
	gets_s(Phone);
	fprintf(fp, "%s\t", "������� : ");
	fprintf(fp, "%s\n\n", Phone);
	cout << "����� : ";
	gets_s(City);
	fprintf(fp, "%s\t", "����� : ");
	fprintf(fp, "%s\n\n", City);
	cout << "��������� : ";
	gets_s(Position);
	fprintf(fp, "%s\t", "��������� : ");
	fprintf(fp, "%s\n\n", Position);
	cout << "���� ������ : ";
	fprintf(fp, "%s\n", "���� ������ : ");
	do
	{
		gets_s(Exp);
		fprintf(fp, "%s\n", Exp);
	} while (Exp[0] != ' ');
	cout << "����������� : ";
	gets_s(Education);
	fprintf(fp, "%s\t", "����������� : ");
	fprintf(fp, "%s\n\n", Education);
	cout << "������ : ";
	gets_s(Skills);
	fprintf(fp, "%s\n", "������ : ");
	fprintf(fp, "%s\n\n", Skills);
	cout << "��������� : ";
	gets_s(Hobby);
	fprintf(fp, "%s\n", "��������� : ");
	fprintf(fp, "%s\n\n", Hobby);
	fclose(fp);
	system("cls");
	Print(fp, name);
	return 0;
}

/*������� ��������� ��� �������� ������ ������.
�� ������� � ������� ���� ������ � ������������ ����. 
������������� ������������ �������������������� ������. 
����� ���������������������� � ���� ������ � �������� 
��������������� � �������.*/
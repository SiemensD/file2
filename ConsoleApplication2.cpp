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
	cout << "Ф.И.О. : ";
	gets_s(FIO);
	fprintf(fp, "%s\t", "Ф.И.О. : ");
	fprintf(fp, "%s\n\n", FIO);
	cout << "Дата рождения : ";
	gets_s(BirthDay);
	fprintf(fp, "%s\t", "Дата рождения : ");
	fprintf(fp, "%s\n\n", BirthDay);
	cout << "Телефон : ";
	gets_s(Phone);
	fprintf(fp, "%s\t", "Телефон : ");
	fprintf(fp, "%s\n\n", Phone);
	cout << "Город : ";
	gets_s(City);
	fprintf(fp, "%s\t", "Город : ");
	fprintf(fp, "%s\n\n", City);
	cout << "Должность : ";
	gets_s(Position);
	fprintf(fp, "%s\t", "Должность : ");
	fprintf(fp, "%s\n\n", Position);
	cout << "Опыт работы : ";
	fprintf(fp, "%s\n", "Опыт работы : ");
	do
	{
		gets_s(Exp);
		fprintf(fp, "%s\n", Exp);
	} while (Exp[0] != ' ');
	cout << "Образование : ";
	gets_s(Education);
	fprintf(fp, "%s\t", "Образование : ");
	fprintf(fp, "%s\n\n", Education);
	cout << "Навыки : ";
	gets_s(Skills);
	fprintf(fp, "%s\n", "Навыки : ");
	fprintf(fp, "%s\n\n", Skills);
	cout << "Увлечения : ";
	gets_s(Hobby);
	fprintf(fp, "%s\n", "Увлечения : ");
	fprintf(fp, "%s\n\n", Hobby);
	fclose(fp);
	system("cls");
	Print(fp, name);
	return 0;
}

/*Создать программу для создания Вашего резюме.
Вы вносите в консоли свои данные и записываетев файл. 
Рекомендуется использовать стандартныекатегории резюме. 
Позже проиллюстрируйтеработу с этим файлом и выведите 
содержимоефайла в консоль.*/
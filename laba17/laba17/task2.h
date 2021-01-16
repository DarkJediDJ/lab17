#pragma once
#include <iostream>
#include "task1.h"
void task2() {
	const int size = 5;
	int mas[size];
	int y;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Art " << i + 1 << "\n1 - Picture\n2 - Sculpture\n3 - Jewelery\n";
		std::cin >> y;
		switch (y)
		{
		case 1:
		{
			std::cout << "matreial of pciture: ";
			std::cin >> picture->size.material[i];
			std::cout << "Enter surname of student: ";
			std::cin >> newPerson[i].stud.surname;
			std::cout << "Enter sex of student(1 - man,0-woman): ";
			std::cin >> newPerson[i].stud.sex;
			std::cout << "Enter average mark of student: ";
			std::cin >> newPerson[i].stud.average_mark;
			break;
		}
		case 2:
		{
			int x;
			std::cout << "Enter number of table number";
			std::cin >> newPerson[i].teah.Table_number;
			std::cout << "Enter surname";
			std::cin >> newPerson[i].teah.surname;
			std::cout << "Enter position of teacher(1 teacher,2 librarian,3 director,4 psychologist): ";
			std::cin >> x;
			std::cin >> x;
			switch (x)
			{
			case 1: {
				newPerson[i].teah.POV = teacher;
				break;
			}
			case 2: {
				newPerson[i].teah.POV = librarian;
				break;
			}
			case 3: {
				newPerson[i].teah.POV = director;
				break;
			}
			case 4: {
				newPerson[i].teah.POV = psychologist;
				break;
			}
			default:
				break;
			}
			break;
		}
		case 3:
		{
			int x;
			std::cout << "Enter number of table number";
			std::cin >> newPerson[i].list.Passport_number;
			std::cout << "Enter surname";
			std::cin >> newPerson[i].list.surname;
			std::cout << "Enter position of teacher(1 dantist,2 ingeener,3 sportsman,4 teacher): ";
			std::cin >> x;
			std::cin >> x;
			switch (x)
			{
			case 1: {
				newPerson[i].list.POV = dantist;
				break;
			}
			case 2: {
				newPerson[i].list.POV = ingeener;
			}
			case 3: {
				newPerson[i].list.POV = sportsman;
				break;
			}
			case 4: {
				newPerson[i].list.POV = teacher1;
				break;
			}
			default:
				break;
			}
			break;
		}
		}
	}
}
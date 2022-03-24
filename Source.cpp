// Персональный шаблон проекта C++
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	DB shopping = { "Shopping list" };


	string answer;
	do {
		cout << "Какую команду хотите выполнить?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit.\n";
		cout << "Введите команду: ";
		getline(cin, answer);
		if (answer == "Show")
			showDB(shopping);
		else
			if (answer == "Add")
				addNote(shopping);
			else
				if (answer == "Clear") {
					clearNotes(shopping);
					cout << "Записи стёрты";
				}
				else
					if (answer == "Exit")
						cout << "Завершение программы...\n";
					else
						cout << "Команда не обнаружена.\n";
		cout << endl;
	} while (answer != "Exit");

	return 0;
}
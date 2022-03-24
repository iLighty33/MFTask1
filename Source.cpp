// ������������ ������ ������� C++
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	DB shopping = { "Shopping list" };


	string answer;
	do {
		cout << "����� ������� ������ ���������?\n";
		cout << "Show;\n";
		cout << "Add;\n";
		cout << "Clear;\n";
		cout << "Exit.\n";
		cout << "������� �������: ";
		getline(cin, answer);
		if (answer == "Show")
			showDB(shopping);
		else
			if (answer == "Add")
				addNote(shopping);
			else
				if (answer == "Clear") {
					clearNotes(shopping);
					cout << "������ �����";
				}
				else
					if (answer == "Exit")
						cout << "���������� ���������...\n";
					else
						cout << "������� �� ����������.\n";
		cout << endl;
	} while (answer != "Exit");

	return 0;
}
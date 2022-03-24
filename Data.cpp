#include "data.h"
#include <iostream>
#include <string>

void addNote(DB &base) {
	std::string str;
	std::cout << "¬ведите новую запись:\n";
	getline(std::cin, str);
	base.notes += str + "\n";
	base.notesCount++;
}

void clearNotes(DB& base) {
	base.notes = "";
	base.notesCount = 0;
}

void showDB(DB& base) {
	std::cout << "Title: " << base.title << std::endl;
	std::cout << "Notes number: " << base.notesCount << std::endl;
	std::cout << "Notes:\n" << base.notes;
}

// Data.cpp
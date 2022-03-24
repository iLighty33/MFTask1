#pragma once
#include <string>
#include <iostream>

struct DB {
	std::string title;
	int notesCount = 0;
	std::string notes;

};

void addNote(DB &base);

void clearNotes(DB& base); // лучше всегда делать ссылку (&)

void showDB(DB& base);
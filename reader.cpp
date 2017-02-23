#include "reader.h"

tasks::Task read(ifstream& fin) {
	Task newTask;

	fin >> newTask.a;
	fin >> newTask.b;

	return newTask;
}

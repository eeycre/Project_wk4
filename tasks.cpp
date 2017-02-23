#include "tasks.h"

Task::Task(float _a, float _b){
	a=_a;
	b=_b;
}


Task& Task::operator=(const Task& T){
	a=T.a;
	b=T.b;
}


Task::~Task(){}
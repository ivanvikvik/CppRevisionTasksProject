#pragma once
#include "Tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {	
	cout << "Task 01" << (true ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	cout << "Task 02" << (true ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	cout << "Task 03" << (true ? RIGHT : WRONG) << endl;
}

void testingTask04() {	
	cout << "Task 04" << (true ? RIGHT : WRONG) << endl;
}
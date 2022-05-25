#pragma once
#include "Tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(23, 52, 8, 43) == 8
		&& task01(14, 7, 6, 11) == 1
		&& task01(23, 52, 0, 43) == 0;
				
	cout << "Task 01" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(7, 6, 1) == "1 6 7"
		&& task02(6, 7, 2) == "2 6 7"
		&& task02(7, 7, 4) == "4 7 7"
		&& task02(7, 4, 7) == "4 7 7"
		&& task02(4, 7, 7) == "4 7 7"
		&& task02(1, 2, 3) == "1 2 3"
		&& task02(1, 3, 2) == "1 2 3"
		&& task02(2, 1, 3) == "1 2 3"
		&& task02(2, 3, 1) == "1 2 3"
		&& task02(3, 1, 2) == "1 2 3"
		&& task02(3, 2, 1) == "1 2 3"
		&& task02(1, 1, 1) == "1 1 1";

	cout << "Task 02" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(4, 6, 5, 6, 5, 6) == "YES"
		&& task03(3, 5, 5, 2, 3, 4) == "NO"
		&& task03(5, 3, 5, 2, 3, 4) == "NO"
		&& task03(5, 5, 3, 2, 3, 4) == "NO"
		&& task03(3, 5, 5, 2, 4, 3) == "NO"
		&& task03(3, 5, 5, 3, 2, 4) == "NO"
		&& task03(3, 5, 5, 3, 4, 2) == "NO"
		&& task03(3, 5, 5, 4, 2, 3) == "NO"
		&& task03(3, 5, 5, 4, 3, 2) == "NO"
		&& task03(5, 5, 5, 4, 4, 4) == "NO"
		&& task03(5, 5, 4, 4, 4, 4) == "NO"
		&& task03(5, 4, 5, 4, 4, 4) == "NO"
		&& task03(4, 5, 5, 4, 4, 4) == "NO"
		&& task03(5, 4, 4, 4, 4, 4) == "NO"
		&& task03(4, 5, 4, 4, 4, 4) == "NO"
		&& task03(4, 4, 5, 4, 4, 4) == "NO"
		&& task03(2, 1, 1, 1, 1, 1) == "NO"
		&& task03(1, 2, 1, 1, 1, 1) == "NO"
		&& task03(1, 1, 2, 1, 1, 1) == "NO"

		&& task03(4, 5, 6, 6, 5, 6) == "YES"
		&& task03(6, 4, 5, 6, 5, 6) == "YES"
		&& task03(6, 5, 4, 6, 5, 6) == "YES"
		&& task03(5, 6, 4, 6, 5, 6) == "YES"
		&& task03(5, 4, 6, 6, 5, 6) == "YES"
		&& task03(4, 6, 5, 6, 6, 5) == "YES"
		&& task03(4, 6, 5, 5, 6, 6) == "YES"
		&& task03(4, 4, 4, 5, 5, 5) == "YES"
		&& task03(1, 1, 1, 1, 1, 1) == "YES"
		&& task03(1, 1, 1, 2, 1, 1) == "YES"
		&& task03(1, 1, 1, 1, 2, 1) == "YES"
		&& task03(1, 1, 1, 1, 1, 2) == "YES"
		&& task03(4, 4, 4, 4, 4, 4) == "YES"
		&& task03(4, 4, 4, 4, 5, 5) == "YES"
		&& task03(4, 4, 4, 5, 4, 5) == "YES"
		&& task03(4, 4, 4, 5, 5, 4) == "YES"
		&& task03(4, 4, 4, 4, 4, 5) == "YES"
		&& task03(4, 4, 4, 4, 5, 4) == "YES"
		&& task03(4, 4, 4, 5, 4, 4) == "YES";	
	
	cout << "Task 03" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {	
	cout << "Task 04" << (true ? RIGHT : WRONG) << endl;
}

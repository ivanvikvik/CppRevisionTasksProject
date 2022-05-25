#pragma once
#include "Tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(10, 20) == 2
		&& task01(3, 20) == 6
		&& task01(3, 1) == 0
		&& task01(3, 3) == 1
		&& task01(6, 20) == 3
		&& task01(7, 20) == 2
		&& task01(1, 20) == 20;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(10, 20) == 0
		&& task02(3, 20) == 2
		&& task02(3, 1) == 1
		&& task02(3, 3) == 0
		&& task02(6, 20) == 2
		&& task02(7, 20) == 6
		&& task02(1, 20) == 0;

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(456) == 5
		&& task03(1234567) == 6
		&& task03(3) == 0
		&& task03(111111) == 1
		&& task03(999999) == 9
		&& task03(90) == 9
		&& task03(1000000) == 0;

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {

	bool result = task04(345) == 12
		&& task04(100) == 1
		&& task04(101) == 2
		&& task04(111) == 3
		&& task04(987) == 24
		&& task04(900) == 9
		&& task04(999) == 27;

	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {

	bool result = task05(5) == 6
		&& task05(18) == 20
		&& task05(0) == 2
		&& task05(1) == 2
		&& task05(2) == 4
		&& task05(9000) == 9002
		&& task05(9999) == 10000;

	cout << "Task 05 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {

	bool result = task06(20, 21, 22) == 32
		&& task06(19, 15, 23) == 30
		&& task06(16, 18, 20) == 27
		&& task06(1, 1, 1) == 3
		&& task06(2, 2, 2) == 3
		&& task06(1000, 1000, 1000) == 1500
		&& task06(5, 6, 5) == 9;

	cout << "Task 06 " << (result ? RIGHT : WRONG) << endl;
}
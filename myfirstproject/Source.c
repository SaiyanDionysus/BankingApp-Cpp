/*
����������
����������� ������������ ������� ��������� �� C �������� ����������. ������ ���������� ��������� ������������
��������. � ����� ���������� �������� ����� � �������. ������ ���� ��������� ����������� �� ��������� ����������

===��������� �������������===
��� ������ ������ �� ������� � ������� ���� ������������ ������� printf(), �� ����� ������������ ��� �������, 
����� ��� ������ ����� ��� �������� � ��������� �� ��, 
���������� � ������ ����� � �������� ����� ���������� ������������ ���� stdio.h � ������� ��������� include.

��������� include �������� ���������� �������������. ����� ������ include ���� ��� ��� �������� �������������, �������� define

������ ��������� ������������� ����������� �� ����� ������. � � ������� �� ������� ���������� ����� ��,
������� ����������� ������ � ������� ; , ��������� ���������� ��������������� ��������� �������� ������� 
�� ����� ������.
����� ����, ��������� ������ ���������� �� ����� ������� #.

������� main

��������� ������ � ����� ��������� �� ����� �� �������� ������� main(). 
������ � ���� ������� ���������� ���������� ����������.
�� ��� main ����������� � ��� ���� �������� �� �� ������ ���������.

*/

//#include <stdio.h>
//
//int main() {
//	printf("hello, world");
//	return 0;
//}

//#include <stdio.h>
//
//void main() {
//	printf("gello");
//	return 0;
//}

//video course C//

//#include <stdio.h> //std = standart. io = input/output
//
//int main() {
//
//	printf("hello \n"); // \n - is for new line character
//	printf("its foo");
//	return 0; //0 is for successful execution, 1 for an error
//}

//#include <stdio.h>
//
//int main() {
//	printf("something \n written \n good \t awesome"); // \n - new line; \t - tab
//	return 0;
//}

//VARIABLES//

#include <stdio.h>

int main() {

	int x; // declaration
	x = 123; //initialization
	int y = 321; // declaration + initialization

	int age = 19; //integer
	float weight = 65.4; //floating point number
	char grade = 'C'; //single character
	char name[] = "Bro"; // array of characters

	printf("Hello, %s\n", name); // %s - string
	printf("You are %d y.o\n", age); //%d - int
	printf("Your average grade is %c\n", grade); // %c - character (char)
	printf("Your weight is %f", weight); // %f - float


	return 0; // last video 27 mins (bro code) // https://www.tutorialspoint.com/cprogramming/c_pointers.htm
}
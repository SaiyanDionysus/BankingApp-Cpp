/*
инструкции
пройстейший строительный элемент программы на C является инструкция. каждая инструкция выполняет определенное
действие. в конце инструкций ставится точка с запятой. данный знак указывает компилятору на окончание инструкции

===директивы препроцессора===
Для вывода данных на консоль в примере выше используется функция printf(), но чтобы использовать эту функцию, 
чтобы она вообще стала нам доступна в программе на Си, 
необходимо в начале файла с исходным кодом подключать заголовочный файл stdio.h с помощью директивы include.

директива include является директивой препроцессора. кроме данной include есть еще ряд директив препроцессора, например define

Каждая директива препроцессора размещается на одной строке. И в отличие от обычных инструкций языка Си,
которые завершаются точкой с запятой ; , признаком завершения препроцессорной директивы является перевод 
на новую строку.
Кроме того, директива должна начинаться со знака решетки #.

функция main

Стартовой точкой в любую программу на языке Си является функция main(). 
Именно с этой функции начинается выполнение приложения.
Ее имя main фиксировано и для всех программ на Си всегда одинаково.

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
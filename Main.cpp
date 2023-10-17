#include <iostream>
#include "date.h"
#include "Student.h"
#include "Semester.h"
#include <vector>

using namespace std;

int main() {

	system("chcp 1251>0");
	//test semester
	//Semester s1(1);
	//cout << s1.toString() << endl;

	//s1.setGrade("Въведение в програмирането", 4.5);
	//s1.setGrade("Висша математика I", 5.0);

//	std::cout << "Updated subjects and grades for semester 1:\n" << s1.toString() << std::endl;


	Student st1("Martin", "Zlatanov", "Stoyanov", "KST471", {14,02,2001}, "Bachelor", "Bourgas", "KST", 4);
	//st1.setGrade("Физическа подготовка и спорт", 3);

	//cout << st1.toString();
	//st1.isPassed();
	//st1.avgGrade();
	//st1.examsLeft(); 
	//st1.setSem(st1.getSemester() + 1);

	Student st2;
	//st1.setGrade("Специализираща практика", 5);
	//st1.setGrade("Синтез и анализ на алгоритми", 5);
	//st1.setGrade("Сигнали и системи", 5);
	//st1.setGrade("Бази данни", 6);
	//st1.setGrade("Английски език", 3);
	//st1.setGrade("Анализ и синтез на логически схеми", 3);
	//cout << st1.toString();
	//st1.addSemester();
	//cout << st1.toString();
	st2.setGrade("Физическа подготовка и спорт", 3);
	st2.setGrade("Техническа механика", 5);
	cout << st2.toString();
	st2.isPassed();
	st2.avgGrade();
	st2.examsLeft();
	st2.addSemester();

	//std::vector<Students> students; 

	

	
}
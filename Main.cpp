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

	//s1.setGrade("��������� � ��������������", 4.5);
	//s1.setGrade("����� ���������� I", 5.0);

//	std::cout << "Updated subjects and grades for semester 1:\n" << s1.toString() << std::endl;


	Student st1("Martin", "Zlatanov", "Stoyanov", "KST471", {14,02,2001}, "Bachelor", "Bourgas", "KST", 4);
	//st1.setGrade("��������� ���������� � �����", 3);

	//cout << st1.toString();
	//st1.isPassed();
	//st1.avgGrade();
	//st1.examsLeft(); 
	//st1.setSem(st1.getSemester() + 1);

	Student st2;
	//st1.setGrade("�������������� ��������", 5);
	//st1.setGrade("������ � ������ �� ���������", 5);
	//st1.setGrade("������� � �������", 5);
	//st1.setGrade("���� �����", 6);
	//st1.setGrade("��������� ����", 3);
	//st1.setGrade("������ � ������ �� ��������� �����", 3);
	//cout << st1.toString();
	//st1.addSemester();
	//cout << st1.toString();
	st2.setGrade("��������� ���������� � �����", 3);
	st2.setGrade("���������� ��������", 5);
	cout << st2.toString();
	st2.isPassed();
	st2.avgGrade();
	st2.examsLeft();
	st2.addSemester();

	//std::vector<Students> students; 

	

	
}
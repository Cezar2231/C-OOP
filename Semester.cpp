#include "Semester.h"
#include "Student.h"
#include <iostream>

Semester::Semester() {
	this->semester = 1;
	for (const std::string& subject : Subjects) {
		Grades[subject] = 0.0;
	}
}

Semester::Semester(int _semester) : semester(_semester){
		switch (semester) {
		case 1:
			Subjects = {
					"��������� � ��������������",
					"����� ���������� I",
					"������ �� ����������� ����������� I",
					"��������� ����",
					"������" };

			break;
		case 2:
			Subjects = {
					"��������� ���������� � �����",
					"���������� ��������",
					"������ �� ����������� ����������� II",
					"��� I",
					"��������� � �������������",
					"����� ���������� II",
					"��������� ����" };
			break;
		case 3:
			Subjects = {
				"���������������� ��������",
				"��� II",
				"�������������� � ������������ ����������",
				"��������� ���������",
				"��������� ����" };
			break;
		case 4:
			Subjects = {
				"�������������� ��������",
				"������ � ������ �� ���������",
				"������� � �������",
				"���� �����",
				"��������� ����",
				"������ � ������ �� ��������� �����" };
			break;
		case 5:
			Subjects = {
				"������� ������������",
				"��� ������",
				"���������� �����",
				"���������� �����������",
				"���������� �������",
				"���� �� �����" };
			break;
		case 6:
			Subjects = {
				"������������� �� �������������",
				"���������� �����",
				"��������������� �������",
				"����������� �������",
				"������������ �� ��� ����������",
				"��������" };
			break;
		default:
			std::cout << "Invalid semester!";

		}

		for (const std::string& subject : Subjects) {
			Grades[subject] = 0.0;
		}
}

int Semester::getSem() const {
	return semester;
}

void Semester::setSem(int newSem){
	semester = newSem;
}


std::vector<std::string> Semester::getSubjects() const {
	return Subjects;
}

void Semester::setSubject(int index, std::string value) {
	if (index >= 0 && index < Subjects.size()) {			
		Subjects[index] = value;
	}
	else {
		std::cout << "There is no Subject with index " << index << std::endl;
	}
}

void Semester::addSubject(std::string nSubject) {
	Subjects.push_back(nSubject);
	Grades[nSubject] = 0.0;
}

void Semester::removeSubject(int index) {
	if (index >= 0 && index < Subjects.size()) {
		Subjects.erase(Subjects.begin() + index);
	}
	else {
		std::cout << "There is no Subject with index " << index << std::endl;
	}
}

double Semester::getGrade(const std::string& subject) const {
	auto it = Grades.find(subject);
	if (it != Grades.end()) {
		return it->second;
	}
	return 0.0;
}

void Semester::setGrade(const std::string& subject, double grade) {
	auto it = Grades.find(subject);
	if (it != Grades.end()) {
		it->second = grade;
	}
	else {
		std::cout << "Subject " << subject << " not found." << std::endl;
	}
}


std::string Semester::toString() const {
	std::string res = "Subjects and grades for this semester are:\n";
	for (size_t i = 0; i < Subjects.size(); ++i) {
		res += Subjects[i] + " - Grade: " + std::to_string(Grades.at(Subjects[i])) + "\n";
	}
	return res + "\n";
}
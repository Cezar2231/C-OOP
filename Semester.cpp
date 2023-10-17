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
					"Въведение в програмирането",
					"Висша математика I",
					"Основи на инженерното проектиране I",
					"Английски език",
					"Физика" };

			break;
		case 2:
			Subjects = {
					"Физическа подготовка и спорт",
					"Техническа механика",
					"Основи на инженерното проектиране II",
					"ООП I",
					"Въведение в специалността",
					"Висша математика II",
					"Английски език" };
			break;
		case 3:
			Subjects = {
				"Полупроводникови елементи",
				"ООП II",
				"Електротехника и електрически измервания",
				"Сиксретни структури",
				"Английски език" };
			break;
		case 4:
			Subjects = {
				"Специализираща практика",
				"Синтез и анализ на алгоритми",
				"Сигнали и системи",
				"Бази данни",
				"Английски език",
				"Анализ и синтез на логически схеми" };
			break;
		case 5:
			Subjects = {
				"Цифрова схемотехника",
				"Уеб дизайн",
				"Програмини езици",
				"Компютърна архитектура",
				"Компютърна графика",
				"Бази от данни" };
			break;
		case 6:
			Subjects = {
				"Автоматизация на проектирането",
				"Компютърни мрежи",
				"Микропроцесорна техника",
				"Операционни системи",
				"Програмиране на уеб приложения",
				"Практика" };
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
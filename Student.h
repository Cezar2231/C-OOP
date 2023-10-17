#pragma once
#include <string>
#include <iostream>
#include "Semester.h"
#include "date.h"

class Student :public Semester {
private:
	std::string firstName;
	std::string middleName;
	std::string lastName;
	std::string facNumber;
	date birthDate;
	std::string city;
	std::string degree;
	Semester sem;
public:
	std::string specialty;
	

public:
	Student();
	Student(std::string _firstName, std::string _middleName, std::string _lastName, std::string _facNumber, date _birthDate, 
			std::string _degree, std::string _city, std::string _specialty, Semester _sem);

	//getters
	std::string getFirstName() const;
	std::string getMiddleName() const;
	std::string getLastName() const;
	std::string getFacNumber() const;
	date getDate() const;
	std::string getCity() const;
	std::string getSpecialty() const;
	std::string getDegree() const;
	int getSemester() const;

	//setters
	void setFirstName(std::string newName);
	void setMiddleName(std::string newMiddleName);
	void setLastName(std::string newLastName);
	void setFacNumber(std::string newFacNumber);
	void setDate(date newDate);
	void setSem(Semester newSem);
	void setCity(std::string newCity);
	void setSpecialty(std::string newSpecialty);
	void setDegree(std::string newDegree);

	std::string toString() const;

	
	double getGrade(const std::string& subject) const;
	void setGrade(const std::string& subject, double grade);

	void isPassed() const;

	void avgGrade() const;

	void examsLeft() const;

	void addSemester();

	




};


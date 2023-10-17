#include "Student.h"

Student::Student(){
	this->firstName = "Stoil";
	this->middleName = "Stanimirov";
	this->lastName = "Georgiev";
	this->facNumber = "KST483";
	this->birthDate = { 8,8,2001 };
	this->degree = "Bachelor";
	this->city = "Bourgas";
	this->specialty = "KST";
	this->sem = 2;
}

Student::Student(std::string _firstName, std::string _middleName,std::string _lastName, std::string _facNumber, date _birthDate,
					std::string _degree, std::string _city, std::string _specialty, Semester _sem):
					firstName(_firstName), middleName(_middleName),lastName(_lastName), facNumber(_facNumber),
					birthDate(_birthDate), degree(_degree), city(_city), specialty(_specialty), sem(_sem) {
	this->firstName = _firstName;
	this->middleName = _middleName;
	this->lastName = _lastName;
	this->facNumber = _facNumber;
	this->birthDate = _birthDate;
	this->degree = _degree;
	this->city = _city;
	this->specialty = _specialty;
	this->sem = _sem;

}

std::string Student::getFirstName() const{
	return firstName;
}

std::string Student::getMiddleName() const{
	return middleName;
}

std::string Student::getLastName() const{
	return lastName;
}

std::string Student::getFacNumber() const{
	return facNumber;
}

date Student::getDate() const{
	return birthDate;
}

int Student::getSemester() const {
	return sem.getSem();
}

std::string Student::getCity() const{
	return city;
}

std::string Student::getSpecialty() const{
	return specialty;
}

std::string Student::getDegree() const{
	return degree;
}

void Student::setFirstName(std::string newName){
	firstName = newName;
}

void Student::setMiddleName(std::string newMiddleName){
	middleName = newMiddleName;
}

void Student::setLastName(std::string newLastName){
	lastName = newLastName;
}

void Student::setFacNumber(std::string newFacNumber){
	facNumber = newFacNumber;
}

void Student::setDate(date newDate){
	birthDate = newDate;
}

void Student::setSem(Semester newSem){
	sem = newSem;
}

void Student::setCity(std::string newCity){
	city = newCity;
}

void Student::setSpecialty(std::string newSpecialty){
	specialty = newSpecialty;
}

void Student::setDegree(std::string newDegree){
	degree = newDegree;
}

std::string Student::toString() const {
	std::string res = "First name: " + firstName + "\nMiddle name: " + middleName + "\nLast name: " + lastName +
		"\nFaculty number: " + facNumber + "\nBirth date: " + birthDate.toShortString() + "\nDegree: " + degree +
		"\nFrom: " + city + "\nSpecialty: " + specialty + "\n" + "Semester: " + std::to_string(sem.getSem()) + "\n\n";;
	return res + sem.toString();

}

double Student::getGrade(const std::string& subject) const {
	return sem.getGrade(subject);
}

void Student::setGrade(const std::string& subject, double grade) {
	sem.setGrade(subject, grade);
}

void Student::isPassed() const {
	bool allPassed = true; 

	for (const auto& subject : sem.getSubjects()) {
		double grade = getGrade(subject);
		if (grade <= 2.0 || grade > 6.0) {
			allPassed = false;
			break; // Break the loop early if a subject is not passed
		} 
	}

	if (allPassed) {
		std::cout << "This studdent passed this semester!" << std::endl;
	}
	else {
		std::cout << "This student didn't pass this semester." << std::endl;
	}
}

void Student::avgGrade() const {
	double sum = 0.0;
	int count = 0;
	int unattended = 0;

	for (const auto& subject : sem.getSubjects()) {
		double grade = getGrade(subject);
		if (grade > 0) {
			sum += grade;
			count++;
		}
	}
	if (count > 0) {
		std::cout << "Average grade: " << sum / count << std::endl;
	}
	else {
		std::cout << "No grades yet!" << std::endl;
	}
}

void Student::examsLeft() const {
	int unattended = 0;

	for (const auto& subject : sem.getSubjects()) {
		double grade = getGrade(subject);
		if (grade == 0.0) {
			unattended++;
		}
	}
	if (unattended > 0) {
		std::cout << "Unattended exams: " << unattended << std::endl;
	}
	else {
		std::cout << "This student does not have unattended exams!" << std::endl;
	}
}

void Student::addSemester(){
	bool allPassed = true;
	int semester = sem.getSem();
	for (const auto& subject : sem.getSubjects()) {
		double grade = getGrade(subject);
		if (grade <= 2.0 || grade > 6.0) {
			allPassed = false;
			break; // Break the loop early if a subject is not passed
		}
	}
	if (allPassed == true) {
		semester++;
		std::cout << "Started new semester: " + std::to_string(semester) << std::endl;
		sem.setSem(semester);
	}
	else{
		std::cout << "Stays the same semester: " + std::to_string(semester) << std::endl;
	}
}

#pragma once
#include <string>
#include <vector>
#include <map>

class Semester{
private:
    int semester;
    std::vector<std::string> Subjects;
    std::map<std::string, double> Grades;
public:
    Semester();
    Semester(int _semester);

    int getSem() const;
    void setSem(int newSem);

    std::vector<std::string> getSubjects() const;
    void setSubject(int index, std::string value);

    void addSubject(std::string nSubject);
    void removeSubject(int index);

    double getGrade(const std::string& subject) const;
    void setGrade(const std::string& subject, double grade);

    std::string toString() const;
};

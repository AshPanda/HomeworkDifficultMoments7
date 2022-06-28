/*
1. Установить библиотеку protobuf.
2. С помощью компилятора protobuf в отдельном пространстве имен сгенерировать классы
a. FullName с полями имя, фамилия, отчество (отчество опционально).
b. Student с полями полное имя, массив оценок, средний балл.
c. StudentsGroup с полем массив студентов.
3. Создать класс StudentsGroup, который реализует интерфейсы:
class IRepository {
virtual void Open() = 0; // бинарная десериализация в файл
virtual void Save() = 0; // бинарная сериализация в файл
};
class IMethods {
virtual double GetAverageScore(const FullName& name) = 0;
virtual string GetAllInfo(const FullName& name) = 0;
virtual string GetAllInfo() = 0;
};
*/

#include <iostream>
#include <numeric>
#include <fstream>
#include <vector>
#include <optional>


//Task 1 - conan protobuf установлен, но при попытке запуска protobuf возникает ошибка
//Task #2
class FullName
{
	protected:
		std::string a;
		std::string b;
		std::optional<std::string> c;
public:
	FullName(std::string Name, std::string Surname, std::string Patronymic) : a(Name), b(Surname), c(Patronymic) {	}
	std::string getName() const { return a; }
	std::string getSurname() const { return b; }
	std::optional<std::string> getPatronymic() const{ return c; }

	void info() {
		printf("%s | %s | %s\n", getName().c_str(), getSurname().c_str(), getPatronymic());
	}
};
class Student
{
protected:
	std::string a;
	std::vector<int> grade;
	std::vector<int> averageGrade;
public:
	Student(std::string Name, std::vector<int> Grade, std::vector<int> AverageGrade) : a(Name), grade(Grade), averageGrade(averageGrade) {	}
};


int main()
{
	FullName s0("Kevin", "Malkin", " ");
	s0.info();

}



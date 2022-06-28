﻿/*
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

int main()
{
    std::cout << "Hello World!\n";
}



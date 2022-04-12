#include "Integer.h"
#include <iostream>

using namespace std;
Integer::Integer()
{
    Data = new int;
    *Data = 0;
}
Integer::Integer(int Value)
{
    Data = new int;
    *Data = Value;
}
Integer::Integer(const Integer& init)
{
    Data = new int;
    *Data = *(init.Data);
}
Integer::~Integer()
{
    delete Data;
    Data = nullptr;
}
Integer& Integer::operator++()
{
    *(this->Data) += 1;
    return *this;
}
Integer& Integer::operator--()
{
    int value;
	cout << "Введите число, на которое вы хотите уменьшить целое число: ";
	cin >> value;
    *(this->Data) -= value;
    return *this;
}
Integer& operator++(Integer& obj, int)
{
    static Integer tmp(obj);
    tmp.setData(obj.getData() + 2);
    obj.setData(tmp.getData());
    return tmp;
}
Integer& operator--(Integer& obj, int)
{
    static Integer tmp(obj);
    tmp.setData(obj.getData() - 2);
    obj.setData(tmp.getData());
    return tmp;
}
void Integer::print()
{
    std::cout << *Data << std::endl;
}

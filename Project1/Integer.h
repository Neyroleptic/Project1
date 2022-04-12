#pragma once
class Integer
{
    int* Data;      //������������� ��������
public:
    Integer();      //����������� �� ���������
    Integer(int Value);     //����������� � ����������
    explicit Integer(const Integer& init);      //����������� �����������
    ~Integer();     //����������
    int getData() { return *Data; }        //����� ��������� ��������
    void setData(int Value = 0) { *Data = Value; }     //����� ��������� ��������
    friend Integer& operator++(Integer& obj, int);     //����������� �����, ������������� �������, ����������� �� 2
    friend Integer& operator--(Integer& obj, int);     //����������� �����, ������������� �������, ��������� �� 2
    Integer& operator++();//���������� �����, ����������� �� 1
    Integer& operator--();//���������� �����, ��������� �� 1
    void print();//����� �� �����
};

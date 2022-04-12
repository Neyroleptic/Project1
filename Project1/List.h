#pragma once

typedef struct Element
{
	int data;
	Element* next;
	Element* prev;
} Element; //элемент стека

//Element* top; //вершина стека 

class List
{
private:
	Element* right = nullptr;
	Element* left = nullptr; //указатель на начальный элемент стека - инициализированный элемент
	int size = 0; //размер стека
public:
	//конструкторы
	List(); //конструктор без параметров
	explicit List(int size_st); //явный конструктор с параметрами (задаем размер стека)
	~List(); //деструктор
	List(const List& List_copy); //конструктор копирования

	//функции стека
	void push(int value); //добавление элемента в стек
	void del(int num); //извлечение вершины
	void print(); //вывод стека на экран

	//геттеры и сеттеры
	Element* get_right(); //взять элемент стека
	Element* get_left();
	void set_size(int& value); //поместить значение в стек
	int get_size() const; //взять размер стека

	//перегруженные операторы
	friend void operator< (int value, const List& list);
	friend void operator> (int value, const List& list);
	friend void operator== (int value, const List& list);
	friend void operator!= (int value, const List& list);
	friend void operator<= (int value, const List& list);
	friend void operator>= (int value, const List& list);
	List* operator () (int l, int r);
};

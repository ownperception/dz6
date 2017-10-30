#pragma once
#ifndef CLASSESS
#define CLASSESS

#include<string>
#include<iostream>
#include"strm_func.h"

class Item {
public:
	Item(int invNumber = 0,bool taken = 0);
	Item(const Item& i);
	const Item& operator =(const Item& i);
	bool isAvailable();
	int GetinvNumber();
	void Take();
	void Return();
	virtual void Show();
private:
	int invNumber;
	bool taken;
};


class Book :public Item
{
public:
	Book(std::string author = "None", std::string title = "None", std::string publisher = "None", int year = 0);
	Book(const Book& b);
	const Book& operator=(const Book& b);
	std::string Author();
	std::string Title();
	std::string Publisher();
	int YearOfPublishing();
	void Show();
private:
	std::string author;
	std::string title;
	std::string publisher;
	int year;
};

class Magazine :public Item {
public:
	Magazine(std::string title = "None", int number = 0, int volume = 0, int year = 0);
	Magazine(const Magazine& m);
	const Magazine& operator =(const Magazine& m);
	std::string Title();
	int Number();
	int Volume();
	int Year();
	void Show();
private:
	std::string title;
	int number;
	int volume;
	int year;
};

Book initBook();
Magazine initMagazine();

#endif // !CLASSES

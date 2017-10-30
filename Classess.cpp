#include "Classess.h"
using namespace std;


Item::Item(int invNumber, bool taken):invNumber(invNumber),taken(taken)
{
}

Item::Item(const Item & i):invNumber(i.invNumber),taken(i.taken)
{
}

const Item & Item::operator=(const Item & i)
{
	this->invNumber = i.invNumber;
	this->taken = i.taken;
	return *this;
}

bool Item::isAvailable()
{
	return !this->taken;
}

int Item::GetinvNumber()
{
	return this->invNumber;
}

void Item::Take()
{
	this->taken = 1;
}

void Item::Return()
{
	this->taken = 0;
}

void Item::Show()
{
}



Book::Book(string author, string title, string publisher, int year) : author(author), title(title), publisher(publisher), year(year)
{
}

Book::Book(const Book & b) : author (b.author), title(b.title), publisher (b.publisher),year(b.year)
{
}

const Book & Book::operator=(const Book & b)
{
	this->author = b.author;
	this->title = b.title;
	this->publisher = b.publisher;
	this->year = b.year;
	return *this;
}

std::string Book::Author()
{
	return this->author;
}

std::string Book::Title()
{
	return this->title;
}

std::string Book::Publisher()
{
	return this->publisher;
}

int Book::YearOfPublishing()
{
	return this->year;
}

void Book::Show()
{
	cout << "Book: " << this->title << endl
		<< "Author: " << this->author << endl
		<< "Publisher: " << this->publisher << endl
		<< "Year: " << this->year << endl;
}

Book initBook() {
	string title;
	string author;
	string publisher;
	int year = 0;

	cout << "Enter Title: ";
	getline(cin, title);

	cout << "Enter Author: ";
	getline(cin, author);

	cout << "Enter Publisher: ";
	getline(cin, publisher);

	year = read_int("Enter Year: ");

	return Book(author, title, publisher, year);
}


Magazine::Magazine(std::string title, int number, int volume, int year):title(title),number(number),volume(volume),year(year)
{
}

Magazine::Magazine(const Magazine & m) : title(m.title), number(m.number), volume(m.volume), year(m.year)
{
}

const Magazine & Magazine::operator=(const Magazine & m)
{
	this->title = m.title;
	this->number = m.number;
	this->volume = m.volume;
	this->year = m.year;
	return *this;
}

std::string Magazine::Title()
{
	return this->title;
}

int Magazine::Number()
{
	return this->number;
}

int Magazine::Volume()
{
	return this->volume;
}

int Magazine::Year()
{
	return this->year;
}

void Magazine::Show()
{
	cout << "Magazine: " << this->title << endl
		<< "Number: " << this->number << endl
		<< "Volume: " << this->volume << endl
		<< "Year: " << this->year << endl;
}

Magazine initMagazine() {
	string title;
	int number = 0;
	int volume = 0;
	int year = 0;

	cout << "Enter Title: ";
	clr_strm(cin);
	getline(cin,title);

	number = read_int("Enter Number: ");

	volume = read_int("Enter Volume: ");

	year = read_int("Enter Year: ");
	
	return Magazine(title, number, volume, year);
}
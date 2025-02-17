#define _CRT_SECURE_NO_WARNINGS
#include<fstream>
#include<string>
#include "Client.h"

int Client::counter = 1;

Client::Client() {
	this->firstName = nullptr;
	this->lastName = nullptr;
	this->email = "";
	this->password = "";
	this->phoneNumber = "";
}

Client::Client(char* firstName, char* lastName, string email, string password, string phoneNumber) {
	if (firstName != nullptr) {
		this->firstName = new char[strlen(firstName) + 1];
		strcpy(this->firstName, firstName);
	}
	else
		throw invalid_argument("Invalid first name!");
	if (lastName != nullptr) {
		this->lastName = new char[strlen(lastName) + 1];
		strcpy(this->lastName, lastName);
	}
	else
		throw invalid_argument("Invalid last name!");
	this->email = email;
	this->password = password;
	this->phoneNumber = phoneNumber;
}

Client::~Client() {
	if (this->firstName != nullptr) {
		delete[] this->firstName;
	}
	if (this->lastName != nullptr) {
		delete[]this->lastName;
	}
	counter--;
}

Client::Client(const Client& c) {
	if (c.firstName != nullptr) {
		this->firstName = new char[strlen(c.firstName) + 1];
		strcpy(this->firstName, c.firstName);
	}
	else
		throw invalid_argument("Invalid first name!");
	if (c.lastName != nullptr) {
		this->lastName = new char[strlen(c.lastName) + 1];
		strcpy(this->lastName, c.lastName);
	}
	else
		throw invalid_argument("Invalid last name!");
	this->email = c.email;
	this->password = c.password;
	this->phoneNumber = c.phoneNumber;
}

Client& Client::operator=(const Client& c) {
	if (this != &c) {
		if (this->firstName != nullptr)
			delete[]this->firstName;
		if (c.firstName != nullptr) {
			this->firstName = new char[strlen(c.firstName) + 1];
			strcpy(this->firstName, c.firstName);
		}
		else
			throw invalid_argument("Invalid first name!");
		if (this->lastName != nullptr)
			delete[]this->lastName;
		if (c.lastName != nullptr) {
			this->lastName = new char[strlen(c.lastName) + 1];
			strcpy(this->lastName, c.lastName);
		}
		else
			throw invalid_argument("Invalid last name!");
		this->email = c.email;
		this->password = c.password;
		this->phoneNumber = c.phoneNumber;
	}
	return*this;
}

istream& operator>>(istream& is, Client& c) {
	cout << "First name:" << endl;
	char* auxFirstName = new char[25];
	is >> auxFirstName;
	if (auxFirstName != nullptr) {
		c.firstName = new char[strlen(auxFirstName) + 1];
		strcpy(c.firstName, auxFirstName);
	}
	cout << "Last name:" << endl;
	char* auxLastName = new char[25];
	is >> auxLastName;
	if (auxLastName != nullptr) {
		c.lastName = new char[strlen(auxLastName) + 1];
		strcpy(c.lastName, auxLastName);
	}
	cout << "Email:" << endl;
	is >> c.email;
	cout << "Password:" << endl;
	is >> c.password;
	cout << "Phone number:" << endl;
	is >> c.phoneNumber;
	return is;
}

ofstream& operator<<(ofstream& ofs, const Client& c) {
	ofs << "Client id:" << c.clientId << endl;
	ofs << "First name:" << c.firstName << endl;
	ofs << "Last name:" << c.lastName << endl;
	ofs << "Email:" << c.email << endl;
	ofs << "Password:" << c.password << endl;
	ofs << "Phone number:" << c.phoneNumber << endl;
	return ofs;
}

void Client::displayClient() {
	cout << "Client id:" << this->getClientId() << endl;
	cout << "First name:" << this->getFirstName() << endl;
	cout << "Last name:" << this->getLastName() << endl;
	cout << "Email:" << this->getEmail() << endl;
	cout << "Password:" << this->getPassword() << endl;
	cout << "Phone number:" << this->getPhoneNumber() << endl;
}
#pragma once
#include<iostream>

using namespace std;

class Client
{
private:
	const int clientId = counter++;
	char* firstName;
	char* lastName;
	string email;
	string password;
	string phoneNumber;
	static int counter;
public:
	Client();
	Client(char* firstName, char* lastName, string email, string password, string counter);
	Client(const Client& c);
	Client& operator=(const Client& c);
	~Client();
	friend istream& operator>>(istream& is, Client& c);
	friend ofstream& operator<<(ofstream& ofs, const Client& c);
	int getClientId() { return this->clientId; }
	char* getFirstName() { return this->firstName; }
	char* getLastName() { return this->lastName; }
	string getEmail() { return this->email; }
	string getPassword() { return this->password; }
	string getPhoneNumber() { return this->phoneNumber; }
	void displayClient();
};


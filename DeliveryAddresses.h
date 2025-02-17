#pragma once
#include"Client.h"
#include<vector>

class DeliveryAddresses
{
private:
	vector<pair<Client*, string>> deliveryAddress;
public:
	DeliveryAddresses() { ; }
	DeliveryAddresses(vector<pair<Client*, string>> deliveryAddress);
	void displayDelivery();
};


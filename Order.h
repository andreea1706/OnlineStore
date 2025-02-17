#pragma once
#include"DeliveryAddresses.h"
#include"ShoppingCart.h"

class Order
{
private:
	DeliveryAddresses adress;
	ShoppingCart cart;
public:
	Order(DeliveryAddresses adress, ShoppingCart cart);
	void displayOrder();
};


#include "Order.h"

Order::Order(DeliveryAddresses adress, ShoppingCart cart) {
	this->adress = adress;
	this->cart = cart;
}

void Order::displayOrder() {
	adress.displayDelivery();
	cart.displayCart();
	cout << "Total comanda:" << cart.total() << endl;
}
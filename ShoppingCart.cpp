#include "ShoppingCart.h"

void ShoppingCart::addCartItems(Product* product, int quantity, Store& store) {
	if (store.reduceStock(product, quantity)) {
		cartItems.push_back(make_pair(product, quantity));
	}
}

void ShoppingCart::deleteCartItems() {
	for (auto i : cartItems)
		cartItems.pop_back();
}

void ShoppingCart::displayCart() {
	for (auto i : cartItems) {
		i.first->displayProduct();
		cout << i.second << endl;
		cout << endl;
	}

}

float ShoppingCart::total() {
	float sum = 0;
	for (auto i : cartItems) {
		sum += i.first->getPrice() * i.second;
	}
	return sum;
}

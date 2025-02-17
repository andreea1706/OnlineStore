#pragma once
#include"VirtualShoppingCart.h"
#include"Product.h"
#include"Store.h"
#include<list>

class ShoppingCart :public VirtualShoppingCart
{
private:
	list<pair<Product*, int>> cartItems;
public:
	void addCartItems(Product* product, int quantity, Store& store);
	void deleteCartItems();
	void displayCart();
	float total();
};


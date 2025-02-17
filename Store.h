#pragma once
#include"Product.h"
#include<list>

class Store
{
private:
	list<pair<Product*, int>> products;
public:
	Store(list<pair<Product*, int>> products);
	void addProduct(Product* product, int stock);
	void displayStore();
	int getStock(Product* product);
	bool reduceStock(Product* product, int quantity);
};


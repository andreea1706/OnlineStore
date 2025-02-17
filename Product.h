#pragma once
#include<iostream>

using namespace std;

enum Category { Coats, Cardigans, Dresses, Jeans, Trousers, Shirts, T_shirts, Shoes, Bags };

class Product
{
private:
	const int productId = counter++;
	Category category;
	float price;
	string description;
	string size;
	string composition;
	static int counter;
public:
	Product() { ; }
	Product(Category category, float price, string description, string size, string composition);
	~Product() { ; }
	Product(const Product& p);
	Product& operator=(const Product& p);
	int getProductId() { return this->productId; }
	Category getCategory() { return this->category; }
	float getPrice() { return this->price; }
	string getDescription() { return this->description; }
	string getSize() { return this->size; }
	string getComposition() { return this->composition; }
	void displayProduct();
};


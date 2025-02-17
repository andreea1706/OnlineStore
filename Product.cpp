#include "Product.h"

int Product::counter = 1;

Product::Product(Category category, float price, string description, string size, string composition) {
	this->category = category;
	if (price > 0)
		this->price = price;
	else
		throw invalid_argument("Invalid price!");
	this->description = description;
	this->size = size;
	this->composition = composition;
}

Product::Product(const Product& p) {
	this->category = p.category;
	if (p.price > 0)
		this->price = p.price;
	else
		throw invalid_argument("Invalid price!");
	this->description = p.description;
	this->size = p.size;
	this->composition = p.composition;
}

Product& Product::operator=(const Product& p) {
	this->category = p.category;
	if (p.price > 0)
		this->price = p.price;
	else
		throw invalid_argument("Invalid price!");
	this->description = p.description;
	this->size = p.size;
	this->composition = p.composition;
	return*this;
}

void Product::displayProduct() {
	cout << "Product id:" << this->getProductId() << endl;
	if (this->getCategory() == 0)
		cout << "Category:coats" << endl;
	else if (this->getCategory() == 1)
		cout << "Category:cardigans" << endl;
	else if (this->getCategory() == 2)
		cout << "Category:dresses" << endl;
	else if (this->getCategory() == 3)
		cout << "Category:jeans" << endl;
	else if (this->getCategory() == 4)
		cout << "Category:trousers" << endl;
	else if (this->getCategory() == 5)
		cout << "Category:shirts" << endl;
	else if (this->getCategory() == 6)
		cout << "Category:t-shirts" << endl;
	else if (this->getCategory() == 7)
		cout << "Category:shoes" << endl;
	else
		cout << "Category:bags" << endl;
	cout << "Price:" << this->getPrice() << endl;
	cout << "Description:" << this->getDescription() << endl;
	cout << "Size:" << this->getSize() << endl;
	cout << "Composition:" << this->getComposition() << endl;
	cout << endl;
}


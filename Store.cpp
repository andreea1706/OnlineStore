#include "Store.h"

Store::Store(list<pair<Product*, int>> products) {
	this->products = products;
}

void Store::addProduct(Product* product, int stock) {
	for (auto& i : products) {
		if (i.first == product) {
			i.second += stock;
			return;
		}
	}
	products.push_back(make_pair(product, stock));
}

void Store::displayStore() {
	if (products.empty()) {
		cout << "No items available" << endl;
	}
	cout << "Available products:" << endl;
	for (auto i : products) {
		i.first->displayProduct();
		cout << "Stock:" << i.second << endl;
		cout << endl;
	}
}

int Store::getStock(Product* product) {
	for (auto& i : products) {
		if (i.first == product) {
			return i.second;
		}
	}
}

bool Store::reduceStock(Product* product, int quantity) {
	for (auto& i : products) {
		if (i.first == product) {
			if (i.second > quantity) {
				i.second -= quantity;
				return true;
			}
			else {
				cout << "Out of stock!" << endl;
				return false;
			}
		}
	}

}




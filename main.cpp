#define _CRT_SECURE_NO_wARNINGS
#include<iostream>
#include<fstream>
#include"Client.h"
#include"Product.h"
#include"DeliveryAddresses.h"
#include"Store.h"
#include"ShoppingCart.h"
#include"Order.h"

int main() {
	//Client
	Client client1;
	/*cin >> client1;
	ofstream file("Clients.txt");
	if (file.is_open()) {
		file << client1;
		file.close();
	}
	else
		throw out_of_range("Error opening the file");*/
	Client* client2 = new Client((char*)"Pirjol", (char*)"Violeta", "pirjolvioelta25@gmail.com", "password25", "0786357253");

	//Product
	cout << "Product:" << endl;
	Product product1(Jeans, 189.90, "Jeans with medium waist", "M", "100% cotton");
	Product product2(Cardigans, 159.90, "Long sleeved jacket", "S", "69% polyester");
	product1.displayProduct();
	product2.displayProduct();


	//Delivery addresses
	cout << "Delivery addresses:" << endl;
	vector<pair<Client*, string>> adress1;
	adress1.push_back(make_pair(client2, "Str. Mihai Viteazu,Nr. 34, Jud. Dambovita"));
	DeliveryAddresses adress(adress1);
	adress.displayDelivery();

	//Store
	cout << "Store:" << endl;
	list<pair<Product*, int>> Products;
	Products.push_back(make_pair(&product1, 5));
	Products.push_back(make_pair(&product2, 3));
	Store store1(Products);
	store1.displayStore();
	store1.addProduct(&product1, 3);
	cout << endl;
	store1.displayStore();

	//Shopping cart
	cout << "Shopping cart:" << endl;
	ShoppingCart cart1;
	cart1.addCartItems(&product1, 1, store1);
	cout << "Total cart:" << cart1.total() << endl;
	store1.displayStore();

	//Order
	cout << "Order:" << endl;
	Order order1(adress, cart1);
	order1.displayOrder();

}
#include "DeliveryAddresses.h"

DeliveryAddresses::DeliveryAddresses(vector<pair<Client*, string>> deliveryAddress) {
	this->deliveryAddress = deliveryAddress;
}

void DeliveryAddresses::displayDelivery() {
	if (deliveryAddress.empty()) {
		cout << "No customers" << endl;
	}
	for (auto i : deliveryAddress) {
		i.first->displayClient();
		cout << "Adresa:" << i.second << endl;
		cout << endl;
	}
}
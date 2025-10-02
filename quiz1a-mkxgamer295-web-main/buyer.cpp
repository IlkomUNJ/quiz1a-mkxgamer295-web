#include "buyer.h"

// Constructor
Buyer::Buyer(int id, const string& name, BankCustomer &account0)
    : id(id), name(name), account(account0) {}

// Getters
int Buyer::getId() const {
    return id;
}

string Buyer::getName() const {
    return name;
}

BankCustomer& Buyer::getAccount() {
    return account;
}

// Setters
void Buyer::setId(int newId) {
    id = newId;
}

void Buyer::setName(const string& newName) {
    name = newName;
}
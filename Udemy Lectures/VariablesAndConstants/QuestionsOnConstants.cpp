#include <iostream>

using namespace std;

const int CLEANING_PRICE_PER_ROOM {30};
const float TAX_PER_ROOM {0.06};

void displayWelcomeMessage() {
    cout << "***WELCOME TO GRAPHENE ROOM CLEANING SERVICES***" << endl;
}

int calculateCleaningCost(int numberOfRooms) {
    return numberOfRooms * CLEANING_PRICE_PER_ROOM;
}

float calculateTax(int numberOfRooms) {
    return numberOfRooms * TAX_PER_ROOM * CLEANING_PRICE_PER_ROOM;
}

float calculateTotalCost(int cleaningCost, int tax) {
    return cleaningCost + tax;
}

int main() {
    displayWelcomeMessage();

    int numberOfRooms {0};
    cout << "Enter the Number of Rooms: ";
    cin >> numberOfRooms;

    int cleaningCost = calculateCleaningCost(numberOfRooms);
    float tax = calculateTax(numberOfRooms);
    float totalCost = calculateTotalCost(cleaningCost, tax);

    cout << "Price Per Room: ₹" << CLEANING_PRICE_PER_ROOM << endl;
    cout << "Cost of Cleaning: ₹" << cleaningCost << endl;
    cout << "Total Tax: ₹" << tax << endl;
    cout << "=============================================================" << endl;
    cout << "The Total Cost: ₹" << totalCost << endl;
    cout << "This estimates is valid for " << 30 << " days" << endl;
    return 0;
}
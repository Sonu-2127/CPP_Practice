#include <iostream>
#include <iomanip>

const int CLEANING_PRICE_PER_SMALL_ROOM {25};
const int CLEANING_PRICE_PER_BIG_ROOM {35};
const float SALES_TAX_RATE {0.06};
const int ESTIMATE_VALIDITY_DAYS {30};

void displayWelcomeMessage() {
    std::cout << "***WELCOME TO GRAPHENE ROOM CLEANING SERVICES***" << std::endl;
}

int calculateCleaningCost(int numberOfSmallRooms, int numberOfBigRooms) {
    return (numberOfSmallRooms * CLEANING_PRICE_PER_SMALL_ROOM) + 
           (numberOfBigRooms * CLEANING_PRICE_PER_BIG_ROOM);
}

float calculateTax(int cleaningCost) {
    return cleaningCost * SALES_TAX_RATE;
}

float calculateTotalCost(int cleaningCost, float tax) {
    return cleaningCost + tax;
}

void displayCostDetails(int cleaningCost, float tax, float totalCost) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price Per Big Room: ₹" << CLEANING_PRICE_PER_BIG_ROOM << std::endl;
    std::cout << "Price Per Small Room: ₹" << CLEANING_PRICE_PER_SMALL_ROOM << std::endl;
    std::cout << "Cost of Cleaning: ₹" << cleaningCost << std::endl;
    std::cout << "Total Tax: ₹" << tax << std::endl;
    std::cout << "=============================================================" << std::endl;
    std::cout << "The Total Cost: ₹" << totalCost << std::endl;
    std::cout << "This estimate is valid for " << ESTIMATE_VALIDITY_DAYS << " days" << std::endl;
}

bool isValidRoomCount(int numberOfSmallRooms, int numberOfBigRooms) {
    return numberOfSmallRooms >= 0 && numberOfBigRooms >= 0;
}

int main() {
    displayWelcomeMessage();

    int numberOfSmallRooms {0};
    std::cout << "Enter Number of Small Rooms: ";
    std::cin >> numberOfSmallRooms;

    int numberOfBigRooms {0};
    std::cout << "Enter Number of Big Rooms: ";
    std::cin >> numberOfBigRooms;

    if (!isValidRoomCount(numberOfSmallRooms, numberOfBigRooms)) {
        std::cout << "Check value of rooms, it cannot be a negative number" << std::endl;
        return 1;
    }

    int cleaningCost = calculateCleaningCost(numberOfSmallRooms, numberOfBigRooms);
    float tax = calculateTax(cleaningCost);
    float totalCost = calculateTotalCost(cleaningCost, tax);

    displayCostDetails(cleaningCost, tax, totalCost);

    return 0;
}
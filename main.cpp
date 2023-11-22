#include <iostream>
#include <string>

class Address {
private:
    int index;
    std::string country;
    std::string city;
    std::string street;
    int house;
    int apartment;

public:
    int getIndex() { return index; }
    void setIndex(int i) { index = i; }

    std::string getCountry() { return country; }
    void setCountry(std::string c) { country = c; }

    std::string getCity() { return city; }
    void setCity(std::string c) { city = c; }

    std::string getStreet() { return street; }
    void setStreet(std::string s) { street = s; }

    int getHouse() { return house; }
    void setHouse(int h) { house = h; }

    int getApartment() { return apartment; }
    void setApartment(int a) { apartment = a; }
};

class Converter {
private:
    double usd;
    double eur;
    double pln;

public:
    Converter(double usd, double eur, double pln) : usd(usd), eur(eur), pln(pln) {}

    double convertToUah(double amount, std::string currency) {
        if (currency == "usd") {
            return amount * usd;
        } else if (currency == "eur") {
            return amount * eur;
        } else if (currency == "pln") {
            return amount * pln;
        } else {
            std::cout << "Unsupported currency" << std::endl;
            return 0.0;
        }
    }

    double convertFromUah(double amount, std::string currency) {
        if (currency == "usd") {
            return amount / usd;
        } else if (currency == "eur") {
            return amount / eur;
        } else if (currency == "pln") {
            return amount / pln;
        } else {
            std::cout << "Unsupported currency" << std::endl;
            return 0.0;
        }
    }
};

class Employee {
private:
    std::string lastName;
    std::string firstName;

public:
    Employee(std::string last, std::string first) : lastName(last), firstName(first) {}

    void calculateSalaryAndTax(double experience, std::string position) {
        // Розрахунок зарплати та податків
        // ...
    }
};

class User {
private:
    std::string login;
    std::string firstName;
    std::string lastName;
    int age;
    const std::string registrationDate;

public:
    User(std::string l, std::string f, std::string ln, int a, std::string rd) : login(l), firstName(f), lastName(ln), age(a), registrationDate(rd) {}

    void printUserInfo() {
        std::cout << "Login: " << login << std::endl;
        std::cout << "Name: " << firstName << " " << lastName << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Registration Date: " << registrationDate << std::endl;
    }
};

int main() {
    // Створення екземпляра класу Address
    Address address;
    address.setIndex(12345);
    address.setCountry("Ukraine");
    address.setCity("Kyiv");
    address.setStreet("Main Street");
    address.setHouse(10);
    address.setApartment(5);

    // Виведення інформації про адресу
    std::cout << "Index: " << address.getIndex() << std::endl;
    std::cout << "Country: " << address.getCountry() << std::endl;
    std::cout << "City: " << address.getCity() << std::endl;
    std::cout << "Street: " << address.getStreet() << std::endl;
    std::cout << "House: " << address.getHouse() << std::endl;
    std::cout << "Apartment: " << address.getApartment() << std::endl;

    // Створення екземпляра класу Converter
    Converter converter(26.5, 33.2, 7.1);  // Припустимі курси валют до гривні

    // Створення екземпляра класу Employee
    Employee employee("Smith", "John");
    employee.calculateSalaryAndTax(5, "Manager");  // Приклад розрахунку зарплати та податків

    // Створення екземпляра класу User
    User user("user123", "Alice", "Johnson", 30, "2022-01-15");
    user.printUserInfo();

    return 0;
}

#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction() {
    setNumerator(0);
    setDenumerator(1);
}

Fraction::Fraction(int num, int den) {
    setNumerator(num);
    setDenumerator(den);
}

void Fraction::setNumerator(int num) {
    this->num = num;
}

void Fraction::setDenumerator(int den) {
    if (den != 0) {
        this->den = den;
    } else {
        std::cout << "Invalid Denominator\n";
        this->den = 1;
    }
}

int Fraction::getNumerator() const {
    return num;
}

int Fraction::getDenumerator() const {
    return den;
}

void Fraction::print() const {
    std::cout << num << "/" << den << "\n";
}

Fraction& Fraction::operator=(const Fraction& rhs) {
    if (this != &rhs) {
        num = rhs.num;
        den = rhs.den;
    }
    return *this;
}

Fraction Fraction::operator-(const Fraction& rhs) const {
    Fraction result;
    result.setNumerator(num * rhs.den - rhs.num * den);
    result.setDenumerator(den * rhs.den);
    return result;
}

Fraction Fraction::operator+(const Fraction& rhs) const {
    Fraction result;
    result.setNumerator(num * rhs.den + rhs.num * den);
    result.setDenumerator(den * rhs.den);
    return result;
}

Fraction Fraction::operator*(const Fraction& rhs) const {
    Fraction result;
    result.setNumerator(num * rhs.num);
    result.setDenumerator(den * rhs.den);
    return result;
}

Fraction Fraction::operator/(const Fraction& rhs) const {
    Fraction result;

    if (rhs.num == 0) {
        std::cout << "Error: Division by zero fraction\n";
        return Fraction();
    }

    result.setNumerator(num * rhs.den);
    result.setDenumerator(den * rhs.num);
    return result;
}

bool Fraction::operator<(const Fraction& rhs) const {
    return num * rhs.den < den * rhs.num;
}

bool Fraction::operator==(const Fraction& rhs) const {
    return num * rhs.den == den * rhs.num;
}

bool Fraction::operator>(const Fraction& rhs) const {
    return num * rhs.den > den * rhs.num;
}

Fraction& Fraction::operator++() {
    num += den;
    return *this;
}

Fraction Fraction::operator++(int) {
    Fraction temp = *this;
    ++(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Fraction& obj) {
    os << obj.getNumerator() << "/" << obj.getDenumerator();
    return os;
}

std::istream& operator>>(std::istream& is, Fraction& obj) {
    int num{};
    int den{};
    char sign{};

    is >> num >> sign >> den;
    if (den != 0) {
        obj.setNumerator(num);
        obj.setDenumerator(den);
    }

    return is;
}
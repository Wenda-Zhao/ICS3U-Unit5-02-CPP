// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for TC to Tf

#include <iostream>

void CaculateArea(std::string length, std::string high) {
    // this function is calculate the area

    int length_int;
    int high_int;
    int area;

    // process & output
    try {
        length_int = std::stoi(length);
        try {
            high_int = std::stoi(high);
            area = 0.5 * length_int * high_int;
            std::cout << "The area of the triangle is: " << area << "cm²";
        } catch (std::invalid_argument) {
            std::cout << "The high is not a integer";
        }
    } catch (std::invalid_argument) {
        std::cout << "The length is not a integer";
    }
}

int main() {
    // This function is get the length and high

    std::string length;
    std::string high;

    // input
    std::cout << "Enter the length:";
    std::cin >> length;
    std::cout << "Enter the high:";
    std::cin >> high;

    // call function
    CaculateArea(length, high);
}

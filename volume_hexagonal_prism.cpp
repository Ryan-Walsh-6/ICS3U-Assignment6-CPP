// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 8 2021
// this program calculates the volume of a hexagonal prism

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

float calculate_volume(float base_edge, float height) {
    // calculates volume
    float volume_of_hexagonal_prism;

    // process & output
    volume_of_hexagonal_prism = ((3 * sqrt(3)) / 2 * (pow(base_edge, 2))
    * (height));

    return volume_of_hexagonal_prism;
}

int main() {
// this program calculates the volume of a hexagonal prism
    float base_edge_from_user;
    float height_from_user;
    float volume;
    std::string base_edge_from_user_string;
    std::string height_from_user_string;

    while (true) {
        try {
            std::cout << "Enter the base edge of the hexagonal prism (cm): ";
            std::cin >> base_edge_from_user_string;
            base_edge_from_user = std::stof(base_edge_from_user_string);
            std::cout << "Enter the height of the hexagonal prism (cm): ";
            std::cin >> height_from_user_string;
            std::cout << "" << std::endl;
            height_from_user = std::stof(height_from_user_string);
            if (base_edge_from_user < 0 || height_from_user < 0) {
                std::cout << "Please ensure all values are positive"
                          << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        }catch (std::invalid_argument) {
            std::cout << "Please enter a valid number." << std::endl;
            std::cout << "" << std::endl;
        }
    }

    // call functions
    volume = calculate_volume(base_edge_from_user, height_from_user);

    std::cout << std::setprecision(2) << std::fixed <<
    "The volume of a hexagonal prism with a base edge of "
    << base_edge_from_user << "cm and a height of " << height_from_user <<
    "cm is " << std::setprecision(2) << std::fixed << volume << "cm³"
    << std::endl;
}

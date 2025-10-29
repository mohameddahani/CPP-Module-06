/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:05:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/28 15:34:46 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ScalarConverter::ScalarConverter(){
    std::cout << "Default constructor of ScalarConverter is called" << std::endl;
}

// * Copy constructor with initializer list
ScalarConverter::ScalarConverter(const ScalarConverter &other){
    (void)other;

    std::cout << "Copy constructor of ScalarConverter is called" << std::endl;
}

// * Copy assignment operator
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    (void)other;

    std::cout << "Copy assignment operator of ScalarConverter is called" << std::endl;
    
    return *this;
}

// * Destructor
ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter is destroyed" << std::endl;
}

// * Methods
void ScalarConverter::convert(const std::string &value){
    // todo: check if is empty
    if (value.empty()){
        std::cout << "Error" << std::endl;
        return ;
    }
    
    // char: '*'
    // int: 42
    // float: 42.0f
    // double: 42.0

    // float isOneChar = false;

    // * check if a character
    if (value.length() == 1){
        printConvert(value[0]);
    } else if (value.length() >= 18){
        std::cout << "Error" << std::endl;
        return ;
    }
    // * check if more than character
    else {
        int points = 0;
        int fCount = 0;
        // * check chars
        for (int i = 0; value[i]; i++){
            // * check sign (+ -)
            if (value[i] == '-' && !isdigit(value[i + 1])){
                std::cout << "Error4" << std::endl;
                return ;
            } else if (value[i] == '-' && isdigit(value[i + 1])){
                continue;
            }
            
            
            // * check how many points i have
            if (value[i] == '.' && !isdigit(value[i + 1])){
                std::cout << "Error1" << std::endl;
                return ;
            } else if (value[i] == '.' && isdigit(value[i + 1])) {
                points++;
                continue;
            }
            
            // * check if (f) in the last
            if (value[i] == 'f' && value[i + 1]){
                std::cout << "Error2" << std::endl;
                return ;
            } else if (value[i] == 'f' && !value[i + 1]){
                fCount++;
                continue;
            }

            if (!isdigit(value[i])){
                std::cout << "Error3" << std::endl;
                return ;
            }
        }

        // * check the number of points & char f
        if (points > 1 || fCount > 1){
            std::cout << "Error4" << std::endl;
            return ;
        }

        // * check if float
        if (fCount && points){
            double num = atod(value.c_str());
            printConvert(num);
        }
        // * check if double
        else if (!fCount && points){
            // todo: send double number
            // double floatNum = atod(value.c_str());
            // printConvert(floatNum, 'd');
            // double num = atod(value.c_str());
            // printConvert(num, 'd');
        }
        // * check if int
        else if (!fCount && !points){
            double num = atod(value.c_str());
            printConvert(num);
        }
    }    
}

void ScalarConverter::printConvert(const double &num){
    printChar(num);
    printInt(num);
    printFloat(num);
    printDouble(num);
}

void ScalarConverter::printChar(const double &num){
        if (num < 0 || num > 127){
        std::cout << "char: " << "impossible" << std::endl;
        } else if (std::isprint(num)){
            std::cout << "char: " << static_cast<char>(num) << std::endl;
        } else {
            std::cout << "char: " << "Non displayable" << std::endl;
        }
}

void ScalarConverter::printInt(const double &num){
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()){
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    }
}

void ScalarConverter::printFloat(const double &num){
    if (num > std::numeric_limits<float>::max() || num < -std::numeric_limits<float>::min()){
        std::cout << "float: " << "impossible" << std::endl;
    }
    else {
        // * Using with std::fixed to control decimal places
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
    }
}
void ScalarConverter::printDouble(const double &num){
    if (num > std::numeric_limits<double>::max() || num < -std::numeric_limits<double>::min()){
        std::cout << "double: " << "impossible" << std::endl;
    }
    else {
        // * you should not use std::fixed << std::setprecision(1) because is all ready active
        std::cout << "double: " << static_cast<double>(num) << std::endl;
    }
}

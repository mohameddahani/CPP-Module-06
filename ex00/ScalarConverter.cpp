/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:05:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/27 18:49:40 by mdahani          ###   ########.fr       */
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
    // char: '*'
    // int: 42
    // float: 42.0f
    // double: 42.0

    float isOneChar = false;

    char c = 0;
    // * check if a character
    if (value.length() == 1){
        c = value[0];
        isOneChar = true;
    }
    // * check if more than character
    else {
        int points = 0;
        int fCount = 0;
        // * check chars
        for (int i = 0; value[i]; i++){
            // * check how many points i have
            if (value[i] == '.' && isdigit(value[i + 1]) && !points){
                points++;
            } else {
                std::cout << "Error" << std::endl;
                return ;
            }
            
            // * check if (f) in the last
            if (value[i] == 'f' && !value[i + 1]){
                fCount++;
                continue;
            }

            if (!isdigit(value[i])){
                std::cout << "Error" << std::endl;
                return ;
            }
        }
        
        // * check if only one char
        if (isOneChar){
            printConvert(c, 'c');
        }
        // * check if float
        else if (fCount && points){
            float floatNum = atof(value.c_str());
            printConvert(floatNum, 'f');
        }
        // * check if double
        else if (!fCount && points){
            // todo: send double number
            // double floatNum = atod(value.c_str());
            // printConvert(floatNum, 'd');
        }
        // * check if int
        else if (!fCount && !points){
            float floatNum = atoi(value.c_str());
            printConvert(floatNum, 'i');
        }
        
        // // * check if (int)
        // if (atoi(value.c_str()) > std::numeric_limits<int>::max()){
        //     /* code */
        // }
        
        // if (value == "nan")
        // {
        //     /* code */
        // } else if (value == "+inf") {
            
        // } else if (value == "-inf") {
            
        // } else if (value == "nanf") {
            
        // } else if (value == "+inff") {
            
        // } else if (value == "-inff") {
            
        // }
        
    }

    // if (isOneChar){
    //     if (c < 0 || c > 255){
    //         std::cout << "char: " << "impossible" << std::endl;
    //     } else if (std::isprint(c)){
    //         std::cout << "char: " << static_cast<char>(c) << std::endl;
    //     }
    //     else {
    //         std::cout << "char: " << "Non displayable" << std::endl;
    //     }
        
    //     std::cout << "int: " << static_cast<int>(c) << std::endl;
    //     std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    //     std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    // } else {
        
    // }
    
    
}

void ScalarConverter::printConvert(const long long &num, const char &mode){
    // if (mode == 'c'){
        printChar(num);
        printInt(num);
        printFloat(num);
        printDouble(num);
    // } else if (mode == 'i') {
    //     printChar(num);
    //     printInt(num);
    //     printFloat(num);
    //     printDouble(num);
    // } else if (mode == 'f') {
    //     printChar(num);
    //     printInt(num);
    //     printFloat(num);
    //     printDouble(num);
    // } else if (mode == 'd') {
    //     printChar(num);
    //     printInt(num);
    //     printFloat(num);
    //     printDouble(num);
    // }
}

void ScalarConverter::printChar(const char &c){
        if (c < 0 || c > 255){
        std::cout << "char: " << "impossible" << std::endl;
        } else if (std::isprint(c)){
            std::cout << "char: " << static_cast<char>(c) << std::endl;
        } else {
            std::cout << "char: " << "Non displayable" << std::endl;
        }
        // std::cout << "int: " << static_cast<int>(c) << std::endl;
        // std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        // std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::printInt(const long long &num){
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()){
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    }
}

void ScalarConverter::printFloat(const long long &num){
    if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min()){
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    }
}
void ScalarConverter::printDouble(const long long &num){
    if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min()){
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    }
}

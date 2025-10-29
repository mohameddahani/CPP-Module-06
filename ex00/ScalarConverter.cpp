/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:05:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/29 09:50:50 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Static variable
std::string ScalarConverter::pseudoLiterals = ""; 

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
void ScalarConverter::convert(std::string &value){
    if (value.empty()){
        std::cout << "Error" << std::endl;
        return ;
    }

    // * check if one character
    if (value.length() == 1){
        if (isdigit(value[0])){
            printConvert(atoi(value.c_str()));
        } else {
            printConvert(value[0]);
        }
    }
    // * check if more than character
    else {
        // * check pseudo literals
        if (value == "nan" || value == "nanf" || value == "+inf" || value == "-inf" || value == "+inff" || value == "-inff"){
            pseudoLiterals = value;
        }
        
        char *end = NULL;

        // * remove (f) if she the last
        if (value[value.length() - 1] == 'f'){
            value[value.length() - 1] = '\0';
        }
        
        double num = strtod(value.c_str(), &end);
        
        if (*end != '\0' && !pseudoLiterals[0]){
            std::cout << "Error" << std::endl;
            return ;
        }
        if (value[value.length() - 1] == '.'){
            std::cout << "Error" << std::endl;
            return ;
        }
        if (value[0] == '.'){
            std::cout << "Error" << std::endl;
            return ;
        }
        if (value[1] == '.' && (value[0] == '+' || value[0] == '-')){
            std::cout << "Error" << std::endl;
            return ;
        }

        // * print the convertion
        printConvert(num);
    }
}

void ScalarConverter::printConvert(const double &num){
    printChar(num);
    printInt(num);
    printFloat(num);
    printDouble(num);
}

void ScalarConverter::printChar(const double &num){
    if ((num < 0 || num > 127) || std::isnan(num) || std::isinf(num) || pseudoLiterals == "+inf" || pseudoLiterals == "-inf"){
        std::cout << "char: " << "impossible" << std::endl;
    } else if (std::isprint(num)){
        std::cout << "char: " << static_cast<char>(num) << std::endl;
    } else {
        std::cout << "char: " << "Non displayable" << std::endl;
    }
}

void ScalarConverter::printInt(const double &num){
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min() || std::isnan(num)
        || pseudoLiterals == "+inf" || pseudoLiterals == "-inf"){
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    }
}

void ScalarConverter::printFloat(const double &num){
    if (pseudoLiterals == "+inf"){
        std::cout << "float: " << "+inff" << std::endl;
    } else if (pseudoLiterals == "-inf"){
        std::cout << "float: " << "-inff" << std::endl;
    } else if (pseudoLiterals == "+inff") {
         std::cout << "float: " << "+inff" << std::endl;
    } else if (pseudoLiterals == "-inff") {
         std::cout << "float: " << "-inff" << std::endl;
    } else if (num > std::numeric_limits<float>::max() || num < -std::numeric_limits<float>::max()){
        std::cout << "float: " << "impossible" << std::endl;
    } else {
        // * Using with std::fixed to control decimal places
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
    }
}

void ScalarConverter::printDouble(const double &num){
    if (pseudoLiterals == "+inf"){
        std::cout << "double: " << "+inf" << std::endl;
    } else if (pseudoLiterals == "-inf"){
        std::cout << "double: " << "-inf" << std::endl;
    } else if (pseudoLiterals == "+inff") {
         std::cout << "double: " << "+inf" << std::endl;
    } else if (pseudoLiterals == "-inff") {
         std::cout << "double: " << "-inf" << std::endl;
    } else if (num > std::numeric_limits<double>::max() || num < -std::numeric_limits<double>::max()){
        std::cout << "double: " << "impossible" << std::endl;
    } else {
        // * We don't need to add std::fixed << std::setprecision(1) because if all ready active on printFloat 
        std::cout << "double: " << static_cast<double>(num) << std::endl;
    }
}

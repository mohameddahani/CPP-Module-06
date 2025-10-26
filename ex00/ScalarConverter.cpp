/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:05:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/26 13:19:14 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
ScalarConverter::ScalarConverter(){
    std::cout << "Default constructor of ScalarConverter is called" << std::endl;
}

// // * Parametrised constructor
// ScalarConverter::ScalarConverter(const std::string &name, const unsigned int &grade): name(name){
//     if (grade < 1){
//         throw ScalarConverter::GradeTooHighException();
//     } else if (grade > 150){
//         throw ScalarConverter::GradeTooLowException();
//     } else {
//         this->grade = grade;
//     }
    
//     std::cout << "Parametrised constructor of ScalarConverter is called" << std::endl;
// }

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
    
}
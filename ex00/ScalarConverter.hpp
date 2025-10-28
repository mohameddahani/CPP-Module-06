/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/28 08:58:22 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// * Includes
#include <iostream>
#include <cstdlib>
// #include <cctype>
#include <limits>

// * Class With Orthodox Canonical Form
// ! utility class
class ScalarConverter {
    // ! public
    public:
        // * Default constructor
        ScalarConverter();

        // * Copy constructor
        ScalarConverter(const ScalarConverter &other);

        // * Copy assignment operator
        ScalarConverter &operator=(const ScalarConverter &other);

        // * Destructor
        ~ScalarConverter();
        
        // * Methods
        static void convert(const std::string &value);
        static void printConvert(const long long &num, const char &mode);
        static void printChar(const long long &num);
        static void printInt(const long long &num);
        static void printFloat(const long long &num);
        static void printDouble(const long long &num);
};

#endif
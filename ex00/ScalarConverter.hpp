/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/29 09:58:28 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// * Includes
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

// * Class With Orthodox Canonical Form
// ! utility class
class ScalarConverter {
    private:
        static std::string pseudoLiterals;
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
        static void convert(std::string &value);
        static void printConvert(const double &num);
        static void printChar(const double &num);
        static void printInt(const double &num);
        static void printFloat(const double &num);
        static void printDouble(const double &num);
};

#endif
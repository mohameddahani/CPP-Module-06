/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/26 15:15:23 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
// ! utility class
class ScalarConverter {
    // ! public
    public:
        // * Default constructor
        ScalarConverter();

        // // * Parametrised constructor
        // ScalarConverter(const std::string &name, const unsigned int &grade);

        // * Copy constructor
        ScalarConverter(const ScalarConverter &other);

        // * Copy assignment operator
        ScalarConverter &operator=(const ScalarConverter &other);

        // * Destructor
        ~ScalarConverter();
        
        // * Methods
        static void convert(std::string &value);
};

#endif
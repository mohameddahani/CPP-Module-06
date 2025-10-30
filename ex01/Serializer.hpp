/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/29 10:53:56 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// * Includes
#include <iostream>
#include <stdint.h>

// * Class With Orthodox Canonical Form
class Serializer {
    private:
        static std::string pseudoLiterals;
    // ! public
    public:
        // * Default constructor
        Serializer();

        // * Copy constructor
        Serializer(const Serializer &other);

        // * Copy assignment operator
        Serializer &operator=(const Serializer &other);

        // * Destructor
        ~Serializer();
        
        // * Methods
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
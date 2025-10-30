/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 14:25:50 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// * Includes
#include <stdint.h>
#include <iostream>

// * struct Data
struct Data {
    unsigned int x;
    std::string name;
};

// * Class With Orthodox Canonical Form
class Serializer {
    // ! private
    private:
        // * Default constructor
        Serializer();

        // * Copy constructor
        Serializer(const Serializer &other);

        // * Copy assignment operator
        Serializer &operator=(const Serializer &other);

        // * Destructor
        ~Serializer();

    // ! public
    public:
        // * Methods
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
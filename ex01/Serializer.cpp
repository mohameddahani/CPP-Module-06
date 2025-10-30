/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:05:20 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 11:43:57 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ! static_cast
// * Same as C-style casting but safer and more readable (best practice)
// * Works only between related types (Base <-> Derived)
// * Checked at compile-time (no runtime type check)
// * Does NOT check the real object type in runtime (no RTTI used)
// * Can cast from void* to a specific pointer type (if you know the real type)
// * Cannot cast between unrelated pointer types (like int* → Cat*)
// * ⚠️ If used between unrelated types → undefined behavior

// ! dynamic_cast
// * Works only with pointers or references (not by value)
// * Base class must have at least one virtual function (for RTTI)
// * Performs a runtime check of the real object type
// * Returns nullptr if the cast fails (for pointers)
// * Throws std::bad_cast if it fails (for references)
// * Used for safe downcasting (Base* → Derived*)
// * Example: Base* b = new Derived(); Derived* d = dynamic_cast<Derived*>(b);

// ! reinterpret_cast
// * Reinterprets memory bits as another type (no conversion, just reinterpretation)
// * Can cast any pointer type to any other pointer type (even unrelated types)
// * Can cast integer ↔ pointer (via uintptr_t or intptr_t)

// ! const_cast
// * Adds or removes const / volatile from a variable
// * Does not change the actual value in memory
// * Example: const int* p; int* q = const_cast<int*>(p);

// ! C-style cast  ((type)variable)
// * Combines static_cast, reinterpret_cast, and const_cast behavior automatically
// * Dangerous because the compiler chooses which cast to apply

// ! uintptr_t
// * An unsigned integer type that can safely hold a pointer value.
// * It can store a memory address (pointer) directly without any data loss.
// * Commonly used for pointer serialization (e.g., converting a pointer to an integer and back).
// ? On a 32-bit system → size is 4 bytes (32 bits).
// ? On a 64-bit system → size is 8 bytes (64 bits).


// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Static variable
// std::string Serializer::pseudoLiterals = ""; 

// * Default constructor
Serializer::Serializer(){
    std::cout << "Default constructor of Serializer is called" << std::endl;
}

// * Copy constructor with initializer list
Serializer::Serializer(const Serializer &other){
    (void)other;

    std::cout << "Copy constructor of Serializer is called" << std::endl;
}

// * Copy assignment operator
Serializer &Serializer::operator=(const Serializer &other){
    (void)other;

    std::cout << "Copy assignment operator of Serializer is called" << std::endl;
    
    return *this;
}

// * Destructor
Serializer::~Serializer(){
    std::cout << "Serializer is destroyed" << std::endl;
}

// * Methods

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:32:38 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/31 18:54:08 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Methods.hpp"

// ! Definitions of Functions

Base *generate(){
    int num = (rand() % 3) + 1;

    if (num == 1){
        return new A();
    } else if (num == 2){
        return new B();
    } else {
        return new C();
    }
}

void identify(Base *p){
    if (dynamic_cast<A *>(p)){
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p){
    try {
       (void)dynamic_cast<A &>(p);
       std::cout << "A" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << " is not A" << std::endl;
    }
    
    try {
       (void)dynamic_cast<B &>(p);
       std::cout << "B" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << " is not B" << std::endl;
    }
    
    try {
       (void)dynamic_cast<C &>(p);
       std::cout << "C" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << " is not C" << std::endl;
    }
}

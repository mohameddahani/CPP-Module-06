/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:16:33 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 14:44:49 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data data = {42, "mohamed"};
    
    uintptr_t x = Serializer::serialize(&data);

    std::cout << "address on hexa: " << &data << std::endl;
    std::cout << "address on decimal: " << x << std::endl;

    Data *ptr = Serializer::deserialize(x);

    // * check ptr if has the same data
    std::cout << ptr->x << std::endl;
    std::cout << ptr->name << std::endl;
}

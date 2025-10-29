/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:00:53 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/28 17:36:08 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Error: [Program] [String]" << std::endl;
        return 1;
    }
    
    ScalarConverter obj;
    std::string value = av[1];
    obj.convert(value);









    // #include <iostream>
    // #include <limits>

    // int main() {
    //     std::cout << "int min: " << std::numeric_limits<int>::min() << std::endl;
    //     std::cout << "int max: " << std::numeric_limits<int>::max() << std::endl;
    //     std::cout << "double max: " << std::numeric_limits<double>::max() << std::endl;
    // }

    
}

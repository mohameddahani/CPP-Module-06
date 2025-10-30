/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:00:53 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 11:47:41 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Error: [Program] [String]" << std::endl;
        return 1;
    }

    std::string value = av[1];
    ScalarConverter::convert(value);
}

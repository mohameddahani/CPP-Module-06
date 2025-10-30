/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:32:38 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 15:36:13 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Methods.hpp"

// ! Definitions of Functions

Base *generate(){
    return new Base();
}

void identify(Base *p){
    (void)p;
}

void identify(Base& p){
    (void)p;
}

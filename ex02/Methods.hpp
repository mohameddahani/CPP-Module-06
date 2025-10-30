/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Methods.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:04:17 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/30 15:32:11 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef METHODS_HPP
# define METHODS_HPP

// * Includes
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// * Functions
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
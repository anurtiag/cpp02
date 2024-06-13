/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:21:34 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/13 10:06:04 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
    point = 8;
}

Fixed::Fixed(Fixed &source)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = source.value;
    this->point = source.point;
}

Fixed &Fixed::operator = (const Fixed &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = source.value;
    this->point = source.point;
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return(value);
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:44:45 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/19 14:46:40 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    value = 0;
    point = 8;
}

Fixed::Fixed(const Fixed &source)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->value = source.value;
    this->point = source.point;
}

Fixed &Fixed::operator = (const Fixed &source)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->value = source.value;
    this->point = source.point;
    return(*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(value);
}

void Fixed::setRawBits(const int raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->point = raw;
}

Fixed::Fixed(const int nbr)
{
    // std::cout << "Int constructor called" << std::endl;
    float bit_value = MAX_VALUE;
    int n = nbr;
    this->point = 8;
    this->value = 0;
    if (nbr < 0)
    {
        this->value = 1;
        n *= -1;
    }
    for(int i = 0; i < (BIT_NBR); i++)
    {
        this->value = this->value << 1;
        if (n >= bit_value)
        {
            n -= bit_value;
            this->value += 1;
        }
        bit_value /= 2;
    }
}

Fixed::Fixed(const float nbr)
{
    // std::cout << "Float constructor called" << std::endl;
    float bit_value = MAX_VALUE;
    float n = nbr;
    this->point = 8;
    this->value = 0;
    if (nbr < 0)
    {
        this->value = 1;
        n *= -1;
    } 
    for(int i = 0; i < BIT_NBR; i++)
    {
        this->value = this->value << 1;
        if (n >= bit_value || ((unsigned int)(n - bit_value) < (n - (bit_value - MIN_VALUE))))
        {
            n -= bit_value;
            this->value += 1;
        }
        bit_value /= 2;
    }
}

int Fixed::toInt(void) const
{
    int n = this->value >> this->point;
    int bit_value = 1;
    int nbr = 0;
    for (int i = 0; i < (BIT_NBR - this->point); i++)
    {
        if (n % 2 != 0)
            nbr += bit_value;
        n = n >> 1;
        bit_value *= 2;
    }
    if (n % 2 != 0)
        nbr *= -1;
    return(nbr);
}

float Fixed::toFloat(void) const
{
    int n = this->value;
    float bit_value = MIN_VALUE;
    float nbr = 0;
    for (int i = 0; i < BIT_NBR; i++)
    {
        if (n % 2 != 0)
            nbr += bit_value;
        n = n >> 1;
        bit_value *= 2;
    }
    if (n % 2 != 0)
        nbr *= -1;
    return(nbr);
}

bool Fixed::operator<(const Fixed &obj)
{
    if(this->value < obj.value)
        return(true);
    else
        return(false);
}

bool Fixed::operator<=(const Fixed &obj)
{
    if(this->value <= obj.value)
        return(true);
    else
        return(false);
}

bool Fixed::operator>(const Fixed &obj)
{
    if(this->value > obj.value)
        return(true);
    else
        return(false);
}

bool Fixed::operator>=(const Fixed &obj)
{
    if(this->value >= obj.value)
        return(true);
    else
        return(false);
}

bool Fixed::operator==(const Fixed &obj)
{
    if(this->value == obj.value)
        return(true);
    else
        return(false);
}

bool Fixed::operator!=(const Fixed &obj)
{
    if(this->value != obj.value)
        return(true);
    else
        return(false);
}

Fixed Fixed::operator+(const Fixed &obj)
{
    float n = this->toFloat() + obj.toFloat();
    Fixed new_obj(n);

    return(new_obj);
}

Fixed Fixed::operator-(const Fixed &obj)
{
    float n = this->toFloat() - obj.toFloat();
    Fixed new_obj(n);

    return(new_obj);
}

Fixed Fixed::operator*(const Fixed &obj)
{
    float n = this->toFloat() * obj.toFloat();
    Fixed new_obj(n);

    return(new_obj);
}

Fixed Fixed::operator/(const Fixed &obj)
{
    float n = this->toFloat() / obj.toFloat();
    Fixed new_obj(n);

    return(new_obj);
}

Fixed Fixed::operator++(int)
{
    Fixed new_obj(*this);


    this->value++;
    return(new_obj);
}

Fixed Fixed::operator++()
{
    this->value++;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed new_obj(*this);

    if(this->value > 0)
        this->value--;
    else
        this->value++;
    return(new_obj);
}

Fixed Fixed::operator--()
{
    if(this->value > 0)
        this->value--;
    else
        this->value++;
    return(*this);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if(obj1.value < obj2.value)
        return(obj1);
    else
        return(obj2);
}

Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
    if(obj1.value < obj2.value)
        return(obj1);
    else
        return(obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if(obj1.value > obj2.value)
        return(obj1);
    else
        return(obj2);
}

Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
    if(obj1.value > obj2.value)
        return(obj1);
    else
        return(obj2);
}
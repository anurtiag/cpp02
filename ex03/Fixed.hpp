/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:44:42 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/19 15:48:16 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

# define MAX_VALUE  4194304
# define MIN_VALUE  0.00390625
# define BIT_NBR    31

class Fixed
{
    private:
        int value;
        int point;
    public:
        Fixed();
        Fixed(const Fixed &source);
        Fixed &operator= (const Fixed &source);
        Fixed(const int par);
        Fixed(const float nbr);
        ~Fixed();
        int getRawBits();
        void setRawBits(const int raw);
        int toInt() const;
        float toFloat(void) const;
        bool operator<(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator>(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator==(const Fixed &obj);
        bool operator!=(const Fixed &obj);
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        static Fixed &min(Fixed &obj1, Fixed &obj2);
        static const Fixed &min(Fixed const &obj1, Fixed const &obj2);
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static const Fixed &max(Fixed const &obj1, Fixed const &obj2);
};

#endif
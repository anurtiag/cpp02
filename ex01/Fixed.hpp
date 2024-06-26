/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:21:37 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/19 09:45:11 by anurtiag         ###   ########.fr       */
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
        Fixed &operator = (const Fixed &source);
        Fixed(const int par);
        Fixed(const float nbr);
        ~Fixed();
        int getRawBits();
        void setRawBits(const int raw);
        int toInt() const;
        float toFloat(void) const;
};

#endif
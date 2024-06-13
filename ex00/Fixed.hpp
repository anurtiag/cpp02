/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:21:37 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/13 10:00:30 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    private:
        int value;
        int point;
    public:
        Fixed();
        Fixed(Fixed &source);
        Fixed &operator = (const Fixed &source);
        ~Fixed();
        int getRawBits();
        void setRawBits(const int raw);
};

#endif
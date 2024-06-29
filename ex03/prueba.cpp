/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:56 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/20 12:08:59 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    float px = 3; float py = 2; float ax = 1; float ay = 1; float bx = 4; float by = 4; float cx = 4; float cy = 01; float w1 = 0; float w2 = 0; float ex = cx - ax; float ey = cy - ay; float dx = bx - ax; float dy = by - ay;
    w1 = (ex * (ay - py) + ey * (px - ax)) / (dx * ey - dy * ex);
    std::cout << "ex " << ex << " ay " << ay << " py " << py << " ey " << ey << " px " << px << " ax " << ax << " dx " << dx << " dy " << dy << std::endl;
    if(ex == 0)
        ex += 0.0000001;
    if(ey == 0)
        ey += 0.0000001;
    if(dx == 0)
        dx += 0.0000001;
    if(dy == 0)
        dy += 0.0000001;
    w2 = (py - ay - (w1 * dy)) / ey;
    if (w1 >= 0 && w2 >= 0 && ((w1 + w2) <= 1))
        std::cout << "chamanismoooo" << std::endl;
    else
        std::cout << "w1 vale " << w1 << "w2 vale " << w2 << " la suma es " << (w1 + w2) << std::endl;
    return(0);
}




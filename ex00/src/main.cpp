/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:18:08 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/04 10:43:39 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main()
{
    std::vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(101);

    std::list<int> lst;
    
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    easyFind(vec, 3);
    easyFind(lst, 6);

    return (0);
}

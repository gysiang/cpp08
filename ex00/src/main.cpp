/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:18:08 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/06 16:01:15 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::cout << "Vector" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	easyFind(vec, 5);
	easyFind(vec, 20);

	std::cout << "-------------------" << std::endl;
	std::list<int> lst;
	std::cout << "List" << std::endl;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);

	easyFind(lst, 30);
	easyFind(lst, 25);

	return (0);
}

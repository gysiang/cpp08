/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:17:52 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/11 21:08:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyFind(T& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
	{
		std::cout << "Found: " << *it << std::endl;
	}
	else
	{
		std::cout << "Not found: " << value << std::endl;
	}
	return it;
}

#endif

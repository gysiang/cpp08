/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:09:36 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/07 21:30:39 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);

		sp.addManyNumbers(10000);
		std::vector<int> nums = sp.getNumbers();

		std::cout << "First 10 numbers: ";
		for (size_t i = 0; i < 10 && i < nums.size(); i++) {
			std::cout << nums[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Last 10 numbers: ";
		for (size_t i = nums.size() - 10; i < nums.size(); i++) {
			std::cout << nums[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}

}

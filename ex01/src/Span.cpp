/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:09:39 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/07 21:29:37 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int n) : max_size(n) {};

Span::~Span() {};

std::vector<int> Span::getNumbers() const
{
	return (numbers);
}

void Span::addNumber(const int a)
{
	if (numbers.size() >= max_size)
		throw SpanIsFull();
	numbers.push_back(a);
}

void Span::addManyNumbers(const int a)
{
	std::srand(std::time(0));

	for (int i = 0; i < a; i++)
	{
		if (numbers.size() >= max_size)
			throw SpanIsFull();
		int randomNumber = std::rand() % 100 + 1;
		addNumber(randomNumber);
	}
}

int	Span::shortestSpan()
{
	// if there are less than 2 elements throw error
	if (numbers.size() < 2)
		throw NoSpanFound();
	// sort through the vector
	std::vector<int> sortedNum = numbers;
	std::sort(sortedNum.begin(), sortedNum.end());

	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 1; i < sortedNum.size(); ++i)
	{
		int span = sortedNum[i] - sortedNum[i - 1];
		if (span < minSpan)
		{
			minSpan = span;
		}
	}
	return (minSpan);
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw NoSpanFound();
	int min_value = *std::min_element(numbers.begin(), numbers.end());
	int max_value = *std::max_element(numbers.begin(), numbers.end());
	return (max_value - min_value);
}

char const *Span::SpanIsFull::what(void) const throw() {
	return ("Span is Full.");
}

char const *Span::NoSpanFound::what(void) const throw() {
	return ("There are no numbers stored or no span is found.");
}

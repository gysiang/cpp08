/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:09:07 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/07 21:29:10 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <cstdlib>
#include <ctime>

class Span
{

	private:
		std::vector<int> numbers;
		unsigned int max_size;

	public:
		Span(unsigned int n);
		~Span();

		void addNumber(const int a);
		void addManyNumbers(const int a);
		int shortestSpan();
		int longestSpan();

		std::vector<int> getNumbers() const;


		class SpanIsFull: public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};

		class NoSpanFound: public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};

};

#endif

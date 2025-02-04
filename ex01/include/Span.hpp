/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:09:07 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/04 14:33:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
    public:
        Span(unsigned int n);
        ~Span();

        void addNumber(const int a);
        void shortestSpan();
        void longestSpan();

        class SpanIsFull: public std::exception {
            public:
            	virtual char const	*what(void) const throw();
        }

        class NoSpanFound: public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};

    private:
        unsigned int max_size;
}

#endif
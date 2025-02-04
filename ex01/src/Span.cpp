/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:09:39 by gyong-si          #+#    #+#             */
/*   Updated: 2025/02/04 14:11:51 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

char const *Span::SpanIsFull::what(void) const throw() {
	return ("Span is Full.");
}

char const *Span::NoSpanFound::what(void) const throw() {
	return ("There are no numbers stored or no span is found.");
}
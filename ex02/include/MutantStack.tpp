/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:28:18 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/11 22:00:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {};

template <typename T>
MutantStack<T>::~MutantStack() {};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}

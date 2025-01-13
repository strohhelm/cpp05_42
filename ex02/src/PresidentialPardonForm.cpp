/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:12:26 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/13 13:14:06 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default target") {}


//Value constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5, target)
{
	// std::cout<<*this<<"was constructed!"<<std::endl;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& src) : AForm(src) {}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm(){}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	_isExecutable(executor.getGrade());
	std::cout	<< DG<<_target
				<<G<<" has been pardoned by "
				<<C<<"Zaphod Beeblebrox"
				<<X<<std::endl;
	
}

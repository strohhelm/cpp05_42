/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:20:50 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/16 17:45:57 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"


/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Bureaucrat::Bureaucrat()
	:_name("<default>"), _grade(150){};
/*----------------------------------------------------------------------------*/

//Value constructor
Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout<<*this<<" was constructed!\n";
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

// Default destructor
Bureaucrat::~Bureaucrat(){
	std::cout<<*this<<D<<" was destructed!\n"<<X;
}


/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31mERROR! Grade too high! max value: 1\n\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31mERROR! Grade too low! min value: 150\n\033[0m");
}

/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		{
			this->_grade = src.getGrade();
		}
	return *this;
}


// Insertion assignment operator overload
std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &src)
{
	ostream << Y<<src.getName() << X<< ", bureaucrat grade " <<B<< src.getGrade()<<X<<".";
	return ostream;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

std::string	Bureaucrat::getName(void) const{
	return (_name);
}


unsigned int	Bureaucrat::getGrade(void) const{
	return (_grade);
}
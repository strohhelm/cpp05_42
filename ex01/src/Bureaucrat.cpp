/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:20:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/13 15:37:06 by pstrohal         ###   ########.fr       */
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
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	// std::cout<<*this<<" was constructed!\n";
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

// Default destructor
Bureaucrat::~Bureaucrat(){}


/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
	return ("\033[31mBUREAUCRAT ERROR! Grade too high! max value: 1\n\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
	return ("\033[31mBUREAUCRAT ERROR! Grade too low! min value: 150\n\033[0m");
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

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout	<<DR<<_name<<R
					<<" couldn't sign "
					<<DR<<form.getName()<<R
					<<" because "
					<< e.what();
		return ;
	}
	std::cout<<DG<<_name <<G<< " signed "<< DG<<form.getName()<<X<<std::endl;
}

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

// - - - - - - GETTERS -  - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string	Bureaucrat::getName(void) const{
	return (_name);
}


int	Bureaucrat::getGrade(void) const{
	return (_grade);
}
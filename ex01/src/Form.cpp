/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:55:25 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/09 12:39:08 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Form.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Form::Form()
	:_name("<default from 0815>"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExecute(150){};

//Value constructor
Form::Form(std::string name, int gradeSign, int gradeExecute)
	:_name(name),
	 _isSigned(false),
	 _gradeToSign(gradeSign),
	 _gradeToExecute(gradeExecute)
{
	check_valid(gradeSign, gradeExecute);
	// std::cout<<*this<<"was constructed!\n";
}

// Copy constructor
Form::Form(const Form& src)
:_name(src._name),
	_isSigned(false),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute)
{
	//safety only for accidental invalid src values
	check_valid(_gradeToSign, _gradeToExecute);
}
// Default destructor
Form::~Form(){}

/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("\033[31mFORM ERROR! Grade too high!\n\033[0m");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("\033[31mFORM ERROR! Grade too low!\n\033[0m");
}

const char *Form::AlreadySignedException::what(void) const throw()
{
	return ("\033[31mFORM ERROR! This form is already signed!\n\033[0m");
}

/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload is deleted!

// Insertion assignment operator overload
std::ostream &operator<<(std::ostream &ostream, const Form &src)
{
	ostream << "Form name: "<<Y<<src.getName()<< X<<" | ";
	ostream << "Signed: " << B<<src.getSigned()<<X<<" | ";
	ostream << "Grade to Sign: " << B<<src.getGradeSign()<<X<<" | ";
	ostream << "Grade to Execute: " << B<<src.getGradeExecute()<<X<<" ";
	return ostream;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void Form::beSigned(Bureaucrat &Bur)
{
	if (Bur.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else if (_isSigned)
		throw Form::AlreadySignedException();
	_isSigned = true;
}

// - - - - - - GETTERS -  - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string	Form::getName(void) const
{
	return (_name);
}

std::string	Form::getSigned(void) const
{
	if (_isSigned)
		return ("Yes");
	return ("No ");
}
int	Form::getGradeSign(void) const
{
	return (_gradeToSign);
}
int	Form::getGradeExecute(void) const
{
	return (_gradeToExecute);
	
}

void Form::check_valid(int gradeSign, int gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

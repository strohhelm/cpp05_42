/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:55:25 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/13 20:22:47 by pstrohal         ###   ########.fr       */
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


// //Value constructor
// Form::Form(std::string name, int grade) :_name(name)
// {
// 	if (grade < 1)
// 		throw Form::GradeTooHighException();
// 	else if (grade > 150)
// 		throw Form::GradeTooLowException();
// 	_grade = grade;
// 	std::cout<<*this<<" was constructed!\n";
// }

// Copy constructor
Form::Form(const Form& src)
:_name(src._name),
	_isSigned(src._isSigned),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute){};


// Default destructor
Form::~Form(){}

/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("\033[31mERROR! Grade too high!\n\033[0m");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("\033[31mERROR! Grade too low!\n\033[0m");
}

/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload
Form& Form::operator=(const Form &src)
{
	if (this != &src)
		{
			Form f(src);
		}
	return *this;
}


// Insertion assignment operator overload
std::ostream &operator<<(std::ostream &ostream, const Form &src)
{
	ostream << "Form name: "<<Y<<src.getName()<< X<<"\n";
	ostream << "Signed: " << B<<src.getSigned()<<X<<"\n";
	ostream << "Grade to Sign: " << B<<src.getGradeSign()<<X<<"\n";
	ostream << "Grade to Execute: " << B<<src.getGradeExecute()<<X<<"\n";
	return ostream;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

std::string	Form::getName(void) const
{
	return (_name);
}

std::string	Form::getSigned(void) const
{
	if (_isSigned)
		return ("Yes!");
	return ("No!");
}
int	Form::getGradeSign(void) const
{
	return (_gradeToSign);
}
int	Form::getGradeExecute(void) const
{
	return (_gradeToExecute);
	
}

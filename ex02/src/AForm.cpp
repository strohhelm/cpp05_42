/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:55:25 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/09 14:37:44 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/AForm.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
AForm::AForm()
	:_name("<default from 0815>"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExecute(150){};

//Value constructor
AForm::AForm(std::string name, int gradeSign, int gradeExecute, std::string target)
	:_name(name),
	 _isSigned(false),
	 _gradeToSign(gradeSign),
	 _gradeToExecute(gradeExecute),
	 _target(target)
{
	_check_valid(gradeSign, gradeExecute);
	std::cout<<*this<<"was constructed!\n";
}

// Copy constructor
AForm::AForm(const AForm& src)
:_name(src._name),
	_isSigned(false),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute),
	_target(src._target)
{
	//safety only for accidental invalid src values
	_check_valid(_gradeToSign, _gradeToExecute);
}
// Default destructor
AForm::~AForm(){}

/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("\033[31mERROR! Grade too high!\033[0m");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("\033[31mERROR! Grade too low!\033[0m");
}

const char *AForm::AlreadySignedException::what(void) const throw()
{
	return ("\033[31mERROR! This Aform is already signed!\033[0m");
}
const char *AForm::NotSignedException::what(void) const throw()
{
	return ("\033[31mERROR! This Form is not signed!\033[0m");
}

/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload is deleted!

// Insertion assignment operator overload
std::ostream &operator<<(std::ostream &ostream, const AForm &src)
{
	ostream << "AForm name: "<<Y<<src.getName()<< X<<" | ";
	ostream << "Signed: " << B<<src.getSigned()<<X<<" | ";
	ostream << "Grade to Sign: " << B<<src.getGradeSign()<<X<<" | ";
	ostream << "Grade to Execute: " << B<<src.getGradeExecute()<<X<<" ";
	return ostream;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */
void AForm::_check_valid(int gradeSign, int gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat &Bur)
{
	if (Bur.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else if (_isSigned)
		throw AForm::AlreadySignedException();
	_isSigned = true;
}
void	AForm::_isExecutable(int grade) const
{
	if (!_isSigned)
		throw AForm::NotSignedException();
	else if (grade > _gradeToExecute)
		throw AForm::GradeTooLowException();
}
// - - - - - - GETTERS -  - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string	AForm::getName(void) const
{
	return (_name);
}

std::string	AForm::getSigned(void) const
{
	if (_isSigned)
		return ("Yes");
	return ("No ");
}
int	AForm::getGradeSign(void) const
{
	return (_gradeToSign);
}
int	AForm::getGradeExecute(void) const
{
	return (_gradeToExecute);
	
}

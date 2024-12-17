/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:57:47 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/17 21:00:53 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default target") {}


//Value constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout<<*this<<"was constructed!"<<std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& src) : AForm(src) {}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm(){}

/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload is deleted!

// Insertion assignment operator overload

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	std::ofstream	outFile;
	std::string		outname = _target + "_shrubbery";

	try {_isExecutable(executor.getGrade());}
	catch (std::exception &e){
		std::cout	<<DR<<executor
					<<R<<" could not sign "
					<<DR<<_name
					<<R<<" reason: "<<DR
					<<e.what()
					<<std::endl;
		return;
	}
	
	try {
		outFile.open(outname, std::ios::trunc);
		if (!outFile.is_open())
			throw "failure!";
	}
	catch(...){std::cout<<DR<<"Oh opening the file failed!"<<std::endl<<X;std::exit(1);}

	outFile<< "         " << Y << "*" << X << "\n";
	outFile<< "        " << L << "/\\\\" << X << "\n";
	outFile<< "       " << G << "/  \\\\" << X << "\n";
	outFile<< "      " << L << "/ " << R << "o" << L << "  \\\\" << X << "\n";
	outFile<< "     " << G << "/____\\\\" << X << "\n";
	outFile<< "    " << L << "/\\  " << R << "o" << L << "  /\\" << X << "\n";
	outFile<< "   " << G << "/  \\\\" << L << "____" << G << "/  \\\\" << X << "\n";
	outFile<< "  " << L << "/ " << DR << "o" << L << "   " << G << "\\" << L << "  o  " << G << "\\\\" << X << "\n";
	outFile<< " " << G << "/____" << L << "____" << G << "\\" << X << "\n";
	outFile<< "        " << Y << "|" << X << "\n";
	outFile<< "        " << Y << "|" << X << "\n";
	outFile<< "\n" << D << "   Merry " << R << "C" << DG << "h" << DR << "r" << P << "i" << LP << "s" << L << "t" << D << "m" << Y << "a" << O << "s" << X << "!" << "\n\n";

	outFile.close();
	std::cout<<DG<<executor.getName()<<G" executed"<<DG<<_name;
}
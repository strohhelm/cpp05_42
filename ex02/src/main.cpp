/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/09 15:08:56 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>



int main (void)
{
	Bureaucrat	Zaphod("Zaphod Beeblebrox", 1);
	Bureaucrat	Servant("Servant", 25);
	Bureaucrat	Herbert("Herbert", 146);
	Bureaucrat	Norbert("Norbert", 150);

	ShrubberyCreationForm	Form1("Douglas Adams");
	RobotomyRequestForm		Form2("Wierd Schematic");
	PresidentialPardonForm	Form3("Freaking Crazy Criminal");
	std::cout<<std::endl;
	Herbert.executeForm(Form1);
	Norbert.signForm(Form1);
	Herbert.incrementGrade();
	Herbert.signForm(Form1);
	Herbert.executeForm(Form1);
	std::cout<<std::endl;
	
	Zaphod.executeForm(Form3);
	Herbert.signForm(Form3);
	Servant.signForm(Form3);
	Zaphod.executeForm(Form3);
	std::cout<<std::endl;

	Herbert.executeForm(Form2);
	Herbert.signForm(Form2);
	Zaphod.signForm(Form2);
	Herbert.executeForm(Form2);
	std::cout<<"--"<<std::endl;
	Servant.executeForm(Form2);
	
	
	
	
	return 0;
}
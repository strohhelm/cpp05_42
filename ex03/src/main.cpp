/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/12 14:59:00 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"
#include <iostream>
#include <string>
#include <cstdlib>



int main (void)
{
	Intern someRando;
	std::string Form[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm", "SomeRandomForm"};
	std::string target[] = {"Bender", "Lulatsch", "Hieronimos", "Nathanael"};
	Bureaucrat Zaphod("Zaphod Beeblebrox", 1);
	AForm* p;

	for (int i = 0; i < 4; i++)
	{
		p = someRando.makeForm(Form[i], target[i]);
		if (p)
		{
			std::cout<<*p<<std::endl;
			Zaphod.signForm(*p);
			Zaphod.executeForm(*p);
			delete p;
			std::cout <<"\n==============\n"<<std::endl;
		}
	} 
	return 0;
}
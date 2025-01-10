/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/10 21:38:03 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main (void)
{
	Form f("Wierd Form", 50, 4);
	Bureaucrat Frank("Frank", 51);
	try {
		//tries to construct a Form with level too low
		Form g("invalid form", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what();
	}
	std::cout<<"\n=======\n"<<std::endl;
	// Form has higher grade to sign than franks grade is, so form wasnt signed
	
	std::cout<<f<<std::endl<<Frank<<std::endl;
	Frank.signForm(f);
	std::cout<<"\n=======\n"<<std::endl;
	
	Form a;
	// a = f; //not possible bc deleted copy assignment operator
	
	Form b ("Most Important Form", 1, 1);
	Frank.signForm(b);
	Bureaucrat Dieter("Dieter", 1);
	Dieter.signForm(b);
	Dieter.signForm(b);
	
	std::cout<<"\n=======\n"<<std::endl;
	Dieter.decrementGrade();
	std::cout<<Dieter<<std::endl;
	Form d(b); //copy constructor does not copy sign satus, always instanciates with false
	std::cout<<b<<std::endl;
	std::cout<<d<<std::endl;
	Dieter.signForm(d);
	Dieter.incrementGrade();
	std::cout<<Dieter<<std::endl;
	Dieter.signForm(d);
	return (0);
}
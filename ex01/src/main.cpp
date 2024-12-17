/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/17 19:05:37 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main (void)
{
	Form f("Wierd Form", 50, 4);
	Bureaucrat Frank("Frank", 51);
	try {
		Form g("invalid form", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what();
	}
	
	Frank.signForm(f);
	std::cout<<f<<std::endl;
	Form a;
	// a = f; //not possible bc deleted copy assignment operator
	
	Form b ("Most Important Form", 1, 1);
	Frank.signForm(b);
	Bureaucrat Dieter("Dieter", 1);
	Dieter.signForm(b);
	Dieter.signForm(b);
	Dieter.decrementGrade();
	std::cout<<Dieter<<std::endl;
	Form d(b);
	std::cout<<b<<std::endl;
	std::cout<<d<<std::endl;
	Dieter.signForm(d);
	Dieter.incrementGrade();
	std::cout<<Dieter<<std::endl;
	Dieter.signForm(d);
	return (0);
}
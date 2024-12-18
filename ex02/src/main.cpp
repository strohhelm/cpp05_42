/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/18 15:45:26 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include <iostream>
#include <string>




int main (void)
{
	Bureaucrat Herbert("Herbert", 5);
	ShrubberyCreationForm Form1("Douglas Adams");
	Herbert.executeForm(Form1);
	
	Herbert.signForm(Form1);
	Herbert.executeForm(Form1);
	
	return 0;
}
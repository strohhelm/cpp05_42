/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:11:16 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:40 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"


AForm *Intern::makeForm(std::string name, std::string target)
{
	static const std::string arr[]  = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	static const std::function<AForm *(std::string)> Form[] = {
		[=](std::string){return new ShrubberyCreationForm(target);},
		[=](std::string){return new RobotomyRequestForm(target);},
		[=](std::string){return new PresidentialPardonForm(target);}
	};
	int arr_len = sizeof(arr) / sizeof(std::string);
	for (int i = 0; i < arr_len; i++)
	{
		if (name == arr[i])
		{
			std::cout<<G<<"Intern creates " <<DG<<name<<X<<std::endl;
			return (Form[i](target));
		}
	}
	std::cout<<R<<"Intern doesnt know what a "<<DR<<name<<" is and panics!"<<X<<std::endl;
	return nullptr;
}
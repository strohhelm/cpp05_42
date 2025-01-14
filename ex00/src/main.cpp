/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/14 13:32:24 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main (void)
{
	Bureaucrat Inge("Inge", 2);
	Bureaucrat Anton("Anton", 26);
	Bureaucrat Peter("Peter", 150);
	
	std::cout<<R<<"\n------------------\n"<<X<<std::endl;
	std::cout<<M<<"before incrementing:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	Peter.incrementGrade();
	Anton.incrementGrade();
	Inge.incrementGrade();
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n"<< Anton <<"\n"<< Inge<<"\n";
	
	
	std::cout<<R<<"\n------------------\n"<<X<<std::endl;
	std::cout<<M<<"before decrementing:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	Peter.decrementGrade();
	Anton.decrementGrade();
	Inge.decrementGrade();
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	
	std::cout<<R<<"\n------------------\n"<<X<<std::endl;
	std::cout<<M<<"before decrementing too much:\n"<<X<< Peter<<"\n";
	try{Peter.decrementGrade();}
	catch (std::exception &e){std::cout<<e.what();}
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n";
	
	std::cout<<R<<"\n------------------\n"<<X<<std::endl;
	Inge.incrementGrade();
	std::cout<<M<<"before incrementing too much:\n"<<X<< Inge<<"\n";
	try{Inge.incrementGrade();}
	catch (std::exception &e){std::cout<<e.what();}
	std::cout<<M<<"after:\n"<<X<< Inge<<"\n";
	std::cout<<R<<"\n------------------\n"<<X<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout<<DG<<"Now you can try for another "<<M<< 4 - i <<DG<< " times to make a Bureaucrat! Enter a grade that "<<Y<<"Bobby "<<DG<<"should have:" <<X<<std::endl;
		try{
			std::string input ;
			int grade;
			std::cin>>input;
			grade = std::stoi(input);
			Bureaucrat bobby("Bobby", grade);
		}
		catch (std::exception& e){std::cout<<e.what()<<std::endl;}
	}
	return (0);
}
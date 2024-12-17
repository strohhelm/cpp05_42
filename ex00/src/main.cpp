/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:22:50 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/16 17:45:40 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main (void)
{
	Bureaucrat Inge("Inge", 2);
	Bureaucrat Anton("Anton", 26);
	Bureaucrat Peter("Peter", 150);
	try {
		Bureaucrat Peter("Hans", 150);}
	catch (std::exception &e){
		std::cout<<e.what();}
	try {
		Bureaucrat Peter("Heinrich", 120);}
	catch (std::exception &e){
		std::cout<<e.what();}
		
	try {
		Bureaucrat Herbert("Herbert", 151);}
	catch (std::exception &e){
		std::cout<<e.what();}
		
	try {
		Bureaucrat Friedrich("Friedrich", 0);}
	catch (std::exception &e){
		std::cout<<e.what();}
		
	try {
		Bureaucrat Hildegard("Hildegard", -15);}
	catch (std::exception &e){
		std::cout<<e.what();}

	std::cout<<R<<"\n------------------\n"<<X;
	std::cout<<M<<"before incrementing:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	Peter.incrementGrade();
	Anton.incrementGrade();
	Inge.incrementGrade();
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n"<< Anton <<"\n"<< Inge<<"\n";
	
	
	std::cout<<R<<"\n------------------\n"<<X;
	std::cout<<M<<"before decrementing:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	Peter.decrementGrade();
	Anton.decrementGrade();
	Inge.decrementGrade();
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n" << Anton <<"\n"<< Inge<<"\n";
	
	std::cout<<R<<"\n------------------\n"<<X;
	std::cout<<M<<"before decrementing too much:\n"<<X<< Peter<<"\n";
	try{Peter.decrementGrade();}
	catch (std::exception &e){std::cout<<e.what();}
	std::cout<<M<<"after:\n"<<X<< Peter<<"\n";
	
	std::cout<<R<<"\n------------------\n"<<X;
	Inge.incrementGrade();
	std::cout<<M<<"before incrementing too much:\n"<<X<< Inge<<"\n";
	try{Inge.incrementGrade();}
	catch (std::exception &e){std::cout<<e.what();}
	std::cout<<M<<"after:\n"<<X<< Inge<<"\n";
	return (0);
}
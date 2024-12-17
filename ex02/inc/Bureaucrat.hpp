/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:30:59 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/17 21:10:33 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

// //forward declaration
// class AForm ;

// class Bureaucrat
// {
// 	public:
// 		//default AForm
// 		Bureaucrat();
// 		Bureaucrat(std::string name, int grade);
// 		Bureaucrat(const Bureaucrat& src);
// 		~Bureaucrat();
// 		Bureaucrat& operator=(const Bureaucrat& src);
		
// 		//member functions
// 		void			signForm(AForm &AForm);
// 		std::string		getName(void) const;
// 		int	getGrade(void) const;
// 		void			incrementGrade(void);
// 		void			decrementGrade(void);
		
// 		//exceptions
// 		class GradeTooHighException : public std::exception
// 		{
// 				virtual const char *what() const throw();
// 		};
// 		class GradeTooLowException : public std::exception
// 		{
// 				virtual const char *what() const throw();
// 		};

// 	protected:
// 		const std::string _name;
// 		int _grade;
// };
// std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
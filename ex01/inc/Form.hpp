/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:47:43 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/09 12:39:24 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS
#define COLOURS
#define X	"\033[0m"
#define R	"\033[31m"
#define P	"\033[38;2;255;20;200m"
#define LP	"\033[38;2;200;50;160m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;155;220;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"
#endif

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

//forward declaration
class Bureaucrat ;

class Form
{
	public:
		Form();
		Form(const Form& src);
		Form(std::string name, int gradeSign, int gradeExecute);
		~Form();
		Form& operator=(const Form &src) = delete;
		
		class GradeTooHighException : public std::exception
				{virtual const char *what(void) const throw();};
		class GradeTooLowException : public std::exception
				{virtual const char *what(void) const throw();};
		class AlreadySignedException : public std::exception
				{virtual const char *what(void) const throw();};

		std::string	getName(void) const;
		std::string	getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;

		void		beSigned(Bureaucrat &Bur);
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		void 				check_valid(int gradeSign, int gradeExecute);
};
std::ostream &operator<<(std::ostream &ostream, const Form &src);
#endif
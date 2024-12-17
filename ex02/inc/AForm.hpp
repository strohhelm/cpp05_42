/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:47:43 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/16 18:22:56 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS
#define COLOURS
#define X	"\033[0m"
#define R	"\033[31m"
#define DR	"\033[38;2;255;0;0m"
#define DG	"\033[38;2;0;240;80m"
#define P	"\033[38;2;255;20;200m"
#define LP	"\033[38;2;200;50;160m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;160;255;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"
#define LG  "\033[92m"             // Light Green
#define CY  "\033[96m"             // Light Cyan

#endif


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

//forward declaration
class Bureaucrat ;

class AForm
{
	public:
		AForm();
		AForm(const AForm& src);
		AForm(std::string name, int gradeSign, int gradeExecute, std::string target);
		~AForm();
		AForm& operator=(const AForm &src) = delete;
		
		class GradeTooHighException : public std::exception
				{virtual const char *what(void) const throw();};
		class GradeTooLowException : public std::exception
				{virtual const char *what(void) const throw();};
		class AlreadySignedException : public std::exception
				{virtual const char *what(void) const throw();};
		class NotSignedException : public std::exception
				{virtual const char *what(void) const throw();};

		std::string	getName(void) const;
		std::string	getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;

		void			beSigned(Bureaucrat &Bur);
		virtual void	execute(Bureaucrat const & executor) = 0;

	protected:
		void				_isExecutable(int grade);
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		const std::string	_target;
};
void check_valid(int gradeSign, int gradeExecute);
std::ostream &operator<<(std::ostream &ostream, const AForm &src);
#endif
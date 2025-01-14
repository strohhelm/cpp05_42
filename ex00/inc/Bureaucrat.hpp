/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:30:59 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/14 13:28:36 by pstrohal         ###   ########.fr       */
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

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();

		Bureaucrat&		operator=(const Bureaucrat& src);
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);

		class GradeTooHighException : public std::exception
		{
				const char *what() const noexcept override;
		};
		class GradeTooLowException : public std::exception
		{
				const char *what() const noexcept override;
		};

	protected:
		const std::string _name;
		unsigned int _grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
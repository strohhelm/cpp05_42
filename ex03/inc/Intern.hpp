/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:00:11 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/13 16:16:00 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <functional>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public: 
		Intern() = default;
		~Intern() = default;
		Intern(Intern &src) = delete;
		Intern& operator=(const Intern &src) = delete;
		
		AForm* makeForm(std::string name, std::string target);
	private:
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:12:56 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/13 13:12:33 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include <fstream>

#ifndef SHRUBBERYCREATION_FORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


class ShrubberyCreationForm : public AForm
{
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &src) = delete;
	
	void	execute(Bureaucrat const & executor) const override;
};

#endif
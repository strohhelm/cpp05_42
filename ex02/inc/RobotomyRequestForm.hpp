/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:12:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/12/17 19:18:23 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


class RobotomyRequestForm : public AForm
{
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm &src) = delete;
	
	void	execute(Bureaucrat const & executor) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:57:21 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/14 13:45:54 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "default target") {}


//Value constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45, target)
{
	// std::cout<<*this<<"was constructed!"<<std::endl;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& src) : AForm(src) {}

// Default destructor
RobotomyRequestForm::~RobotomyRequestForm(){}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
	std::srand(std::time(nullptr));
	static bool chance = rand() % 2;

	_isExecutable(executor.getGrade());
	std::cout	<<O
				<<O<<"VRRRRRRRRR— CLUNK... uh-oh. BRRRRRRRRRRZZZT— THUNK-THUNK-THUNK...\n"<<X
				<<M<<"‘C’mon, you bucket of bolts!’"<<O<<" ... DZZZZZT-DZZZZZT... \n"<<X
				<<M<<"‘Why do you always jam on Mondays?’"<<O<<" ... WHIRRRRRRR— SKREEEEEEE!... \n"<<X
				<<M<<"‘No, no, no! That’s not a good noise!’"<<O<<"... KRRRRRRCHHHHHH— sputter... \n"<<X
				<<M<<"‘I swear, this thing has a mind of its own.’"<<O<<" ... BRRRRRRRRRR-KRRRCHHH-CHNK-CHNK... \n"<<X
				<<"pause...\n"
				<<M<<"‘I’m not paid enough for this.’"<<O<<" ... VRRRRRRRRRRZZZ— THUD..."<<X<<std::endl;

	if (chance == true)
	{
		std::cout	<<M<<"OMG finally it worked!! Hurray!\n\n"
					<<DG<<_target<<G<<" has been robotomized successfully!"<<X<<std::endl;
		chance = false;
	}
	else
	{
		std::cout	<<M<<"‘Oh, great. Now you’re stuck.’\n\n"
					<<DR<<_target<<R<<" has not been robotomized. It failed miserably!"<<X<<std::endl;
		chance = true;
	}
	return ;
}
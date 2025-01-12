/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:57:47 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/10 21:46:53 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default target") {}


//Value constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137, target){}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& src) : AForm(src) {}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm(){}

/* ************************************************************************** */
/*		EXCEPTION OVERLOADS													  */
/* ************************************************************************** */


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

// Copy assignment operator overload is deleted!

// Insertion assignment operator overload

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outFile;
	std::string		outname = _target + "_shrubbery.txt";

	_isExecutable(executor.getGrade());

	try {
		outFile.open(outname, std::ios::trunc);
		if (!outFile.is_open())
			throw "failure!";
	}
	catch(...){std::cout<<DR<<"Oh opening the file failed!"<<std::endl<<X;std::exit(1);}
	
	outFile<<"                                 |L   \n\
	                                ,' `  \n\
	                               /.o `,    \n\
	                               `, |-`,   \n\
	                              -',    '   \n\
	                             `,'_)   '\n\
	                             ,'    `-`,  \n\
	                            _`o,-   (_) \n\
	                           '_ '    o  `-,\n\
	                           /   ,-L   `-' \n\
	                          _`-`_     ,  `'.\n\
	                         ;.  (,'  `| `.-. \\\n\
	                         ,``_'    (_)  o `'\n\
	                        ,` '_  ,|\\   o   _ \n\
	                       /..-(_)' |','..-`(_)-`\n\
	                                |  |        \n\
	                       __--__ --'  `--__ "<<std::endl;
	
	outFile<<"\n\
	                            / \\\n\
	                           J   L\n\
	                     ------'   `------\n\
	                      `.           .'\n\
	                        `.       .'\n\
	                         /       \\\n\
	                        J   .'.   L\n\
	                        |.' | |`. |\n\
	                        '   | |//`\n\
	                       .-.-. _ _ _  |\n\
	                      /| | |(/|||||_|\n\
	                      _| | |/-'`'`'/|\n\
	                     /\\/|   o  + __.- /(\n\
	                    |  '|/| -|/(||||(_V_)\n\
	                    `._.| |/_/_)`-'' ///_<\n\
	                        >///\\\\\\//==<<<=\n\
	                      _ >>>\\\\>//<__<<<-'\n\
	                     / `-._>>>.-'   |<<\n\
	                    J     _.))     /<<<<\n\
	                v   |  .-'' |/__   |<<<||_\n\
	             \\\\||| `-> _/ / \\  `-<<<<<<*** **\n\
	           \\\\**|||| /    /><<\\    \\<<<********\n\
	             >>**////    /<>>>>`.   |****** <<_\\_\n\
	              >>***/_  .'>>><>>><\\  |*****<<<|_|_|\n\
	           .-' >***>>|/>//>><\\**|/\\|***<<<<<|_|_|\n\
	          \\.-' \\***<<<>>///\\\\******<<>><>>*****\\\\\\-.-.-<<<\n\
	            \\-'_.J--.<<<<>><<****>>///(\\|\\)|(//<<<,\n\
	           (   )|(-'  (>>><<****<\\)_.><<<<-\n\
	          .-`-'_)\\-.--.\\>>><*****//||>(\\ (\\_.\\<<<< .-\n\
	         .' _.-'()\\`.**>>//****<<<>><<`-``-``-`<<.-' _\n\
	     .--'_.'>>>><>>`.\\***(`._.-.<<<<<<(_____``<.'_.-' |<\n\
	    /-'   >><<>>>>>//<>>>/|\\ |  /<<>><|     `-._/      L\n\
	           ->>.<>><>>>>>/|| \\|.'|<<>\\|  .-----'|._    |\n\
	   .--._ >><.' \\>>>>>>///||  |  |<<>><|.'       )-----'`.\n\
	   |   _.--'    |///////\\\\-----'<>>>>>==\\<><>>>>< ===::===\\'\n\
	  /    .'>><>>)_ -->>>>===::::==>>******|/>>>/  `.  .--.`-.|\n\
	 /    />>>>>>>'`'`'`-`<===:::<<< *****(\\ .-.<(   )-(   )\n\
	/.'| />>>>>>>.-.-.-._\\|> =//||\\******-'@--'>>`-'<<\\`-'`._\n\
	   |/>>>>>>>-'`'`'`-.\\>>==<<<<***.'\\ |_|)_|<<<<<<< \\_ `- `.\n\
	  / >>>>>>.-..''`'`-.\\.->>>><<>(  /(\\\\/// <<<<<=    \\_ .-'\n\
	 /-' >>>----\\((::::)))// /><>>**|   (\\\\///<<<<---.\n\
	|.'  >>>| | | |\\__.'.'>>>>>****.'/ (\\\\////<<<<-`-`\n\
	 `   >>>|-|-| |>>>>>>>>>>**** .--. /_\\\\////<<<|_|_|<<<\n\
	     >>>|_|_|/>><>><<>*****vv(    V  `.\\<<<>>>|_|_|<<<<\n\
	     ////>>>>>`.>>>>******>>><`--'\\   /<<<<<>>>>><<<<<<<\n\
	     '' ///>>>>><<>>*****>>>><<<<<<`-'<<<<<<>><<<><<<<<<<\n\
	       ''    ->>>>><<>///>>>>><<<<<<\\\\\\><<<<<>>><<<<\\\n\
	               ////<<>><<<>>>><<<<>\\\\\\\\\\>><\\\\\\\\\n\
	              '' / ////////>>><<<\\\\\\\\\\<  \\\\ \\\\\n\
	                   /|| .////|||\\\\\\\\\\\n\
	                      (MMMMMMMMMMMMMMMMMMM)\n\
	                      |`----.MMMMMMMM.---'|\n\
	                      `---.____   ____.---'\n\
	                       |       '''       |\n\
	                       |                 |\n\
	                       |                 |\n\
	                       |                 |\n\
	                       |                 |\n\
	                       (                 )\n\
	                        `----._____.----'\n\n\n";
	
	outFile<<"                                    # #### ####\n";
	outFile<<"                                ### \\/#|### |/####\n";
	outFile<<"                               ##\\/#/ \\||/##/_/##/_#\n";
	outFile<<"                             ###  \\/###|/ \\/ # ###\n";
	outFile<<"                           ##_\\_#\\_\\## | #/###_/_####\n";
	outFile<<"                          ## #### # \\ #| /  #### ##/##\n";
	outFile<<"                           __#_--###`  |{,###---###-~\n";
	outFile<<"                                     \\ }{\n";
	outFile<<"                                      }}{\n";
	outFile<<"                                      }}{\n";
	outFile<<"                                 ejm  {{}\n";
	outFile<<"                                , -=-~{ .-^- _\n";
	outFile<<"                                      `}\n";
	outFile<<"                                       {\n\n\n"<<std::endl;
	
	outFile<<"                        ___\n";
	outFile<<"                  _,-'\"\"   \"\"\"\"`--.\n";
	outFile<<"               ,-'          __,,-- \\\n";
	outFile<<"             ,'    __,--\"\"\"\"dF      )\n";
	outFile<<"            /   .-\"Hb_,--\"\"dF      /\n";
	outFile<<"          ,'       _Hb ___dF\"-._,-'\n";
	outFile<<"        ,'      _,-\"\"\"\"   \"\"--..__\n";
	outFile<<"       (     ,-'                  `.\n";
	outFile<<"        `._,'     _   _             ;\n";
	outFile<<"         ,'     ,' `-'Hb-.___..._,-'\n";
	outFile<<"         \\    ,'\"Hb.-'HH`-.dHF\"\n";
	outFile<<"          `--'   \"Hb  HH  dF\"\n";
	outFile<<"                  \"Hb HH dF\n";
	outFile<<"                   \"HbHHdF\n";
	outFile<<"                    |HHHF\n";
	outFile<<"                    |HHH|\n";
	outFile<<"                    |HHH|\n";
	outFile<<"                    |HHH|\n";
	outFile<<"                    |HHH|\n";
	outFile<<"                    dHHHb\n";
	outFile<<"                  .dFd|bHb.\n";
	outFile<<"   ______       .dHFdH|HbTHb.    ____\n";
	outFile<<"  /      \\__,dHHFdHH|HHhoHHb.___/    \\\n";
	outFile<<"  ##########################################\n";
	outFile.close();
	}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:32:31 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/28 20:47:24 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat jalal("jalal", 10);
        Bureaucrat salim("salim", 10);
        Bureaucrat said("said", 10);

        ShrubberyCreationForm form("safi");
        RobotomyRequestForm aform("casa");
        PresidentialPardonForm aaaform("laayoune");

        jalal.signForm(form);
        jalal.executeForm(form);
        std::cout << " ---- ShrubberyCreationForm EXECUTED SUCCESSFULY ----" << std::endl;
        
        salim.signForm(aform);
        salim.executeForm(aform);
        std::cout << "---- RobotomyRequestForm EXECUTED SUCCESSFULY ----" << std::endl;
        said.signForm(aaaform);
        said.executeForm(aaaform);
        std::cout << "---- PresidentialPardonForm EXECUTED SUCCESSFULY ----" << std::endl;


    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

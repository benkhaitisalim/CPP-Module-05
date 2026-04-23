/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:10:16 by bsalim            #+#    #+#             */
/*   Updated: 2025/12/30 16:08:04 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP 
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include <fstream>

#include <string>
class AForm;
class Bureaucrat 
{
    private : 
    const std::string name;
    int grade;
    public :
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
    const std::string& getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    void signForm(AForm &form);
    void executeForm(AForm const & form);
    class GradeTooLowException : public std::exception 
    {
        public:
        virtual const char* what() const throw();
    };
    class GradeTooHighException : public std::exception 
    {
        public:
        virtual const char* what() const throw();
    };
};

std::ostream&  operator<<(std::ostream& os, const Bureaucrat& b);
#endif
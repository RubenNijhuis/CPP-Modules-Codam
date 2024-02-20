/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 18:13:21 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 20:06:10 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);

        ~Intern();
        
        AForm *makeForm(const std::string &formName, const std::string &target);

        //////////////////////////////////////////////////////////////////////////////

		// Exceptions
        class UnknowFormPassedException : public std::exception {
            virtual const char *what() const throw();
        };

    private:
        AForm *Shrubbery(const std::string &target);
        AForm *Presidential(const std::string &target);
        AForm *Robotomy(const std::string &target);
};

#endif

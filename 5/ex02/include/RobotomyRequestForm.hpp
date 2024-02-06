/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:38:31 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 16:32:22 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
    public:
	    RobotomyRequestForm(void);
	    RobotomyRequestForm(std::string name);

	    RobotomyRequestForm(const RobotomyRequestForm &other);
	    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

	    virtual ~RobotomyRequestForm();
        
        //////////////////////////////////////////////////////////////////////////////
        
	    void	execute(Bureaucrat const & executor) const;
};

#endif
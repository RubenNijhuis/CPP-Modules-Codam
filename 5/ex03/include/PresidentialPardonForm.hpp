/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:38:31 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 17:16:24 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
    public:
	    PresidentialPardonForm(void);
	    PresidentialPardonForm(std::string name);

	    PresidentialPardonForm(const PresidentialPardonForm &other);
	    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

	    virtual ~PresidentialPardonForm();
        
        //////////////////////////////////////////////////////////////////////////////
        
	    void	execute(Bureaucrat const & executor) const;
};

#endif
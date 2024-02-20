/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:38:31 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 15:03:59 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
    public:
	    ShrubberyCreationForm(void);
	    ShrubberyCreationForm(std::string name);

	    ShrubberyCreationForm(const ShrubberyCreationForm &other);
	    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

	    virtual ~ShrubberyCreationForm();
        
        //////////////////////////////////////////////////////////////////////////////
        
	    void	execute(Bureaucrat const & executor) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:41:36 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/03 20:27:11 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	field_name[11];
	std::string contact[11];
	void print_head(std::string str);

public:
	Contact();
	~Contact();

	int		add_contact(void);
	void	show_contact_head(int i);
	void	show_contact(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 23:21:05 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/03 20:19:25 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class Phonebook
{
private:
	Contact		contact[8];
	int			index;
	int			search_get_index_num(void);

public:
	Phonebook();
	~Phonebook();

	void	prompt(void);
	void	add_contact(void);
	void	search_contact(void);
};

#endif

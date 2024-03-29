/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Channel.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:30:16 by rteles-f          #+#    #+#             */
/*   Updated: 2024/02/20 21:17:27 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANNEL_HPP
# define CHANNEL_HPP

# include <ft_irc.hpp>
# include <iostream>
# include <list>
# include <map>

class Client;
class Server;


class Channel {
	private:
		Server	*observer;
		std::list<Client> _clients;

	public:
		Channel();
		Channel(const Channel& tocopy);
		~Channel();

		Channel& operator=(const Channel& tocopy);
		std::list<Client>	getChannel(int socket);
		void	update(void);
		void	notifyObserver() {
			observer.
		}

} ;

# include "Client.hpp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:30:16 by rteles-f          #+#    #+#             */
/*   Updated: 2024/02/20 21:13:59 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

# include <ft_irc.hpp>
# include <iostream>
# include <list>
# include <map>

class Client;
class Channel;

class Server {
	private:
		bool					_online;
		std::map<int, Channel>	_channels;
		void	updateChannels(void);
		std::list<Client>	getChannel(int socket);

	public:
		Server();
		Server(const Server& tocopy);
		~Server();

		Server& operator=(const Server& tocopy);

		void	setup(void);
		void	online(void);
		void	offline(void);


} ;

#endif
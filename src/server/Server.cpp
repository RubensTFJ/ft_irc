/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:18:54 by rteles-f          #+#    #+#             */
/*   Updated: 2024/02/20 16:39:26 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

Server::Server()
{}

Server::Server(const Server& tocopy)
{}

Server::~Server()
{}

Server& Server::operator=(const Server& tocopy) {
	if (this == &tocopy)
		return (*this);
	/*
	to do;
	*/
	return (*this);
}

std::list<Client>	Server::getChannel(int channel) {
	
	return ()
}

void	Server::online(void){
	
	while (_online)
	{
		manageConnections();
		updateChannels();
	}
}

void	Server::offline(void){
	
}

void	changeChannel() {
	Server	main;

}

void	Server::updateChannels(void) {
	std::map<int, std::list<Channel>>::iterator	channel;

	for (channel = _channels.begin(); channel != _channels.end(); channel++) {
		channel.update();
	}
}
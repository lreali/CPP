/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:48:26 by ereali            #+#    #+#             */
/*   Updated: 2022/04/09 02:48:09 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	ft_replace(std::string buff, std::string to_replace, std::string to_add)
{
	std::size_t pos;

	while ((pos = buff.find(to_replace)) != std::string::npos)
	{
		buff.erase(pos, to_replace.size());
		buff.insert(pos, to_add);
	}
	return (buff);
}

int main(int argc, char **argv)
{
	std::string buff;
	std::string line;
	std::string name;

	if (argc != 4)
	{
			std::cout << "Please enter <filename> <to replace> <new string>" << std::endl;
			return (1);
	}
	if (argv[2][0] == '\0')
		return (std::cout << "Please enter <filename> <a non empty to_replace> <new string>" << std::endl, 1);
	std::ifstream ifs(argv[1]);
	if (ifs.fail())
	{
		std::cout << "Please enter <an existing filename> <to replace> <new string>" << std::endl;
		return (1);
	}
	while (std::getline(ifs, line))
			buff += line + '\n';
	if (!ifs.eof())
	{
		std::cout << "Reading Error" << std::endl;
		return (1);
	}
	ifs.close();
	buff = ft_replace(buff, argv[2], argv[3]);
	name = argv[1];
	name += ".replace";
	std::ofstream ofs(name, std::ios_base::out);
	if(ofs.fail())
		return(std::cout << "Create new file Faillure" << std::endl, 1);
	ofs << buff;
	ofs.close();
	return (0);
}

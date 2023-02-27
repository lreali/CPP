#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <string>
# include <iostream>

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		// Warlock(std::string const &name, std::string const &title);
		std::string const &getName() const;
		std::string const &getTitle() const;
		void introduce() const;
		void setTitle(std::string const & title);
		~Warlock();

	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock &operator=(Warlock const &other);
		std::string _name;
		std::string _title;
};
#endif

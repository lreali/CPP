#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		void setIdeas(std::string ideas);
		std::string getIdeas(int i);
		Brain &	operator=( Brain const & rhs );
		~Brain();

	private:
		std::string _ideas[100];
};


#endif /* *********************************************************** BRAIN_H */

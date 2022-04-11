#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		std::string getIdeas(void);
		void setIdeas(std::string ideas);
		Brain &	operator=( Brain const & rhs );
		~Brain();

	private:
		std::string _ideas[100];
};


#endif /* *********************************************************** BRAIN_H */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
#include "ATarget.hpp"
# include <string>
# include <iostream>
# include <map>

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &operator=(TargetGenerator const &other);

	public:
		std::map<std::string, ATarget *> _targets;
		TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &targetType);
		ATarget *createTarget(std::string const &targetType);
		virtual ~TargetGenerator();
};
#endif

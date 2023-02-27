#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::TargetGenerator(TargetGenerator const & src)
{}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other)
{
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	_targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &targetType)
{
	_targets.erase(targetType);
}

ATarget *TargetGenerator::createTarget(std::string const &targetType)
{
	std::map<std::string, ATarget *>::iterator it;
	it = _targets.find(targetType);
	if (it != _targets.end())
		return (it->second);
	return (NULL);
}

TargetGenerator::~TargetGenerator()
{}

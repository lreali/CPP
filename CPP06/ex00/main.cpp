#include "converter.hpp"

void test_converter(std::string p_text)
{
	Converter tmp_converter = Converter(p_text);

	std::cout << "Base : [" << p_text << "]" << std::endl;
	tmp_converter.printChar();
	tmp_converter.printInt();
	tmp_converter.printFloat();
	tmp_converter.printDouble();
}

int main()
{
	test_converter("Yolo");
	std::cout << "----------" << std::endl;

	test_converter("a");
	std::cout << "----------" << std::endl;

	test_converter("0");
	std::cout << "----------" << std::endl;

	test_converter("12");
	std::cout << "----------" << std::endl;

	test_converter("123");
	std::cout << "----------" << std::endl;

	test_converter("1234.0");
	std::cout << "----------" << std::endl;

	test_converter("nan");
	std::cout << "----------" << std::endl;

	test_converter("-inff");
	std::cout << "----------" << std::endl;

	test_converter("1234.1f");

}

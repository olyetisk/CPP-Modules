#include <string>
#include <iostream>
#include <fstream>

int replace(char **argv, std::string str)
{
	std::ofstream	s1; //yaazma işlemi yapar
	size_t			a;


	s1.open((std::string(argv[1]) + ".replace").c_str());
	if (!s1.is_open()) //açık ve ya değil kontrolü değilse false döndürür
		return (1);
	for (size_t i = 0; i < str.size(); i++)
	{
		a = str.find(argv[2], i);
		if (a == i && a != std::string::npos) //kelimenin bulunudugu indeks şuanki indeks ile aynı mı 
		{
			s1 << argv[3]; //bulunduğu yere  av[3] yazar
			i += std::string(argv[2]).size() - 1; //kelimenin uzunluğu kadar ileri gider
		}
		else
			s1 << str[i];
	}
	s1.close();
	return (0);
}

int main(int argc, char** argv)
{
	char			c;
	std::string		str;
	std::ifstream	stream; //okuma işlemi yapar

	if (argc != 4)
		return (std::cout << "Arg ERROR. Use ' file <file_name> <search> <replace>'."
						  << std::endl, 1);
	stream.open(argv[1]);
	if (!stream.is_open())
		return (std::cout << "txt ERROR!!!." << std::endl, 1);


	while (!stream.eof() && stream >> std::noskipws >> c) //boşlukları atlamadan okur
		str += c;
	return (replace(argv, str));
}
/*#include <iostream>
#include <locale>
#include<string>
#include<sstream>

//using namespace std
using namespace std;

namespace covil // as variaveis dentro de cada namespace sao unicas
{ 
	int main()
	{
	std::locale::global(std::locale("pt-PT")); //passa a reconhecer carateres portugueses/ escolha da lingua
	std::cout << "Olá Mundo!" << std::endl; // escreve "ola mundo/ std::endl quebra a linha/ 
	
	return 0;
	}
}

int main()
{
 stringstream valores;
 valores << 100 << 'a' << 200;
 int v1, v2;
 valores >> v1 >> v2;
 cout << "Valor1:" << v1 << endl;
 cout << "Valor2:" << v2 << endl;
 cin.get();
 return 0;
}

//para ja nao vamos meter texturas
//vamos usar spheres, usar push e poop
*/

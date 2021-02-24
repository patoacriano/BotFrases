#include <iostream>
#include <vector>
#include <ctime>

int main(){
	std::vector<std::string> f1 {"não ","sempre ","nunca ", "sim, ", "como diriam os sabios: ", " ", "como diria caue: ","para ter sucesso, ","ao acelerar, ","com um sorriso no rosto "};
	std::vector<std::string> f2 {"brinque com ", "jogue alguem no ", "leve seu amigo para ", "prometa que comprará um ", "coma feijão no ", "KALSKAKSADLKASK ", "tenha cuidado com ", "atenção ao fazer um ", "construa um ", "coma ", "ligue para ", "é tão bom boca na ", "visite um "};
	std::vector<std::string> f3 {"thiago","bola","carro","vulcão","mesa redonda", "sobrancelha", "jaca", "navio", "jumento", "medico", "restaurante", "Burger King", "capitalista", "capitalismo", "heliponto", "caue","uber","predio","martelo"};

	srand(time(NULL));

	int p1 = rand()%f1.size();
	int p2 = rand()%f2.size();
	int p3 = rand()%f3.size();

	std::cout<<"\n"<<f1[p1]<<f2[p2]<<f3[p3]<<"\n";


	return 0;
}

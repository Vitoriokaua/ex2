/* Ler um conjunto de números reais, armazenando-o em um vetor e calcular o quadrado das
componentes deste vetor, armazenando o
resultado em outro vetor. Os conjuntos têm 10 elementos cada.
Imprimir todos os conjuntos.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const int tam = 10;
	float vetor1[tam];
	float vetor_quadrado[tam];


	cout << "Digite os " << tam << " números reais:" << endl;
	for (int i = 0; i < tam; ++i)
	{
		cin >> vetor1[i];
	}

	// Calcular o quadrado dos componentes e armazenar no vetor_quadrado
	for (int i = 0; i < tam; ++i)
	{
		vetor_quadrado[i] = pow(vetor1[i], 2);
	}


	// Imprimir os conjuntos
	cout << "Conjunto original:" << endl;
	for (int i = 0; i < tam; ++i)
	{
		cout << vetor1[i] << " ";
	}
	cout << endl;

	cout << "Quadrado dos componentes:" << endl;
	for (int i = 0; i < tam; ++i)
	{
		cout << vetor_quadrado[i] << " ";
	}
	cout << endl;

	return 0;
}



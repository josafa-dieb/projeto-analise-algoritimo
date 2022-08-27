// Algoritimo Insertion Short

#include <stdio.h>

void insertionSort(int vetor[], unsigned int size) {
        // n+1

        for(int i = 1; i < size; ++i){
                int chave = vetor[i];
                int j = i-1;

                //mover
                while(j>=0 && vetor[j] > chave) {
                        vetor[j+1] = vetor[j];
                        j = j-1;
                }

                vetor[j+1] = chave;
        }

}

int main() {
	//vetor test
	int vetor[10] = {9, 5, 6, 7, 4, 3, 2, 1, 0, 8};

	printf("Entrada: [");
	for(int i = 0; i<10; i++){
		printf("%d ", vetor[i]);
	}
	printf("]\n");

	//execucao do algoritimo
	insertionSort(vetor, 10);

	printf("Saida: [");
	for(int i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	printf("]\n");

    return 0;
}

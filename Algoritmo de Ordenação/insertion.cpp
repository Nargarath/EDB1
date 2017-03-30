#include <iostream>
void swap(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
void insertionSort(int v[],int tamanho){
	int i, j, valorAtual;
	for(i = 1 ; i < tamanho;i++){
		for(j=i;j>0 && v[j]<v[j-1];j--){
			swap(v[j],v[j-1]);
			
		}
	}
}

int main(){
	int vetor[5] = {10,4,11,2,5};
	insertionSort(vetor,5);

	for(int i = 0 ;i<5;i++){
		std::cout<<vetor[i];
		std::cout<< std::endl;
	}	

}




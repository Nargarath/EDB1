#include <iostream>
void swap(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
void SelectionSort(int v[],int tamanho){
	int i,j,min;
	for(i = 0;i<tamanho-1;i++){
		min = i;
		for(int j = i+1; j<tamanho; j++){
			if(v[j]<v[min]){
				min = j;
			}
		}
		if(i!=min){
			swap(v[i],v[min]);
		}
	}
}

int main(){
	int vetor[5] = {10,4,11,2,5};
	SelectionSort(vetor,5);

	for(int i = 0 ;i<5;i++){
		std::cout<<vetor[i];
		std::cout<< std::endl;
	}	

}




#include <iostream>
void swap(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
void BubbleSort(int v[],int tamanho){
	bool sorted = true;
	do{
		sorted = false;
		for(int i = 1;i <tamanho;i++){
			if(v[i]<v[i-1]){
				swap(v[i],v[i-1]);
				sorted = true;
			}
		}

	}while(sorted);
}

int main(){
	int vetor[5] = {10,4,11,2,5};
	BubbleSort(vetor,5);

	for(int i = 0 ;i<5;i++){
		std::cout<<vetor[i];
		std::cout<< std::endl;
	}	

}




#include <iostream>
void swap(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
int partition(int v[],int low, int high ){
	int pivot = v[high];
	int i = (low -1);

	for(int j = low; j<=high -1 ; j++){
		if(v[j] <= pivot){
			i++;
			swap(v[i],v[j]);
		}
	}
	swap(v[i+1],v[high]);
	return (i+1);

}
void quickSort(int v[],int low, int high){
	if(low<high){
		int pi = partition(v,low,high);
		quickSort(v,low,pi-1);
		quickSort(v,pi+1,high);
	}
}

int main(){
	int vetor[5] = {10,4,11,2,5};
	quickSort(vetor,0,4);

	for(int i = 0 ;i<5;i++){
		std::cout<<vetor[i];
		std::cout<< std::endl;
	}	

}




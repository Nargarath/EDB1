#include <iostream>
void swap(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
int Merge(int v[],int init,int middle, int end ){
	int i , j  , k  , aux[end+1];
	i = init;
	j = middle+1;
	k = init;
	while(i<=middle && j<=end){
		if(v[i] < v[j]){
			aux[k] = v[i];
			i++;	
		}else{
			aux[k] = v[j];
			j++;
		}
		k++;
	}

	while(i <= middle){
		aux[k] = v[i];
		k++;
		i++;
	}
	while(j <= end){
		aux[k] = v[j];
		k++;
		j++;
	}

	for(int s = init; s<=end ; s++){
		v[s] = aux[s];
	}
}
void MergeSort(int v[],int init, int end){
	if(init<end){
		int middle = (init+end)/2;

		MergeSort(v,init,middle);
		MergeSort(v,middle+1,end);
		Merge(v,init,middle, end);
	}
}

int main(){
	int vetor[5] = {10,4,11,2,5};
	MergeSort(vetor,0,4);

	for(int i = 0 ;i<5;i++){
		std::cout<<vetor[i];
		std::cout<< std::endl;
	}	

}




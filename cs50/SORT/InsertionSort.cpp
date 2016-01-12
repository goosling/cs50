void
InsertionSort(ElementTpe A[ ], int N)
{
	int j, p;
	Element Type Tmp;
	for(p=1; P<N; P++) {
		Tmp = A[P];
		for(j=P; j>0 && A[j-1]>Tmp; j--){
			A[j] = A[j-1];
		}
		A[j] = Tmp;
	}
}

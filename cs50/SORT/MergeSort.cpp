void 
MSort(ElementType A[], ElementType TmpArray[],
				int Left, int Right){
	int Center;
	if(Left<Right){
		Center = (Left+Right)/2;
		MergeSort(A, TmpArray, Left, Center);
		MergeSort(A, TmpArray, Center+1, Right);
		Merge(A, TmpArray, Left, Center+1, Right);
	}
}

void 
MergeSort(ElementType A[], int N){
	ElementType *TmpArray;
	
	TmpArray = malloc(N*sizeof(ElementType));
	if(TmpArray != Null){
		MSort(A, TmpArray, 0, N-1);
		free(TmpArray);
	} else{
		FatalError('No space for tmp array');
	}
}

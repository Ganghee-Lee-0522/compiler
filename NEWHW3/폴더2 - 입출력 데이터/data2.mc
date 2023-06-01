// 2023 Compiler Testdata 2

int arr1[10];
const int f1 = 5;

int div_num(int num, int div){
	int result;
	// save the result
	int p;

	result = num/div;
	
	if(result >3){
		result -= 3;
	}else if(result<3){
		result += 3;
	}else{
		result *= 3;	
	}
	return result;
}


}
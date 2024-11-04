# include <stdio.h>

int main(){
	int n;


	printf("Enter How Many Raws You Want Here: \n");
	if(scanf("%d", &n) != 1){
		printf("Enter Integer Number Only Please\n");
		scanf("%*s");
		while(getchar() != '\n');
	}

	for (int i =0; i<n; i++){
		for(int h =0; h < n -i -1; h++){
			printf(" ");
		}

		for(int l = 0; l < 2 * i + 1; l++){
			printf("*");
		}
		printf("\n");
	}







	return 0;
}
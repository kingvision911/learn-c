#include <string.h>
#include <stdio.h>

int main(){

	char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	char ch[100];
	int count;


	for (int i = 0; i <= 100; i++) {
		scanf("%d", ch[i]);
	}

	
	for (int i = 0; i <= 20; i++) {
		if (ch[i] == vowel[i]) {
			count++;		
		}
	}

	printf("%d \n", count);                                                                                                                                                                                    
}

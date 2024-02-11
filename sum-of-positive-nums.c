// Write a C Program to read numbers from keyboard continuously till the user presses 999 and to find the sum of only positive numbers

#include <stdio.h>

int main(){
	int arr[100], user_input=0, count=0;
	while(user_input != 999){
		printf("Enter number: ");
		scanf("%d", &user_input);
		if (user_input > 0 && user_input != 999){
			arr[count] = user_input;
			count++;
		}
	};
	int sum = 0;
	for (int i = 0; i<count; i++){
		sum += arr[i];
	}
	printf("The sum of positive numbers: %d\n", sum);
	return 0;
}
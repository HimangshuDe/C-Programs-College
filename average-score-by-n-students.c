#include<stdio.h>

int main(){
	int total_students;
	float avg, sum=0;
	printf("Enter total number of students: ");
	scanf("%d", &total_students);
	float marks_arr[total_students];

	for (int i=0; i<total_students; i++){
		printf("Enter total marks scored by Student %d: ", (i+1));
       	       scanf("%f", &marks_arr[i]);
	       sum += marks_arr[i];
	}

	avg = sum/total_students;
	printf("The average of all the marks is: %.2f\n", avg);
	return 0;
}

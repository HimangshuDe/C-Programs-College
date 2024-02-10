#include<stdio.h>

int main(){
    int range, prime_start = 2;
    printf("Enter range to generate prime no. series: ");
    scanf("%d", &range);
    
    for(int loop_var = 2; loop_var <= range; loop_var++){
        for(int inner_loop = 2; inner_loop <= loop_var; inner_loop++){
            if (loop_var % inner_loop == 0 && loop_var != inner_loop){
                break;
            }
            if (loop_var % inner_loop == 0 && loop_var == inner_loop){
                printf("%d ", loop_var);
                break;
            }
        }
    }
    return 0;
}
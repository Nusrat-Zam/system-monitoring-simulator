#include <stdio.h>
int main(){

    int cpu_usage;
    

    int continue_monitoring=1;

    while(continue_monitoring!=0){
        printf("Enter cpu_usage=");
        scanf("%d",&cpu_usage);
        if(cpu_usage>=0 && cpu_usage<=100){
            if(cpu_usage>=85){
            printf("warning");
        }
        else {
            printf("normal");
        }
        printf("Do you want to continue?Enter1 for yes and 0 for no");
        scanf("%d",&continue_monitoring);
        printf("continue_monitoring= %d ",continue_monitoring);

        }
        else{
            printf("Please enter the valid input.");
            // printf("Do you want to continue?Enter1 for yes and 0 for no");
            // scanf("%d",&continue_monitoring);
        }


    }
    return 0;
}


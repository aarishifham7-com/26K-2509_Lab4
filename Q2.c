#include <stdio.h>

int main(){
    float score;

    printf("Enter the score: ");
    scanf("%f", score);

    if(score < 0 || score > 100){
        printf("Invalid score");
    }
    else if(score>= 0 && score <= 49){
        printf("Low confidence");
    }
    else if(score >= 50 && score <= 79){
        printf("Moderate confidence");
    }
    else if(score >=80 && score<= 100){
        printf("High confidence");
    }

    return 0;

}
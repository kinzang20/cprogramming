#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int product();
float mean();
float data[5];
int main() {
    int i;
    // int n;
    // printf("Enter n : ");
    // scanf("%d" ,&n);

    printf("Enter elements: ");
    for (i = 0; i < 5; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.2f", calculateSD(data));
    product();
    mean();
   
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    //int n;
    for (i = 0; i < 5; ++i) {
        sum += data[i];
    }
    mean = sum / 5;
    for (int i = 0; i < 5; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 5);
}
float mean(){
    float mean;
    //int n;
    float sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum += data[i];
    }
    mean = sum / 5;
    printf("\nmean = %f",mean );
}
int product(){
    int p = 1;
    //int n;
    int i;
    for (i=0;i<5;i++){
        p = p * data[i];
    
    }
    printf("\nproduct = %d ", p );
}

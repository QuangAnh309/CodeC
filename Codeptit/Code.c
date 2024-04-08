#include <stdio.h>
#include <math.h>
#define lmt 2000001
int arr[lmt] = {0};
void eras(){
    arr[0] = 0;
    arr[1] = 0;
    for(int i = 2; i < lmt; i++){
        if(arr[i] == 0)
            arr[i] = i;
            for(int j = i; j < lmt / i; j++)
                if(arr[j*i] == 0) arr[j*i] = i;
    }
}
int Sum(int num){
    int sum = 0;
    while(num != 1 && arr[num] != 0){
        sum = sum + arr[num];
        num = num / arr[num];
    }
    return sum;
}
int main(){
    eras();
    int n; 
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        sum = sum + Sum(num);
    }
    printf("%d", sum);
	return 0;
}
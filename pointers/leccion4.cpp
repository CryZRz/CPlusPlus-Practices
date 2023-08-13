#include <iostream>

using namespace std;

int getMin(int numbers[], int size){
    int min = numbers[0];

    for(int i=0; i<size; i++){
        if (numbers[i] < min){
            min = numbers[i];
        }
    }

    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];

    for(int i=0; i<size; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }

    return max;
}

void getMindAndMax(int numbers[], int size, int* min, int* max){
    for(int i=0; i<size; i++){
        if (numbers[i] > *max){
            *max = numbers[i];
        }
        if (numbers[i] < *min){
            *min = numbers[i];
        }
    }
}

int main(){
    int nums[] = {1, 2, 10, 4, -5};
    //cout<<getMin(nums, 5)<<endl;
    //cout<<getMax(nums, 5)<<endl;

    int min = nums[0];
    int max = nums[0];
    getMindAndMax(nums, 5, &min, &max);
    cout<<min<<endl;
    cout<<max<<endl;

    return 0;
}
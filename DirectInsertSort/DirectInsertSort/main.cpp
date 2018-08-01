//
//  main.cpp
//  DirectInsertSort
//
//  Created by kidd on 2018/8/1.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>
using namespace std;
void DirectInsertSort(int arr[], int num){
    int i,j;
    for (i = 2; i <= num; i++) {
        if (arr[i] < arr[i-1]) {
            arr[0] = arr[i];
            for (j = i -1; arr[0] < arr[j]; --j) {
                arr[j+1] = arr[j];
            }
            arr[j+1] = arr[0];
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, DirectInsertSort!\n";
    
    int a[] ={0,5,7,2,9,1,3,4,6};
    DirectInsertSort(a, 9);
    for (int i = 1; i < 9; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

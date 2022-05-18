inlcude <iostream>

using namespace std;

int func(int *a){
    *a++;
}

void main{
    func(1);
    printf("hello world!")
    return;
}

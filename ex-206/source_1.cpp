//documentation
/*----------------------
nick: guhf
id: s100-y
exercise 206: reverse linklist
content: Given the head of a singly linked list,
  reverse the list, and return the reversed list.
------------------------*/

//pre-processor
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>

//definition
std:: stack<int> s1;
void convert_binary(unsigned int x);

//main function
int main(){
    unsigned int x;
    printf("nhap so muon quy doi sang he nhi phan:\nx=\n");scanf("%u",&x);
    convert_binary(x);
    return 0;
}

//sub-program
void convert_binary(unsigned int x){
    if(x==0)  printf("Binary= 00000000");
    while (x>0){
        int temp=x%2;
        s1.push(temp);
        x=x/2;
    }
    printf("binary= ");
    while(!s1.empty()){
        printf("%d",s1.top());
        s1.pop();
    }
}
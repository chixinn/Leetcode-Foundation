#include <iostream>
#include "time.h"
#include "math.h"
using namespace std;
/*
     * 链表定义
     */
struct ListN{
    int val;
    ListN *next;
//    ListNode(int x):val(x),next(NULL){}//构造函数
    //C++默认生成一个构造函数
};
struct ListNode{
    int val;
    ListNode *next;
    //下面这三个都是构造函数
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};
int* newValArray(){
    int res[10];
    int begin=1,end=50;
    for(int & re : res){
        re=rand()%(int)(end-begin+1)+begin;
    }
    for(int & re : res){
       cout<<re<<"    ";
    }
    return res;
}
ListNode* newList(int *ValArray){
    ListNode *head= new ListNode(-1);
    ListNode *pre=new ListNode(ValArray[0]);
    head->next=pre;
    for(int i=1;i<13;i++){
        ListNode *p=new ListNode(ValArray[i]);
        pre->next=p;
        pre=pre->next;
        cout<<"add new node"<<p->val<<"\n";
    }
    pre->next= nullptr;
    return head;
}
void printList(ListNode *head){
    while(head->next!= nullptr&&head!= nullptr){
        cout<<head->val<<"----";
    }
}
ListNode* removeElements(ListNode *head,int val){

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    //自己定义构造函数初始化节点
//    ListNode *head=new ListNode(5);
    //默认构造函数初始化节点
    ListNode *head1=new ListNode();
    head1->val=5;
    //C++删除最后再手动释放这个D节点，释放内存
    int listVal[13]={1,2,3,4,5,1,23,4,2,5,6,7,9};
    head1= newList(listVal);
    printList(head1);





    return 0;
}


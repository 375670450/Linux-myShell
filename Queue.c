#include<stdio.h>
#include<stdlib.h>
#include "myshell.h"

Queue * CreateQueue(){
	Queue * PtrQ = (Queue*)malloc(sizeof(Queue));
    memset(PtrQ->Data,0,sizeof(QueueElem)*PROCESS_MAX);
    PtrQ->front = PtrQ->rear = -1;
    return PtrQ;
}

int IsEmptyQ(Queue * PtrQ){
	int flag = 0;						//Ĭ�Ϸǿ�
	if( PtrQ->front==PtrQ->rear ){
		flag = 1;
	}
	return flag;
}

void AddQ(Queue * PtrQ,QueueElem item){				//�����SҲ�ǿյ�ͷ���
	PtrQ->Data[++(PtrQ->rear)] = item;
	PtrQ->size++;
	return ;
}

QueueElem DeleteQ(Queue * PtrQ){
    PtrQ->size--;
	return PtrQ->Data[++(PtrQ->front)];
}


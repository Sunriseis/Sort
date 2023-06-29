#include <stdio.h>
#define MAXL 100		//��󳤶�
typedef int KeyType;	//����ؼ�������Ϊint
typedef char InfoType;  // ����ʹ������Ϊ����ȡһ���µ����� 

typedef struct
{	KeyType key;		//�ؼ�����--int key 
	InfoType data;		//�������������ΪInfoType--char data 
} RecType;				//������һ���ṹ�壬���ֽ�RecType���������Լ�ȡ�ġ� 

void CreateList(RecType R[],KeyType keys[],int n) //����˳��� --R��һ�����飬�����ڵ�ÿ��Ԫ����һ���ṹ�� 
{	for (int i=0;i<n;i++)			              //R[0..n-1]��������¼
		R[i].key=keys[i];
}

void DispList(RecType R[],int n)	//���˳���
{
	for (int i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}

void BubbleSort(RecType R[],int n)      //RecTyoe�������Ԫ�أ�int n������ݸ��� 
{	int i,j;
	bool exchange;
	RecType tmp;
	for (i=0;i<n-1;i++)                 //0~n-2   1~n-1   9 
	{	
		exchange=false;					//һ��ǰexchange��Ϊ��
		for (j=n-1;j>i;j--)				//��λR[i],ѭ��n-i-1��
			if (R[j].key<R[j-1].key)	//��������Ԫ�ط���ʱ
			{	
				tmp=R[j];				//��������Ԫ�ؽ���
				R[j]=R[j-1];
				R[j-1]=tmp;
				exchange=true;			//һ���н�����exchange��Ϊ��
			}
		printf("  i=%d: ",i);
		DispList(R,n);
		if (!exchange)  //����û�з�����������;�����㷨��exchange != true ����exchange==false 
			return;                     
	}
}

int main()
{
	int n=10;
	RecType R[MAXL];
	KeyType a[]={0,1,7,2,5,4,3,6,8,9};
	CreateList(R,a,n);
	printf("����ǰ:"); DispList(R,n);
	BubbleSort(R,n);  
	printf("�����:"); DispList(R,n);
	return 0;
}

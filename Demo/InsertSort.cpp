#include <stdio.h>
#define MAXL 100		//��󳤶�
typedef int KeyType;	//����ؼ�������Ϊint
typedef char InfoType;  // ����ʹ������Ϊ����ȡһ���µ����� ����Ĵ��� 

typedef struct
{	KeyType key;		//�ؼ�����--int key 
	InfoType data;		//�������������ΪInfoType--char data 
} RecType;				//������һ���ṹ�壬���ֽ�RecType���������Լ�ȡ�ġ�����Ĵ��� 

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

void InsertSort(RecType R[],int n)
{
	int i,j;
	RecType tmp;
	for(i=1;i<n;i++) //ѭ��7�� 
	{
		tmp=R[i];    //���ڶ������ֱ������� 49 38
		j=i-1;       //49
		while(j>=0 && tmp.key<R[j].key)//38<49
		{
			R[j+1]=R[j]; //49=49
			j--;         //j=-1
		}
		R[j+1]=tmp;      //���ʱ���38�ó��� 
		printf("  i=%d: ",i); DispList(R,n);
	}
}

int main()
{
	int n=8;
	RecType R[MAXL];
	KeyType a[]={49,38,65,97,76,13,27,49};
	CreateList(R,a,n);
	printf("����ǰ:"); DispList(R,n);
	InsertSort(R,n);
	printf("�����:"); DispList(R,n);
	return 0;
}

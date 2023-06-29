#include <stdio.h>
#define MAXL 100		//最大长度
typedef int KeyType;	//定义关键字类型为int
typedef char InfoType;  // 可以使用它来为类型取一个新的名字 多余的代码

typedef struct
{	KeyType key;		//关键字项--int key 
	InfoType data;		//其他数据项，类型为InfoType--char data 
} RecType;				//定义了一个结构体，名字叫RecType，名字是自己取的。 

void CreateList(RecType R[],KeyType keys[],int n) //创建顺序表 --R是一个数组，数组内的每个元素是一个结构体 
{	for (int i=0;i<n;i++)			              //R[0..n-1]存放排序记录
		R[i].key=keys[i];
}

void DispList(RecType R[],int n)	//输出顺序表
{
	for (int i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n");
}

void BubbleSort(RecType R[],int n)      //RecTyoe存放数据元素，int n存放数据个数 
{	int i,j;
	bool exchange;
	RecType tmp;
	for (i=0;i<n-1;i++)                 //0~n-2   1~n-1   9 
	{	
		exchange=false;					//一趟前exchange置为假
		for (j=n-1;j>i;j--)				//归位R[i],循环n-i-1次
			if (R[j].key<R[j-1].key)	//相邻两个元素反序时
			{	
				tmp=R[j];				//将这两个元素交换
				R[j]=R[j-1];
				R[j-1]=tmp;
				exchange=true;			//一旦有交换，exchange置为真
			}
		printf("  i=%d: ",i);
		DispList(R,n);
		if (!exchange)  //本趟没有发生交换，中途结束算法，exchange != true 或者exchange==false 
			return;                     
	}
}

int main()
{
	int n=10;
	RecType R[MAXL];
	KeyType a[]={0,1,7,2,5,4,3,6,8,9};
	CreateList(R,a,n);
	printf("排序前:"); DispList(R,n);
	BubbleSort(R,n);  
	printf("排序后:"); DispList(R,n);
	return 0;
}

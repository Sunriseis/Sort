#include <stdio.h>
#define MAXL 100		//最大长度
typedef int KeyType;	//定义关键字类型为int
typedef char InfoType;  // 可以使用它来为类型取一个新的名字 多余的代码 

typedef struct
{	KeyType key;		//关键字项--int key 
	InfoType data;		//其他数据项，类型为InfoType--char data 
} RecType;				//定义了一个结构体，名字叫RecType，名字是自己取的。多余的代码 

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

void InsertSort(RecType R[],int n)
{
	int i,j;
	RecType tmp;
	for(i=1;i<n;i++) //循环7次 
	{
		tmp=R[i];    //将第二个数字保存起来 49 38
		j=i-1;       //49
		while(j>=0 && tmp.key<R[j].key)//38<49
		{
			R[j+1]=R[j]; //49=49
			j--;         //j=-1
		}
		R[j+1]=tmp;      //这个时候把38拿出来 
		printf("  i=%d: ",i); DispList(R,n);
	}
}

int main()
{
	int n=8;
	RecType R[MAXL];
	KeyType a[]={49,38,65,97,76,13,27,49};
	CreateList(R,a,n);
	printf("排序前:"); DispList(R,n);
	InsertSort(R,n);
	printf("排序后:"); DispList(R,n);
	return 0;
}

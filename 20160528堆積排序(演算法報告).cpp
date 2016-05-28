#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
//
//オ=*2+1
//=*2+2 
//オ 
//―=オ/2 
//=オ+1 
void Switch(int *a, int *b)//肚秈ㄢ璶ユ传眔计
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
bool stopSwap = false;
void MaxHeap(int *input,int root_index,int totalindex,bool sort_mode)//input:int摸皚 root_index:竊翴ま 
//totalindex:皚羆计-1 单基皚程ま stopSwap:ノㄓ浪琩竊翴苯Ч Τ⊿Τ砆ユ传 璝⊿Τヴ计ユ传 碞琌程沧挡狦
{
	int leftChild = root_index*2+1; //オ竊翴
	int rightChild = root_index * 2+2;//竊翴
	if (sort_mode)//逼篈
	{
		if (rightChild > totalindex)//狦竊翴ま计程ま ⊿硂计
			return;
		if (rightChild == totalindex)//逼竊翴=羆竊翴 竊翴ぃ笆
		{
			if (input[leftChild] > input[root_index])//竊翴ぃ 逞オ竊翴碞钡㎝竊翴ゑ 璝ゑ竊翴 碞ユ传
				Switch(&input[leftChild], &input[root_index]);
			return;//逞オ竊翴ぃ恨璶ぃ璶ユ传 ┏ 碞肚
		}
	}
	else//程帮縩篈
	{
		if (leftChild > totalindex)//狦竊翴ま计程ま ⊿硂计
			return;
	}
	if (input[leftChild] > input[root_index] && rightChild > totalindex)//狦オ竊翴ゑ竊翴  竊翴ゑ羆竊翴计 
																		//ê碞絋粄硂竊翴Τオ竊翴 рオ竊翴籔竊翴ユ传
	{
		Switch(&input[leftChild], &input[root_index]);
		stopSwap = false;
		return;
	}
	if (input[leftChild] > input[rightChild])//オ竊翴ゑ竊翴
	{
		if (input[leftChild] > input[root_index])
		{
			Switch(&input[leftChild], &input[root_index]);
			stopSwap = false;
			MaxHeap(input, leftChild, totalindex, sort_mode);
		}
		else
			return;
	}
	else if (input[leftChild] < input[rightChild])//オ竊翴ゑ竊翴
	{
		if (input[rightChild] > input[root_index])
		{
			Switch(&input[rightChild], &input[root_index]);
			stopSwap = false;
			MaxHeap(input, rightChild, totalindex, sort_mode);
		}
		else
			return;
	}
	else if (input[leftChild] == input[rightChild])//オ竊翴㎝竊翴妓
	{
		if (input[leftChild] > input[root_index])
		{
			Switch(&input[rightChild], &input[root_index]);
			stopSwap = false;
			MaxHeap(input, rightChild, totalindex, sort_mode);
		}
		else
			return;
	}
	
}
void heapify(int *input, int inputNum)
{
	while (!stopSwap)//璝皚⊿Τ氨ゎユ传碞膥尿癹伴 stopSwaptrue 皚⊿Τユ传筁 碞氨ゎ程帮縩て
	{
		stopSwap = true;//安﹚皚ぃ穦ユ传 璝Τユ传 stopSwap=false  ?挡皚⊿ユ传筁 碞琌タ絋?
		for (int i = 0; i < inputNum; i++)
		{
			MaxHeap(input, i, inputNum - 1,false);//程帮縩
		}
	}
}
void heapsort(int* input,int inputNum)
{
	for (int i = inputNum - 1; i > 0; i--)
	{
		Switch(&input[0], &input[i]);
		MaxHeap(input, 0, i, true);
	}
}
void printData(int* input, int inputNum,char*str)
{
	printf("%s", str);
	for (int i = 0; i < inputNum; i++)
	{
		printf("%d ", input[i]);
	}
	printf("\n");
}
int main()//test parameter:38 14 57 59 52 19   resault:59 57 38 14 52 19
		//test2 parameter:14 51 92 79 45 2 75 70 3 57                     resault:92 79 75 70 57 2 14 51 3 45 
{
	srand(time(NULL));
	int inputNum;
	printf("叫块璶ぶ计:");
	scanf("%d",&inputNum);
	int *input = (int *)malloc(sizeof(int)*inputNum);//璶癘拘砰
	printf("﹍皚:");
	for (int i = 0; i < inputNum; i++)
	{
		//input[i] = rand() % 1000 + 1;
		scanf("%d", input + i);
	}
	printData(input, inputNum, "﹍皚:");
	heapify(input, inputNum);//帮縩
	printData(input, inputNum, "程帮縩Ч挡狦:");
	heapsort(input,inputNum);
	printData(input, inputNum, "逼Ч挡狦:");
	free(input);
	system("pause");
	return 0;
}

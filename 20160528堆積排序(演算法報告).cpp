#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>
//�w����
//���l=��*2+1
//�k�l=��*2+2 
//�w�����l 
//�D��=���l/2 
//�k�l=���l+1 
void Switch(int *a, int *b)//�Ƕi��ӭn�洫�o��
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
bool stopSwap = false;
void MaxHeap(int *input,int root_index,int totalindex,bool sort_mode)//input:int�����}�C root_index:���`�I���� 
//totalindex:�}�C�`��-1 ������}�C�̤j���� stopSwap:�Ψ��ˬd�`�I������ ���S���Q�洫 �Y�S������ƥ洫 �N�O�̲׵��G
{
	int leftChild = root_index*2+1; //���l�`�I
	int rightChild = root_index * 2+2;//�k�l�`�I
	if (sort_mode)//�ƧǪ��A�U
	{
		if (rightChild > totalindex)//�p�G�l�`�I���ޤj��ƦC�̤j������ �N��S�o�ӼƦr
			return;
		if (rightChild == totalindex)//�ƧǮɥk�l�`�I=�`�@�`�I �N��k�l�`�I�����
		{
			if (input[leftChild] > input[root_index])//�k�l�`�I���s�b �ѤU�����l�`�I�N�����M�`�I�ۤ� �Y��`�I�j �N�洫
				Switch(&input[leftChild], &input[root_index]);
			return;//�ѤU�@�ӥ��l�`�I���ޭn���n�洫 �N��쩳�F �N��^��
		}
	}
	else//�̤j��n���A�U
	{
		if (leftChild > totalindex)//�p�G�l�`�I���ޤj��ƦC�̤j������ �N��S�o�ӼƦr
			return;
	}
	if (input[leftChild] > input[root_index] && rightChild > totalindex)//�p�G���l�`�I��`�I�j �B �k�l�`�I���`�`�I�Ƥj 
																		//���N��T�{�o�Ӹ`�I�u�����l�`�I �åB�⥪�l�`�I�P�`�I�洫
	{
		Switch(&input[leftChild], &input[root_index]);
		stopSwap = false;
		return;
	}
	if (input[leftChild] > input[rightChild])//���l�`�I��k�l�`�I�j��
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
	else if (input[leftChild] < input[rightChild])//���l�`�I��k�l�`�I�p��
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
	else if (input[leftChild] == input[rightChild])//���l�`�I�M�k�l�`�I�@�ˮ�
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
	while (!stopSwap)//�Y�}�C�S������洫�N�~��j�� ����stopSwap��true �N��}�C�S���A�洫�L �N����̤j��n��
	{
		stopSwap = true;//���w�}�C���|�A�洫 �Y���洫 stopSwap=false  ?�쵲���ɰ}�C�S�洫�L �N�O���T��?
		for (int i = 0; i < inputNum; i++)
		{
			MaxHeap(input, i, inputNum - 1,false);//�̤j��n
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
	printf("�п�J�n�h�֭ӼƦr:");
	scanf("%d",&inputNum);
	int *input = (int *)malloc(sizeof(int)*inputNum);//�n�O����
	printf("��l�}�C:");
	for (int i = 0; i < inputNum; i++)
	{
		//input[i] = rand() % 1000 + 1;
		scanf("%d", input + i);
	}
	printData(input, inputNum, "��l�}�C:");
	heapify(input, inputNum);//��n
	printData(input, inputNum, "�̤j��n�����G:");
	heapsort(input,inputNum);
	printData(input, inputNum, "�Ƨǧ����G:");
	free(input);
	system("pause");
	return 0;
}

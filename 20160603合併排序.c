#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void merge_sort_recursive(int arr[], int reg[], int start, int end) {
	if (start >= end)//�����^�� 
		return;
	int len = end - start, mid = len / 2 + start;//�p���e�n����o��ƪ��שM�D�X �L�̪������I 
	int start1 = start, end1 = mid;//���b�䪺�Y�M�� 
	int start2 = mid + 1, end2 = end;//�k�b�䪺�Y�M��
	merge_sort_recursive(arr, reg, start1, end1);//���j�h���y���b��ƾ� 
	merge_sort_recursive(arr, reg, start2, end2);////���j�h���y�k�b��ƾ� 
	int k = start;//�s���e�}�C������
	while (start1 <= end1 && start2 <= end2)//�p�G���b�䦳�Ʀr �P�ɥk�b��]���Ʀr�� 
		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];//�Y���b���Y�Ʀr��k�b���Y�Ʀr�Ӫ��p ����ereg�N���s�����p�o�Ʀr 
	while (start1 <= end1)//���y�ѤU�����b��ƾ� 
		reg[k++] = arr[start1++];//��Ѿl���Ʀr������ireg�}�C�� 
	while (start2 <= end2)////���y�ѤU�����b��ƾ� 
		reg[k++] = arr[start2++];//��Ѿl���Ʀr������ireg�}�C�� 
	for (k = start; k <= end; k++)//�̫�A��reg�̭���X���o�Ʀr ������i���arr���ƾ� 
		arr[k] = reg[k];
}
void merge_sort(int arr[], const int len) {
	int* reg = (int*)malloc(sizeof(int)*len);//�ŧireg�åB���t�O����M��J��Ƥ@�ˤj���}�C  �ާ@�D�n�b�o�q�}�C�W
											//�N�O�ΪŶ��Ӵ����ɶ� 
	merge_sort_recursive(arr, reg, 0, len - 1);//�I�smerge_sort_recursive��� �ǤJ��J��ư}�C���a�},reg�{�ɾާ@�}�C���a�},�}�C�ҩl����,�}�C���Ư��� 
	free(reg);
}
int main(void) {
	srand(time(NULL));//�üƺؤl �H�ɶ����ؤl  
	int inputNum;
	printf("�п�J�n�h�֭ӼƦr:");
	scanf_s("%d", &inputNum);//��J�`�@���h�֭ӼƦr 
	int* arr = (int*)malloc(sizeof(int)*inputNum);//���t�O����j�p �ھڧA��J���h�֭ӼƦr�h���t 

	printf("�Ƨǫe�G");
	int i;
	for (i = 0; i < inputNum; i++) {//��l�Ƽƾ� �åB���L 
		arr[i] = rand() % 100;//��l�Ƽƾ�0~99�����i�� 
		printf("%d ", arr[i]);//���L�X�ϤƧ����ƾ� 
	}
	merge_sort(arr, inputNum);//�G�smerge_sort��� �åB�ǤJ��J��ƪ����a�}�M��J��ƪ��`�� 
	printf("\n�Ƨǫ�G");
	for (i = 0; i < inputNum; i++)//���L�Ƨǧ��᪺���G 
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
	system("pause");
	return 0;
}

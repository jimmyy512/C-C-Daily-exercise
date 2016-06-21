#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void merge_sort_recursive(int arr[], int reg[], int start, int end) {
	if (start >= end)//掃完回傳 
		return;
	int len = end - start, mid = len / 2 + start;//計算當前要比較得資料長度和求出 他們的中心點 
	int start1 = start, end1 = mid;//左半邊的頭和尾 
	int start2 = mid + 1, end2 = end;//右半邊的頭和尾
	merge_sort_recursive(arr, reg, start1, end1);//遞迴去掃描左半邊數據 
	merge_sort_recursive(arr, reg, start2, end2);////遞迴去掃描右半邊數據 
	int k = start;//存放當前陣列的索引
	while (start1 <= end1 && start2 <= end2)//如果左半邊有數字 同時右半邊也有數字時 
		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];//若左半邊頭數字比右半邊頭數字來的小 那當前reg就先存放比較小得數字 
	while (start1 <= end1)//掃描剩下的左半邊數據 
		reg[k++] = arr[start1++];//把剩餘的數字直接放進reg陣列裡 
	while (start2 <= end2)////掃描剩下的左半邊數據 
		reg[k++] = arr[start2++];//把剩餘的數字直接放進reg陣列裡 
	for (k = start; k <= end; k++)//最後再把reg裡面算出的得數字 全部丟進原來arr的數據 
		arr[k] = reg[k];
}
void merge_sort(int arr[], const int len) {
	int* reg = (int*)malloc(sizeof(int)*len);//宣告reg並且分配記憶體和輸入資料一樣大的陣列  操作主要在這段陣列上
											//就是用空間來換取時間 
	merge_sort_recursive(arr, reg, 0, len - 1);//呼叫merge_sort_recursive函數 傳入輸入資料陣列首地址,reg臨時操作陣列首地址,陣列啟始索引,陣列末數索引 
	free(reg);
}
int main(void) {
	srand(time(NULL));//亂數種子 以時間為種子  
	int inputNum;
	printf("請輸入要多少個數字:");
	scanf_s("%d", &inputNum);//輸入總共有多少個數字 
	int* arr = (int*)malloc(sizeof(int)*inputNum);//分配記憶體大小 根據你輸入有多少個數字去分配 

	printf("排序前：");
	int i;
	for (i = 0; i < inputNum; i++) {//初始化數據 並且打印 
		arr[i] = rand() % 100;//初始化數據0~99都有可能 
		printf("%d ", arr[i]);//打印出使化完的數據 
	}
	merge_sort(arr, inputNum);//乎叫merge_sort函數 並且傳入輸入資料的首地址和輸入資料的總數 
	printf("\n排序後：");
	for (i = 0; i < inputNum; i++)//打印排序完後的結果 
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
	system("pause");
	return 0;
}

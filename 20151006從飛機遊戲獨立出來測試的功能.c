//�C���U�ť��䲣�ͨ�Ӥl�u 
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
struct bullet* first_bullet_2 = NULL;
struct bullet* last_bullet_2 = NULL;
int bullet_amount_2 = 0;//2���u��
struct bullet
{
	COORD pos;
	struct bullet* pnext;
};
void generate_bullet(COORD* current_xy)
{
	struct bullet *bullet = (struct bullet*)malloc(sizeof(struct bullet));
	struct bullet *bullet2 = (struct bullet*)malloc(sizeof(struct bullet));
	static int i=0,j=0;
	bullet->pos.X = current_xy->X + i;
	bullet->pos.Y = current_xy->Y+j;
	bullet2->pos.X = current_xy->X + i;
	bullet2->pos.Y = current_xy->Y+j;
	i++,j++;
	if (bullet_amount_2 == 0)   //�Y�S���Y�l�u
	{
		first_bullet_2 = bullet;                   //�Y�l�u
		last_bullet_2 = bullet2;					//�̫�@�Ӥl�u
		bullet->pnext = bullet2;
		bullet2->pnext = NULL;
	}
	else
	{
		last_bullet_2->pnext = bullet;        //���e���ͤl�u����_�� ���̫᭱
		bullet->pnext = bullet2;              //��2�Ӥl�u����1�ӫ᭱
		bullet2->pnext = NULL;
		last_bullet_2=bullet2;
		
	}
	bullet_amount_2 += 2;//�l�u+2
}
void printf_all_data()
{
	if (first_bullet_2 != NULL)
	{
		struct bullet* current_bullet = first_bullet_2;
		while (1)
		{

			printf("\n%d,%d\n", current_bullet->pos.X, current_bullet->pos.Y);
			if (current_bullet->pnext == NULL)
				break;
			else
				current_bullet = current_bullet->pnext;
		}
	}
}
int main()
{
	COORD current_xy;
	current_xy.X = 26;
	current_xy.Y = 42;
	while (1)
	{

		if (GetAsyncKeyState(0x20))//space
		{
			generate_bullet(&current_xy);

		}
		system("CLS");
		printf("bullet_amout_2:%d", bullet_amount_2);
		printf_all_data();
		Sleep(100);
	}

}

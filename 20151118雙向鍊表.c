#include <stdio.h>
#include <stdlib.h>
struct link
{
	int num;
	struct link* last_node;
	struct link* next_node;
};
int main()
{
	int i = 0;
	struct link* first_node = NULL, *last_node = NULL, *current_node;
	for (i = 0; i<5; i++)
	{
		struct link* new_node = (struct link*)malloc(sizeof(struct link*));
		new_node->num = i;
		if (first_node == NULL)
		{
			new_node->last_node = NULL;
			new_node->next_node = NULL;
			first_node = new_node;
			last_node = new_node;
		}
		else
		{
			new_node->last_node = last_node;
			last_node->next_node = new_node;
			last_node = new_node;
			new_node->next_node = NULL;
		}
	}
	current_node = first_node;
	while (current_node != NULL)
	{
		printf("%p 第%d個節點 上一個地址:%p 下一個地址:%p\n", current_node, current_node->num + 1, current_node->last_node, current_node->next_node);
		current_node = current_node->next_node;
	}
	system("pause");
}

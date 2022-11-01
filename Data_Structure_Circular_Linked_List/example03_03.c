#include "circularlist.h"
#define NULL 0
//NULL이 정의되지 않았다고 떠서 디파인문을 사용하였습니다.

int main(int argc, char *argv[]){
	int i = 0;
	int arrayCount = 0;

	CircularList *pList = NULL;
	CircularListNode *pValue = NULL;
	CircularListNode node;

	pList = createCircularList(6);
	if (pList != NULL){
		node.data = 1;
		addCLElement(pList, 0, node);

		node.data = 3;
		addCLElement(pList, 1, node);

		node.data = 5;
		addCLElement(pList, 2, node);
		displayCircularList(pList);

		removeCLElement(pList, 0);
		arrayCount = getCircularListLength(pList);
		for (i = 0; i < arrayCount; i++){
			pValue = getCLElement(pList, i);
			printf("position[%d]-%d\n", i, pValue->data);
		}
		deleteCircularList(pList);
	}
	return 0;
}

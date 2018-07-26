#include <stdio.h>
#include "sortMethods.h"


int main()
{ 
 #define MAX 5
 int *p, i, a[MAX];
 
 /*录入测试数据*/
 p = a;
 printf("Input %d number for sorting :\n",MAX);
 for (i=0; i<MAX; i++)
 {
  scanf("%d",p++);
 }
 printf("\n");
 /*测试选择排序*/
 
 // p = a;
 // select_sort(p,MAX);
 /**/

 /*测试直接插入排序*/
 /*
 p = a;
 insert_sort(p,MAX);
 */
 
 /*测试冒泡排序*/
 /*
 p = a;
 insert_sort(p,MAX);
 */
 /*测试快速排序*/
 
 p = a;
 quick_sort(p,0,MAX-1);
 printf("%s\n", "quick");
 /*测试堆排序*/
 /*
 p = a;
 heap_sort(p,MAX);
 */
 for (p=a, i=0; i<MAX; i++)
 {
  printf("%d ",*p++);
 }
 
 printf("\n");
// system("pause");
}


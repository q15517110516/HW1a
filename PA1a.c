//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "HW1.h"
//
//
//
//void insert(char *name, char *title, char *date, int *time) {
//
//   struct mp3 *link = (struct mp3*) malloc(sizeof(struct mp3));
//
//   link->name = name;
//   link->title = title;
//   link->date = date;
//   link->time = time;
//
//   if(head == NULL) {
//      last = link;
//   }else{
//	   head->prev = link;
//   }
//   link->next = head;
//   head = link;
//
//}
//
//void printForward() {
//   struct mp3 *ptr = head;
//   printf("\n");
//   while(ptr != NULL) {
//      printf("%d %d", ptr->name,ptr->title, ptr->date, ptr->time);
//      ptr = ptr->next;
//   }
//   printf("%d %d", ptr->name,ptr->title, ptr->date, ptr->time);
//
//}
//
//void printBackward() {
//   struct mp3 *ptr = last;
//   printf("\n");
//   while(ptr != NULL) {
//	  printf("%d %d", ptr->name,ptr->title, ptr->date, ptr->time);
//      ptr = ptr->prev;
//   }
//   printf("%d %d", ptr->name,ptr->title, ptr->date, ptr->time);
//
//}
//
//void deleteTit(int key)
//{
//   struct mp3* current = head;
//   struct mp3* previous = NULL;
//
//   if (head == NULL){
//      return;
//   }
//
//   while(current->title != key){
//	   if(current->next == NULL){
//		   return ;
//	   }else{
//		   previous = current;
//		   current = current->next;
//	   }
//
//   }
//	if(current == head){
//		head = head->next;
//	}else{
//		current->prev->next = current->next;
//	}
//
//	if(current == last){
//		last = head->prev;
//	}else{
//		current->next->prev = current->prev;
//	}
//	return ;
//}
//
//int main() {
//	struct mp3 *head = NULL;
//	char index='Hold';
//	while(index!='Quit'){
//		printf("\n Please input:\n Add - adding a song \n Delete - deleting a song \n Forward - printing the list from beginning to end \n Backward - printing the list from end to beginning");
//		scanf("%s",index);
//		if(index=='Add'){
//			char name=' ';
//			char title=' ';
//			char date=' ';
//			int leng=0;
//			printf(name, title, date, leng);
//			insert(name,title,date,leng);
//		}
//		else if(index=='Delete'){
//			char name=' ';
//			printf(name);
//			struct mp3* delete = head;
//			int count = 0;
//			while(delete->next != last){
//				if(delete->name==name){
//					deleteTit(count);
//				}
//				count++;
//			}
//		}
//		else if(index == 'Forward'){
//			printForward();
//		}
//		else if(index == 'Backward'){
//			printBackward();
//		}
//
//	}
//
//	return 0;
//}

#include <stdio.h>
void menu(){
	int item;

    printf(\"Today's Menu\n");
    printf("1.Hambarger -ksh .50/n");
	printf("2.Kebab -ksh .90/n");
    printf("3.fries -ksh .100/n");
    printf("enter item no.:");
    scanf("%d",&items);
    if(item> 0 && item <=3){
	    return printf("item added to cart");
    }else{
        return printf("invalid item");
	}

}
int main(){
menu();

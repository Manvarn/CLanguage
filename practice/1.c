#include<stdio.h>
int main()
{
	int rate,qty,amt,dis,billant,gst,netbill;
	printf("\n enter rate:");
	scanf("%d",&rate);
	printf("\n enter qty:");
	scanf("%d",&qty);
	
	amt=rate*qty;
	dis=amt*0.05;
	billant=amt-dis;
	gst=billant*0.18;
	netbill=billant+gst;

	printf("\n----------------------------------------------------------");
	printf("\n rate\tqty\tamt\tdis\tbillant\tgst\tnetbill");
	printf("\n----------------------------------------------------------");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d",rate,qty,amt,dis,billant,gst,netbill);
}

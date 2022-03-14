#include <stdio.h>

int main()
{
    char ch,a,b;
    printf("Enter the char:");
    scanf("%c", &ch);
    printf("\n Ascii Equivalent : %d\n", ch); //ascii equavelents
  //Swaping the 4-bits
    while(ch > 0) 
    {
        int mod = ch % 10;  
        printf("%d",mod); 
            ch = ch / 10;
    }
  //Hexa-decimal convertion
    printf("\nEnter the a & b: ");
    scanf("%d%d",&a,&b);
    printf("%x %x",a,b);
    return 0;
}

/*Create an application that can perform all string related operations
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles
It should be a menu driven approach, for which you are suppose to use the functions
concept
Over Here, take string input from user and perform string operations listed below :
? reverse a string
? Concatenation
? Palindrome
? Copy a string
? Length of the string
? Frequency of character in s string
? Find number of vowels and consonants
? Find number of blank spaces and digits
As given above perform the operation as per user’s choice
If user will not select any of the above then it should not perform any operation and
give an appropriate user friendly message
After performing the operation ask the user if the user wants to continue or not ?
*/
#include<stdio.h>
#include<string.h>

void reverse(char str[])
{
    int i=0,j ;
    int len=strlen(str);
    
	for(j=len-1;i<j;j--)
	{
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
    }
    printf("\n\n\t Reverse string : %s",str);
}
void concate(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("\n\n\t Concatenat string : %s",str1);
}
int Palindrome_number(char str[])
{
    int i,j,len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
	{
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}
void copy(char str1[],char str2[])
{
    strcpy(str1,str2);
    printf("Copied string : %s\n",str1);
}
int Length(char str[])
{
    int len = strlen(str);
    printf("Length of the string: %d\n",len);
    return len;
}
int Frequency(char str[],char ch)
{
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==ch)
            count++;
    }
    printf("Frequency of '%c' : %d\n",ch,count);
    
    return count;
}

void count(char str[])
{
    int i,vowels=0,consonants=0;
    
    for(i=0;str[i]!='\0';i++)
	{
        char ch=tolower(str[i]);
        
        if(ch=='a'&&'A' || ch=='e'&&'E' || ch=='i'&&'I' || ch=='o'&&'O' || ch=='u'&&'U')
            vowels++;
            
        else if(isalpha(ch))
            consonants++;
    }
    printf("\n\n\t Vowels : %d , Consonants : %d",vowels,consonants);
}
void Spaces_Digits(char str[])
{
    int i,spaces=0,digits=0;
    
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==' ')
		{
            spaces++;
		}
		else if(isdigit(str[i]))
		{
            digits++;
        }
    }
    printf("Spaces : %d, \n Digits : %d",spaces,digits);
}


main()
{
    char str[100],str2[100];
    int choice,continue_op=1;

    while(continue_op)
	{
        printf("\n\t Main Menu :");
        printf("\n\t 1. Reverse a string");
        printf("\n\t 2. Concatenate strings");
        printf("\n\t 3. Check for palindrome");
        printf("\n\t 4. Copy a string");
        printf("\n\t 5. Find string length");
        printf("\n\t 6. Find character frequency");
        printf("\n\t 7. Count vowels and consonants");
        printf("\n\t 8. Count spaces and digits");
        printf("\n\n\t Please Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
		{
            case 1:
                printf("Enter a string : ");
                scanf("%s",&str);
                reverse(str);
                break;
            case 2:
                printf("Enter first string : ");
                scanf("%s",&str);
                printf("Enter second string : ");
                scanf("%s",&str2);
                concate(str,str2);
                break;
            case 3:
                printf("Enter a string : ");
                scanf("%s",&str);
                if(Palindrome_number(str))
                    printf("\n\n\t The Number is a palindrome.");
                else
                    printf("\n\n\t The Number is not a palindrome.");
                break;
            case 4:
                printf("Enter a string : ");
                scanf("%s",&str2);
                copy(str,str2);
                break;
            case 5:
                printf("Enter a string : ");
                scanf("%s",&str);
                Length(str);
                break;
            case 6:
                printf("Enter a string : ");
                scanf("%s",&str);
                char ch;
                printf("Enter a character : ");
                scanf(" %c",&ch);
                Frequency(str,ch);
                break;
            case 7:
                printf("Enter a string : ");
                scanf("%s",str);
                count(str);
                break;
            case 8:
                printf("Enter a string : ");
                scanf("%d",&str);
                gets(str);
                Spaces_Digits(str);
                break;
            default:
                printf("\n\n\t Invalid choice !!!!!!!");
        }
        printf("\n Do you want to continue(Press 1 for  yes & Press 0 for no) !!!!!!!!!!!");
        scanf("%d",&continue_op);
    }
}

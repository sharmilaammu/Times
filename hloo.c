
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int hours,minutes;
    printf("Hours:");
    scanf("%d",&hours);
    printf("Minutes:");
    scanf("%d", &minutes);
    char nums[][64] = { "zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine",
                        "ten", "eleven", "twelve", "thirteen",
                        "fourteen", "fifteen", "sixteen", "seventeen",
                        "eighteen", "nineteen", "twenty", "twenty one",
                        "twenty two", "twenty three", "twenty four",
                        "twenty five", "twenty six", "twenty seven",
                        "twenty eight", "twenty nine"
                    };


	    if (minutes == 0)
		printf("%s o' clock\n", nums[(hours % 12)]);
	 
	    else if (minutes == 1)
		printf("one minute past %s\n", nums[(hours % 12)]);
	 
	    else if (minutes == 59)
		printf("one minute to %s\n", nums[(hours % 12) + 1]); 

	    else if (minutes == 15)
		printf("quarter past %s\n", nums[(hours % 12)]);
	 
	    else if (minutes == 30)
		printf("half past %s\n", nums[(hours % 12)]);
	 
	    else if (minutes == 45)
		printf("quarter to %s\n", nums[(hours % 12) + 1]);
	 
	    else if (minutes <= 30)
		printf("%s minutes past %s\n", nums[minutes], nums[(hours % 12)]);
	 
	    else if(minutes > 30 && minutes<=60)
		printf("%s minutes to %s\n", nums[60 - minutes],
		                             nums[(hours % 12) + 1]);

	    else
		printf("error");
}



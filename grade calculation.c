#include<stdio.h>
int main()
{
	/* ��rencinin notunu ve notuna kar��l�k harf notunu yazan program
	** Devams�zl�k 5.5'in �zerinde ise ort hesaplama-kald�- 
	** ort hesaplarken; vize= %20, �dev= %20 ve final= %60 olarak de�erlendirilir.
	**Ge�me notu= 60 (Final notu 60'�n alt�nda ise kald�.)  */
	
	int midterm,final,homework,absenteeism;
	float grade;
	
	printf("Enter the absenteeism of studend. ");
	scanf("%d",&absenteeism);
	
	if (absenteeism>5.5)
		printf("You failed the course. Try again next year please. :( ");
	
		else
		{
		printf("Enter the midterm grade. ");
		scanf("%d",&midterm);
	
		printf("Enter the final grade. ");
		scanf("%d",&final);
			if (final<60)
				printf("You failed the course. Try again next year please. :( "); 
			
			else
			{
			printf("Enter the homework grade. ");
			scanf("%d",&homework);
			}
	grade= (0.2*midterm) + (0.2*homework) + (0.6*final);
	printf("%3.2f\n",grade);
	
	if (grade>=90 && grade<=100)
		printf("AA");
		
		else if (grade>=80 && grade <=89)
				printf("BA");
		
		else if (grade>=70 && grade <=79)
				printf("BB");
				
		else if (grade>=60 && grade <=69)
				printf("CB");
		
		else if (grade>=50 && grade <=59)
				printf("CC");
				
		else if (grade>=40 && grade <=49)
				printf("DC");
		
		else if (grade>=30 && grade <=39)
				printf("DD");
				
		else if (grade>=0 && grade <=29)
				printf("F");
		
			
		
		}
		
	
	
	
	
	
	return 0;
}

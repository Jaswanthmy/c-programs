    #include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	struct student
	{
			char name[50];
			int roll;
			int sub1;
			int sub2;
			int sub3;
			float percent;
	};
	void display()
	{
		struct student s;
		FILE *ptr1;
		ptr1=fopen("file3.txt","rb");
		printf("| Name | Roll No. | Subject1 | Subject2 | Subject3 | Percentage |\n\n");
		while(fread(&s,sizeof(struct student),1,ptr1))
		{
			printf("%s\t %d\t %d\t %d\t %d\t%.2f\n", s.name, s.roll, s.sub1,
			s.sub2, s.sub3, s.percent);
		}
		fclose(ptr1);
	}
	void insert()
	{
		fflush(stdin);
		struct student s;
		printf("Enter name: ");
		gets(s.name);
		printf("Enter roll number: ");
		scanf("%d", &s.roll);
		printf("Enter marks of Subject 1: ");
		scanf("%d", &s.sub1);
		printf("Enter marks of Subject 2: ");
		scanf("%d", &s.sub2);
		printf("Enter marks of Subject 3: ");
		scanf("%d", &s.sub3);
		s.percent = (s.sub1 + s.sub2 + s.sub3) / 3.0;

		FILE *fp = fopen("file3.txt", "a");
		if (fp == NULL)
		{
			printf("Error in opening file");
		}
		else
		{
			fwrite(&s, sizeof(struct student), 1, fp);
			printf("Inserted successfully...\n");
			fclose(fp);
		}
		display();
	}
	void delete()
	{
		struct student s;
		FILE *ptr1,*ptr2;
		int rollno;
		printf("enter roll number of whom data to be deleted : ");
		scanf("%d",&rollno);
		ptr1=fopen("file3.txt","r+");
		ptr2=fopen("cat1.txt","a+");
		if (ptr1 == NULL)
		{
			printf("Error in opening file");
		}
		else
		{
			while(fread(&s,sizeof(struct student),1,ptr1))
			{
				if(s.roll!=rollno)
				{
					fwrite(&s,sizeof(struct student),1,ptr2);
				}
			}
			fclose(ptr1);
			fclose(ptr2);
			remove("file3.txt");
			rename("cat1.txt","file3.txt");
			printf("deleted sucsessfully..\n");
		}	
		display();
	}
	void update()
	{
		struct student s;
		struct student s1;
		FILE *ptr1,*ptr2;
		int rollno;
		printf("enter roll number of whom data to be updated: ");
		scanf("%d",&rollno);
		ptr1=fopen("file3.txt","r+");
		ptr2=fopen("cat2.txt","a+");
		if (ptr1 == NULL)
		{
			printf("Error in opening file");
		}
		else
		{
			while(fread(&s,sizeof(struct student),1,ptr1))
			{
				if(s.roll!=rollno)
				{
					fwrite(&s,sizeof(struct student),1,ptr2);
				}
				else
				{
					fflush(stdin);
					printf("update student details to-->\n");
					scanf("%s %d %d %d %d",s1.name,&s1.roll,&s1.sub1,&s1.sub2,&s1.sub3);
					s1.percent=(s1.sub1+s1.sub2+s1.sub3)/3.0;
					fwrite(&s1,sizeof(struct student),1,ptr2);
				}
			}
			fclose(ptr1);
			fclose(ptr2);
			remove("file3.txt");
			rename("cat2.txt","file3.txt");
			printf("updated sucsessfully..\n");
		}
		display();
	}
    int main() 
	{
		int i=1;
		while(i!=0)
		{
			printf("----menu----\n");
			printf("1: to insert row\n");
			printf("2: to delete row\n");
			printf("3: to update row\n");
			printf("4: to display\n");
			printf("0: to exit -->");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
				{
					insert();
					break;
				}
				case 2:
				{
					delete();
					break;
				}
				case 3:
				{
					update();
					break;
				}
				case 4:
				{
					display();
					break;
				}
				case 0:
				{
					printf("\nexited\n");
					break;
				}
				default:
				{
					printf("wrong input enter again....\n");
					break;
				}
			}
		}
    }
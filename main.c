#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4


int func_suv()
{
    int car_choice,days;
    char suv[N][20]={"Scorpio","Xuv700","Creta","Fortuner"};
    char colour[N][20]={"Red","Blue","White","Black"};
    int rent_suv[N]={700,800,650,800};
    char name[3][20];
    int phone_no;

    printf("The cars available are:\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("|\tCar Company\t|\tCar Name  \t|\tCar Colour\t|\tRent per day\t|\n");
    printf("|\t 1.Mahindra  \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",suv[0],colour[1],rent_suv[0]);
    printf("|\t 2.Mahindra  \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",suv[1],colour[2],rent_suv[1]);
    printf("|\t 3.Hyundai   \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",suv[2],colour[0],rent_suv[2]);
    printf("|\t 4.Fortuner   \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",suv[3],colour[3],rent_suv[3]);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("Which Car would you like to take for rent(enter 1,2,3 or 4 according to choice):");
    scanf("%d",&car_choice);
    if (car_choice==1)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",suv[0],colour[1]);
        printf("Total rent is- %d\n",days*rent_suv[0]);
        }
    else if(car_choice==2)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",suv[1],colour[2]);
        printf("Total rent is- %d\n",days*rent_suv[1]);
        }
    else if(car_choice==3)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",suv[2],colour[0]);
        printf("Total rent is- %d\n",days*rent_suv[2]);

        }
    else if(car_choice==4)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",suv[3],colour[3]);
        printf("Total rent is- %d\n",days*rent_suv[3]);
        }
    else
        {
            printf("You have entered a wrong number");
        }
    return 0;
}
int func_sedan()
{
    int car_choice,days;
    char colour[N][20]={"Red","Blue","White","Black"};
    char sedan[N][20]={"Swift Dzire","Fiesta","Amaze","Aura"};
    int rent_sedan[4]={600,650,600,600};

    printf("The cars available are:\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|\t Car Company       \t|\tCar Name\t|\tCar Colour\t|\tRent per day\t|\n");
    printf("|\t 1.Maruti Suzuki   \t|\t%s     |\t%s        \t|\t%d         \t|\n",sedan[0],colour[1],rent_sedan[0]);
    printf("|\t 2.Ford            \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",sedan[1],colour[2],rent_sedan[1]);
    printf("|\t 3.Honda           \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",sedan[2],colour[0],rent_sedan[2]);
    printf("|\t 4.Hyundai         \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",sedan[3],colour[3],rent_sedan[3]);
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("Which Car would you like to take for rent(enter 1,2,3 or 4 according to choice):");
    scanf("%d",&car_choice);
    if (car_choice==1)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",sedan[0],colour[1]);
        printf("Total rent is- %d\n",days*rent_sedan[0]);

        }
    else if(car_choice==2)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",sedan[1],colour[2]);
        printf("Total rent is- %d\n",days*rent_sedan[1]);
        }
    else if(car_choice==3)
        {
        printf("Car rented is %s colour-%s\n",sedan[2],colour[0]);
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",sedan[2],colour[0]);
        printf("Total rent is- %d\n",days*rent_sedan[2]);

        }
    else if(car_choice==4)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",sedan[3],colour[3]);
        printf("Total rent is- %d\n",days*rent_sedan[3]);
        }
    else
        {
            printf("You have entered a wrong number\n");
        }
    return 0;
}
int func_hatchback()
{
    int car_choice,phone_no,days;
    char colour[N][20]={"Red","Blue","White","Black"};
    char hatchback[N][20]={" Swift"," i20"," Altroz","Wagon R"};
    int rent_hatchback[4]={550,500,530,500};
    char name[3][20];

    printf("The cars available are:\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|\t Car Company       \t|\tCar Name\t|\tCar Colour\t|\tRent per day\t|\n");
    printf("|\t 1.Maruti Suzuki   \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",hatchback[0],colour[3],rent_hatchback[0]);
    printf("|\t 2.Hyundai         \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",hatchback[1],colour[1],rent_hatchback[1]);
    printf("|\t 3.Tata            \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",hatchback[2],colour[2],rent_hatchback[2]);
    printf("|\t 4.Maruti Suzuki   \t|\t%s      \t|\t%s        \t|\t%d         \t|\n",hatchback[3],colour[0],rent_hatchback[3]);
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("Which Car would you like to take for rent(enter 1,2,3 or 4 according to choice):");
    scanf("%d",&car_choice);
    if (car_choice==1)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",hatchback[0],colour[3]);
        printf("Total rent is- %d\n",days*rent_hatchback[0]);
        }
    else if(car_choice==2)
        {
        printf("Car rented is %s colour-%s\n",hatchback[1],colour[1]);
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",hatchback[1],colour[1]);
        printf("Total rent is- %d\n",days*rent_hatchback[1]);
        }
    else if(car_choice==3)
        {
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",hatchback[2],colour[2]);
        printf("Total rent is- %d\n",days*rent_hatchback[2]);
        }
    else if(car_choice==4)
        {
        printf("Car rented is %s colour-%s\n",hatchback[3],colour[0]);
        printf("For how many days would you want to take it on rent:");
        scanf("%d",&days),
        printf("Car rented is %s colour-%s\n",hatchback[3],colour[0]);
        printf("Total rent is- %d\n",days*rent_hatchback[3]);

        }
    else
        {
            printf("You have entered a wrong number\n");
        }
    return 0;
}

int main()
{
    int type,car_choice;
    char name[3][20];
    int phone_no;
    printf("\t\t\t\t\t  Car Rental Corporation\n\n");
    printf("Enter the type of car you would like to take on rent\n1.SUV\t\t\t2.Sedan\t\t\t3.Hatchback\n");
    scanf("%d",&type);

    if (type==1)
    {
       func_suv();

    }
    else if(type==2)
    {
       func_sedan();
    }
    else if(type==3)
    {
       func_hatchback();
    }
    else
    {
       printf("You have entered a wrong number");
    }
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your contact number:");
    scanf("%d",&phone_no);
    srand(time(NULL));
    printf("Your Receipt is:\n\n");
    printf("---------------------------------\n");
    printf("|Name:%s\t\t\t|\n|Contact No:%d\t\t|\n|Receipt No:%d\t\t|\n",name[0],phone_no,rand());
    printf("---------------------------------");
    return 0;
}

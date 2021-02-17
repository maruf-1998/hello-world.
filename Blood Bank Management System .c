
//DECLARING HEADERS

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

char ans=0;
int ok;
int b, valid=0;

//DECLEARING FUNCTIONS

void WelcomeWindow();   //For Welcome Window
void TopHeader();       //For making the Top Header File
void MainMenu();    //For Displaying Main Menu
void LoginPage();  //Log In Screen
void AddingDonors();     //Adding Donor's Portfolio
void func_list();   //List of Donor's Portfolio
void SearchingDonors();  // Searching Donors
void EditingPortfolio();    //Editing Donor's Portfolio
void RemoveDonors();     //Deleting Donor's Portfolio
void quit();       //Quit

//For showing the cursor in Desired Co Ordinates

void gotoxy(short x, short y)
{
COORD pos = {x, y};// co-ordinates setting in (x,y).
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

struct donor// global variable declaring

{
	int Age;
	char Gender;
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Blood_Group[5];
};

struct donor d, temp_c;



main(void)
{

    WelcomeWindow();//Use to call WelcomeWindow function
	TopHeader();//Use to call TopHeader function
	LoginPage();//Use to call LoginPage function


}
/* ************************************************* Welcome Window ********************************************* */
void WelcomeWindow(void) //function for welcome Window
{

	printf("\n\n\n\n\n\n\n\t\t\t\t-----------------------------------------");
	printf("\n\t\t\t\t|\t\tWELCOME TO\t\t|");
	printf("\n\t\t\t\t|\t BLOOD MANAGEMENT SYSTEM\t|");
	printf("\n\t\t\t\t-----------------------------------------");
	printf("\n\n\n\n\nWant to proceed? Press any key...\n");
	getch();// holds screen for some seconds
	system("cls");// for clearing screen

}
/* ************************************************* Top Heading ********************************************* */
void TopHeader(void)// shows header in screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t\t      BLOOD MANAGEMENT SYSTEM        ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}

/* ************************************************* Login Page ********************************************* */
void LoginPage(void)//function for login page
{
//variable listing
int error=0, count=2;
char Username[15];
char Password[15];
char original_Username[25]="maruf";
char original_Password[15]="maruf1234";

    printf("\n\n\n\n\t\t\t\tWant to Login? Fill this up!");

do
{

	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);

	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",&Password);

	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
		printf("\n\n\t\t\t\t...Congratulations! Access Granted...");


		getch();
		MainMenu();//call MainMenu function
		break;
	}
	else
	{
		printf("\n\t\t\t\tAccess Denied!! %d more shots to go!", count);
		error++;
		count--;
		getch();

	}

}
while(error<=2);
	if(error>2)
	{
	printf("\n\n\n\n\t\t\t\tShit happens. Better luck next time!");
	getch();
    quit();
	}

system("cls");
}

/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//takes the main menu
{
	system("cls");
	int choose;
	TopHeader();// call header function
	printf("\n\n\n\n\n\t\t\t\t1. Become a Donor\n");
	printf("\n\t\t\t\t2. List of Donors\n");
	printf("\n\t\t\t\t3. Find Blood\n");
	printf("\n\t\t\t\t4. Edit Donor's Profile \n");
	printf("\n\t\t\t\t5. Delete Donor's Profile\n");
	printf("\n\t\t\t\t6. Exit\n");
	A:
	printf("\n\n\n \n\t\t\t\tPick Your Options (from 1 to 6): ");
	scanf("%i", &choose);

	switch(choose)//switch to different cases
	{

	case 1:
	AddingDonors();//AddingDonors function is called
    	break;
    case 2:
    	func_list();
    	break;
	case 3:
	SearchingDonors();//SearchingDonors function is call
    	break;
	case 4:
		EditingPortfolio();//EditingPortfolio function is call
		break;
	case 5:
		RemoveDonors();//RemoveDonors function is call
		break;
	case 6:
		quit();//ex_it function is call
    	break;

	default:
		printf("\n\n\n\t\t\t\tInvalid Entry. Check out for the right ones!");
		getch();//holds screen
		goto A;
	}//end of switchBlood_Group




}
/* ************************************************* Exit Screen ********************************************* */
void quit(void)//function to quit
{
	system("cls");
	TopHeader();// call TopHeader function
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING !");
	getch();//holds screen

}



/* ************************************** Donor's Profile *******************************************/

void AddingDonors(void)
{
	system("cls");
	TopHeader();// call TopHeader function
	//list of variables
	char ans;
	FILE*ek;//file pointer
	ek=fopen("Profile.dat","a");//open file in write mode
	printf("\n\n\t\t\t\t!!!!!!!!!!!!!! Donor's Profile !!!!!!!!!!!!!\n");

	/* ************************** First Name *********************************** */
	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",d.First_Name);
	d.First_Name[0]=toupper(d.First_Name[0]);
	if(strlen(d.First_Name)>20||strlen(d.First_Name)<2)
	{
		printf("\n\t Invalid Input! \t The max range for first name is 20 and min range is 2...");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(d.First_Name);b++)
		{
			if (isalpha(d.First_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid Character! Enter again...");
			goto A;
		}
	}

	/* ********************************************** Last Name ************************************************ */
	B:
	printf("\n\t\t\tLast Name: ");
    scanf("%s",d.Last_Name);
    d.Last_Name[0]=toupper(d.Last_Name[0]);
    if(strlen(d.Last_Name)>20||strlen(d.Last_Name)<2)
	{
		printf("\n\t Invalid Input! \t The max range for last name is 20 and min range is 2...");
		goto B;
	}
	else
	{
		for (b=0;b<strlen(d.Last_Name);b++)
		{
			if (isalpha(d.Last_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Last name contain Invalid Character! Enter it again...");
			goto B;
		}
	}
/* ******************************************* Gender ************************************************************** */
	do
	{
	    G:
	    printf("\n\t\t\tGender[F(Female)/M(Male)]: ");
		scanf(" %c",&d.Gender);
		if(toupper(d.Gender)=='M'|| toupper(d.Gender)=='F')
		{
			ok =1;
		}
		else
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character!  Enter either F or M...");
	    	goto G;
    	}
	 }
	 while(!ok);

/* ***************************************** Age ********************************************************************** */
    do
	{
	    H:
	    printf("\n\t\t\tAge: ");
        scanf(" %i",&d.Age);
		if(d.Age <=120)
		{
			ok =1;
		}
		else
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Age contain Inappropriate Value! Enter your age again...");
	    	goto H;
    	}
	 }
	 while(!ok);


/* **************************************** Address ******************************************************************* */
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",d.Address);
    d.Address[0]=toupper(d.Address[0]);
    if(strlen(d.Address)>20||strlen(d.Address)<4)
	{
		printf("\n\t Invalid!\t The max range for address is 20 and min range is 4 ...");
		goto C;
	}

}
while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",d.Contact_no);
    if(strlen(d.Contact_no)!=11)
	{
		printf("\n\tInvalid Input! Contact no. must contain 11 numbers. Enter again...");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(d.Contact_no);b++)
		{
			if (!isalpha(d.Contact_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid Character! Enter again...");
			goto D;
		}
	}
}
while(!valid);

/* ************************************************** Email ******************************************** */
do
{
    F:
    printf("\n\t\t\tEmail: ");
    scanf("%s",d.Email);
    if (strlen(d.Email)>30||strlen(d.Email)<8)
    {
       printf("\n\t Invalid Input!\t The max range for email is 30 and min range is 8...");
       goto F;
	}
}
    while(strlen(d.Email)>30||strlen(d.Email)<8);

/* ********************************************************* Blood Group *********************************************** */
do
{
    E:
    printf("\n\t\t\tBlood Group: ");
    scanf("%s",d.Blood_Group);
    d.Blood_Group[0]=toupper(d.Blood_Group[0]);
    if(strlen(d.Blood_Group)>3||strlen(d.Blood_Group)<1)
	{
		printf("\n\t Invalid Input!\t The max range for Blood Group is 3 and min range is 1...");
		goto E;
	}
    if(isalpha(d.Blood_Group[1])!=0)
    {
        d.Blood_Group[1]=toupper(d.Blood_Group[1]);
    }
}
    while(strlen(d.Blood_Group)>3||strlen(d.Blood_Group)<1);


    fprintf(ek," %s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
    printf("\n\n\t\t\t.... Profile Saved Successful ...");
    fclose(ek);//ek file is closed
    check:
    getch();
    printf("\n\n\t\tWant to add more? [Y(Yes)/N(No)] : ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	AddingDonors();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you...");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input!\n");
        goto check;
    }
}
/* ************************************** View Donor's List *******************************************/
void func_list()
{
	int row;
	system("cls");
	TopHeader();
	FILE *ek;
	ek=fopen("Profile.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Donor's List !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("Full Name");
		gotoxy(20,15);
		printf("Gender");
		gotoxy(29,15);
		printf("Age");
		gotoxy(34,15);
		printf("Address");
		gotoxy(50,15);
		printf("Contact No.");
		gotoxy(64,15);
		printf("Email");
		gotoxy(94,15);
		printf("Blood Group\n");
		printf("=========================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name,
					&d.Gender, &d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group)!=EOF)
		{
			gotoxy(1,row);
			printf("%s %s",d.First_Name, d.Last_Name);
			gotoxy(20,row);
			printf("%c",d.Gender);
			gotoxy(29,row);
			printf("%i",d.Age);
			gotoxy(34,row);
			printf("%s",d.Address);
			gotoxy(50,row);
			printf("%s",d.Contact_no);
			gotoxy(64,row);
			printf("%s",d.Email);
			gotoxy(94,row);
			printf("%s",d.Blood_Group);
			row++;
		}
		fclose(ek);
		getch();
		MainMenu();
}

/* ************************************** Search Blood Group *******************************************/

void SearchingDonors(void)
{
    int row=17;
	char group[20];
	system("cls");
	TopHeader();// call TopHeader function
	FILE *ek;
	ek=fopen("Profile.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Donor's Profile !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Blood Group to be viewed:");
	scanf("%s",group);
	fflush(stdin);
	group[0]=toupper(group[0]);
	if(isalpha(group[1])!=0)
    {
        group[1]=toupper(group[1]);
    }
	while(fscanf(ek,"%s %s %c %i %s %s %s %s", d.First_Name, d.Last_Name, &d.Gender, &d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group)!=EOF)
	{
		if(strcmp(d.Blood_Group,group)==0)
		{
			gotoxy(1,15);
            printf("Full Name");
            gotoxy(20,15);
            printf("Gender");
            gotoxy(29,15);
            printf("Age");
            gotoxy(34,15);
            printf("Address");
            gotoxy(50,15);
            printf("Contact No.");
            gotoxy(64,15);
            printf("Email");
            gotoxy(94,15);
            printf("Blood Group\n");
			printf("=========================================================================================================");
			gotoxy(1,row);
			printf("%s %s",d.First_Name, d.Last_Name);
			gotoxy(20,row);
			printf("%c",d.Gender);
			gotoxy(29,row);
			printf("%i",d.Age);
			gotoxy(34,row);
			printf("%s",d.Address);
			gotoxy(50,row);
			printf("%s",d.Contact_no);
			gotoxy(64,row);
			printf("%s",d.Email);
			gotoxy(94,row);
			printf("%s",d.Blood_Group);
			printf("\n");

		}
	   }
	   //if(strcmp(d.Blood_Group,group)=0)
	   //{
		//gotoxy(5,10);
		//printf("This specific Blood Group is available!");
		//getch();
	   //}
	   if(strcmp(d.Blood_Group,group)!=0)
	   {
		gotoxy(5,10);
		printf("This specific Blood Group is unavailable!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SearchingDonors();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you!");
    	getch();
		MainMenu();
    }
	else
    {
    	printf("\n\tInvalid Input...\n");
    	goto L;
    }
}

/* ************************************** Edit Profile *******************************************/

void EditingPortfolio(void)
{
	FILE *ek, *ft;
  int i, b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	TopHeader();// call Title window
 		ft=fopen("Edit.dat","w+");
	   ek=fopen("Profile.dat","r");
	   if(ek==NULL)
	   {
		printf("\n\tCan not open file!! ");
		getch();
		MainMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Donor's Profile !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the First Name of the Donor : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);

		if(ft==NULL)
		{
			printf("\n Can not open file!!");
			getch();
			MainMenu();
		}
		while(fscanf(ek,"%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, &d.Gender, &d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group)!=EOF)
		{
			if(strcmp(d.First_Name, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
				gotoxy(12,22);
				printf("Enter New First Name: ");
				scanf("%s",d.First_Name);
				gotoxy(12,24);
				printf("Enter Last Name: ");
				scanf("%s",d.Last_Name);
				gotoxy(12,26);
				printf("Enter Gender: ");
				scanf(" %c",&d.Gender);
				d.Gender=toupper(d.Gender);
				gotoxy(12,28);
				printf("Enter age: ");
				scanf(" %i",&d.Age);
				gotoxy(12,30);
				printf("Enter Address: ");
				scanf("%s",d.Address);
				d.Address[0]=toupper(d.Address[0]);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",d.Contact_no);
				gotoxy(12,34);
				printf("Enter New email: ");
				scanf("%s",d.Email);
			    gotoxy(12,36);
				printf("Enter New Blood Group: ");
				scanf("%s",d.Blood_Group);
				d.Blood_Group[0]=toupper(d.Blood_Group[0]);
                if(isalpha(d.Blood_Group[1])!=0)
                {
                    d.Blood_Group[1]=toupper(d.Blood_Group[1]);
                }
			    gotoxy(12,38);
			    printf("\nTo Update your changes, Press U : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
				printf("\n\n\t\t\t...Donor's Profile Updated Successfully...");
				}
			}
			else
			{
			fprintf(ft,"%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
			}
		 }
		 if(!valid) printf("\n\t\tNo Profile Found...");
	   fclose(ft);
	   fclose(ek);
	   remove("Profile.dat");
   	   rename("Edit.dat","Profile.dat");
       getch();
       MainMenu();
}

/* ************************************** Delete Portfolio *******************************************/

void RemoveDonors()
{

	char name[20], ch;
	int found=0;
	system("cls");
	TopHeader();// call TopHeader function
	FILE *ek, *ft;
	ft=fopen("temp_Edit.dat","w+");
	ek=fopen("Profile.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Donor's Profile !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Donor's Name To Delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);

	while (fscanf(ek,"%s %s %c %i %s %s %s %s", d.First_Name, d.Last_Name, &d.Gender,
			 &d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group)!=EOF)
	{
		if (strcmp(d.First_Name,name)!=0)
		fprintf(ft,"%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
		else
		{
			printf("%s %s %c %i %s %s %s %s\n", d.First_Name, d.Last_Name, d.Gender, d.Age, d.Address, d.Contact_no, d.Email, d.Blood_Group);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Profile not found...");
		getch();
		MainMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		printf("\nAre You Sure? If Yes, Press Y : ");
				ch=getche();
				if(ch=='y' || ch=='Y')
				{
				remove("Profile.dat");
                rename("temp_Edit.dat","Profile.dat");
                printf("\n\n\t\t\t Profile deleted successfully...");
				}

			else
			{
			fprintf(ft,"%s %s %c %i %s %s %s %s\n",d.First_Name,d.Last_Name,d.Gender, d.Age,d.Address,d.Contact_no,d.Email,d.Blood_Group);
			}

		getch();
		MainMenu();
	}
}




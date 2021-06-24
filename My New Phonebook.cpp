#include<bits/stdc++.h>
#include<windows.h>
#include <cwchar>
using namespace std;
void start();
int menu();
void start()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t----------------------------\n";
	cout<<"\t\t\t\t\t\t----------------------------\n";
	SetConsoleTextAttribute(h,14);
	cout<<"\t\t\t\t\t\t  SNEHAL's CONTACT BOOK  \n";
	cout<<"\t\t\t\t\t\t----------------------------\n\n";
	cout<<"\t\t\t\t\t\t----------------------------\n\n";
	cout<<"\t\t\t\t\tLoading ";
	char x = 219;
	for(int i=0; i<35; i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");	
}

int menu()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<"\n\n\n\n";
	cout<<"\t\t\t\t----------------------------------------------\n";
	SetConsoleTextAttribute(h,10);
	cout<<"\t\t\t\t//////////////////////////////////////////////\n";
	SetConsoleTextAttribute(h,23);
	cout<<"\t\t\t\t||       SNEHAL'S CONTACT BOOK APP          ||\n";
	SetConsoleTextAttribute(h,15);
	cout<<"\t\t\t\t##------------------------------------------##\n";	
	cout<<"\t\t\t\t||                                          ||\n";
	cout<<"\t\t\t\t||       [1]  ADD NEW CONTACT               ||\n";
	cout<<"\t\t\t\t||       [2]  DISPLAY LIST OF CONTACT       ||\n";
	cout<<"\t\t\t\t||       [3]  SEARCH BY NO.                 ||\n";
	cout<<"\t\t\t\t||       [4]  SEARCH BY NAME                ||\n";
	cout<<"\t\t\t\t||       [5]  NO OF CONTACTS                ||\n";
	cout<<"\t\t\t\t||       [6]  DELETE                        ||\n";
	cout<<"\t\t\t\t||       [7]  ALL DELETE                    ||\n";
	cout<<"\t\t\t\t||       [8]  UPDATE                        ||\n";
	cout<<"\t\t\t\t||                                          ||\n";
	cout<<"\t\t\t\t##------------------------------------------##\n";
	cout<<"\t\t\t\t||            [9]    Exit                   ||\n";
	SetConsoleTextAttribute(h,10);
	cout<<"\t\t\t\t**------------------------------------------**\n";	

	int x;
	SetConsoleTextAttribute(h,15);
	cin>>x;
	system("cls");
	return x;
}

int main()
{
	start();
    int check=0, i=0,j=0, no_of_contact=0;
    check=menu();
    string no[200];
    string name[200];
   
    do
	{
     system("Color 0B");
	if(check==1)
	{
	        cout<<"\n\t\t\t\tName:";
			cin>>name[j];                                     //name no addition
			cout<<"\n\t\t\t\tNumber:";
			cin>> no[j];
			j++;
			no_of_contact++;	
	}                
			
	 else if(check==2)                  // Display all contacts list
		{
			int xchecker=0;
		    for(i=0;i<j;i++)
			{
		    	cout<<"\t\t\t\t Name:"<<name[i] << "\t\t\t Number:"<<no[i]<<endl;  // display list
		    	xchecker++;
			}
			if(xchecker==0)
			{
				cout<<"\t\t\t\t\t Your Contact list is Empty !" <<endl;
			}	
			
		}
				
		else if(check==3)  // Search by no
		{
			string temp="";
			int xchecker=0;
            cout<<"\t\t\t\tEnter Number to Search:";
            cin>>temp;
            for(i=0;i<j;i++)
			{
             if(temp==no[i])
			 {
             	cout<< "\n\t\t\t\tName:"<<name[i] << "\t\t Number:"<<no[i]<<endl;
             	xchecker++;
			 }	
			}
			if(xchecker==0)
			{
			  cout<<"\n\t\t\t\tContact NOT found!"<<endl;	
			}
		
		}
         
		else if(check==4) // search by name
		 {
			string temp="";
			int xchecker=0;
            cout<<"\t\t\t\tEnter Name to Search:";
            cin>>temp;
            for(i=0;i<j;i++)
			{
             if(temp==name[i])
			 {
             	cout<< "\n\t\t\t\tName:"<<name[i] << "\t\t Number:"<<no[i]<<endl;
             	xchecker++;
			 }	
			}
			if(xchecker==0)
			{
			  cout<<"\n\t\t\t\tContact NOT found!"<<endl;	
			}
			
		}
		
		else if(check==5)  // total no of contacts
		{
			cout<<"\t\t\t\tTotal Number of contacts in List are:"<<no_of_contact<<endl;
		
		} 
		
		else if(check==6)  //Delete contact
		{
		    string temp="";
			int xchecker=0;
            cout<<"\t\t\t\tEnter Name to Delete:"<<endl;
            cin>>temp;
            for(i=0;i<j;i++)
			{
             if(temp==name[i])
			 {
			 	cout<<"\t\t\t\tContact Found"<<endl;
             	cout<< "\t\t\t\tName:"<<name[i] << "\t\t Number:"<<no[i]<<endl;
             	cout<<"\t\t\t\t\tContact Deleted Succesfully!"<<endl;
             	name[i]="\0";
             	no[i]="\0";
             	no_of_contact--;
			    xchecker++;
			 }	
			}
			if(xchecker==0)
			{
			  cout<<"\t\t\t\tContact Not found!"<<endl;	
			}
		
		}  
		
		else if(check==7)  //delete all contacts
		{
			for(i=0;i<j;i++)
			{
				name[i]="";
				no[i]="";
	        	}
			no_of_contact=0;
			j=0;	
		   
		}
		
		else if(check==8)  // update 
		{
			char x='\0';
			string temp1="", temp2="";
			int xchecker1=0,xchecker2=0;
			cout<<" \t\tEnter: \t \t i. To update Name \n\t\t\t\t I. To update Number"<<endl;
			cin>>x;
			if(x=='i'){
				cout<<"\t\t\t\t\nEnter previous Name"<<endl;
				cin>>temp1;
				cout<<"\t\t\t\t\nEnter Name for Update"<<endl;
				cin>>temp2;
				for(i=0;i<j;i++){
					if(temp1==name[i])
					{
					  	name[i]=temp2;
					  	xchecker1++;
					  	cout<<"\n\t\t\t\tUpdate Successful!"<<endl;
					}
				}
				if(xchecker1==0)
				{
				  cout<<"\n\t\t\tPlease Enter correct Previous name"<<endl;	
				}
			}
			if(x=='I'){
				cout<<"\n\t\t\tEnter Previous Name"<<endl;
				cin>>temp1;
				cout<<"\n\t\t\tEnter Number to be Updated"<<endl;
				cin>>temp2;
				for(i=0;i<j;i++){
					if(temp1==name[i])
					{
					  	no[i]=temp2;
					  	xchecker2++;
					  	cout<<"\n\t\t\t\tUpdate Successful!"<<endl;
					}
				}
				if(xchecker2==0)
				{
				  cout<<"\n\t\t\t\tPlease Enter Correct Name"<<endl;	
				}
			}
		}
	check=menu();	
	
	}while(check!=9);
	
 //return 0;
}


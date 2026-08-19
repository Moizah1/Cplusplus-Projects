/*Ticket reservaion system*/
#include<iostream>
#include<time.h> //It is included to use the "time_t" structure and "ctime" to get the current time.
#include <bits/stdc++.h> // C++ program to find size of an array by writing our
// User defined size of macro
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;
class FLY{
	protected:
		int choose;
		char nam[30];//Name
		char gender[10];//Gender
	    char nat[30];//Nationality
	    int fli;//Flight number
	    char date[12];//complete day.
	   	char f_tme[20];//flight time
	    char airline[30];
	  	int total_seats[45];//Total Seats
	  	int reserve_seats;
	  	int remaining_seat;
	    int s_num;//seat number
	    int age;//Age
	
	public:
		FLY()
		{	}
	
				const unsigned char get_flight()
		{
			cout<<"On Which Time You Want To Travel"<<endl;
			cout<<"Press 1 for 10:00 AM"<<endl;
 		    cout<<"Press 2 for 11:00 AM"<<endl;
 			cout<<"Press 3 for 2:00 PM"<<endl;
			cin>>choose;
			      if(choose==1)
			         {
				       cout<<"Your time of travelling is 10:00 AM. Enjoy Your JOURNEY. "<<endl;
			         }
                      if(choose==2)
			            {
				          cout<<"Your time of travelling is 11:00 AM. Enjoy Your JOURNEY. "<<endl;
		            	}
                            if(choose==3)
			                   {
				                 cout<<"Your time of travelling is 2:00 PM. Enjoy Your JOURNEY. "<<endl;
			                   }
                
			}
		
	
};

class EMPLOYEE:public FLY{
	public:
	EMPLOYEE()
	{	}
	
	     char get_data()
	     {
	     	cout<<"\n Enter Your Name:  ";
			cin>>nam;
			cout<<"\n Gender Male/Female:  ";
			cin>>gender;
	     	cout<<"\n Enter Your Nationality:  ";
			cin>>nat;
	     	cout<<"\n Enter Your Flight no.: ";
			cin>>fli;
	     	cout<<"\n Enter Total Seats For reservation:  ";
			cin>>reserve_seats;
			for(int i=1;i<reserve_seats+1;i++){
				total_seats[i]=i;
			}
	     	cout<<"\n Enter Your Age:  ";
			 cin>>age;
	     	cout<<"\n Enter Airline:  ";
			 cin>>airline;
	     	cout<<"\n Enter Reservation date :  ";
			 cin>>date;
	     	cout<<"\n Enter Reservation full time : ";
			cin>>f_tme;
			 
	     		return 0;
		 }
		 void display(){
		 	time_t t;//Structure of Time vriable which stores whole date current GMT Time.
   			time(&t);//Libray Function to Check Current Time.
   			int size = my_sizeof(total_seats)/my_sizeof(total_seats[0]);

			 	 
		 	cout<<"\n\n\t\t Name: "<<nam<<endl;
			cout<<"\t\t Gender: "<<gender<<endl;
			cout<<"\t\t Age: "<<age<<endl;
			cout<<"\t\t Nationality: "<<nat<<endl;
		 	cout<<"\t\t Airline: "<<airline<<endl;
			cout<<"\t\t Flight no: "<<fli<<endl;
			cout<<"\t\t Total Seats: "<<size<<endl;
			cout<<"\t\t Seats No: ";
			for(int j=1;j<reserve_seats+1;j++){
				cout<<total_seats[j];
				if(j!=reserve_seats){
					cout<<",";
				}
			}
			cout<<"\n \t\t Remaining Seats: "<<size-reserve_seats<<endl;
			cout<<"\t\t Reservation Date: "<<ctime(&t);
			
		 	
		 	
		 }
	
	
	
};

main()
{
    int op,i;
	
	EMPLOYEE E1;
		
			time_t t;//Structure of Time vriable which stores whole date current GMT Time.
    time(&t);//Libray Function to Check Current Time.

 cout<<"\t%%      %%      ";
       cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
       cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
       cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
       cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
       cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
       cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
       cout<<"\n\t\t\t           $$     $   $      ";
       cout<<"\n\t\t\t           $$     $$$$$    ";
 
 
    
	cout<<endl<<"\t\t*********************************************************\n\t\t|\t\t\t\t\t\t\t|\n\t\t";
	cout<<"|\t\t\t\t\t\t\t|\n\t\t|\t\t     Ticket Reservation!   \t\t|\n\t\t|\t\t\t\t\t\t\t|\n\t\t";
	cout<<"|\t\t\t\t\t\t\t|\n\t\t|\t\t     Welcome to Airline!   \t\t|\n\t\t|\t\t\t\t\t\t\t|\n\t\t";
	cout<<"|\t\t\t\t\t\t\t|\n\t\t*********************************************************\n";
       <<endl;
       

		cout<<"\n\n\n";
       cout<<"Enter any Number to continue process:";
       cin>>op;
       
		cout<<"\n\n\n";
        cout<<"\t\t\t";
	cout<<ctime(&t); // Prints the Current Time.
		cout<<"\n\n\n";
			E1.get_data();
		cout<<"\n\n\n";
	       E1.get_flight();
	       E1.display();

   
}


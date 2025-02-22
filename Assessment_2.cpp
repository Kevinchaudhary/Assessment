#include<iostream>
using namespace std;
class Event
{
	int guest_num,num_min,nservers;
	int Serv_cost,Total_cost;
	float Food_cost,Ave_cost;
	char evn_name[20];
	char guest_name[20];
	public:
			void get_det()
			{
				cout<<"\nEnter the name of the event\n";
				gets(evn_name);
				cout<<"\nEnter customer's first and last name\n";
				gets(guest_name);
				cout<<"\nEnter the number of guest\n";
				cin>>guest_num;
				cout<<"\nEnter the number of minutes in the event\n";
				cin>>num_min;	
			}
			void find_cost()
			{
				float Cost_H=18.50,Cost_Min=0.40,Cost_Dinner=20.70;
				float Cost1 = (num_min/60)*Cost_H;
				float Cost2 = (num_min%60)*Cost_Min;
				Serv_cost = Cost1+Cost2;
				Food_cost = guest_num*Cost_Dinner;
				Ave_cost = Food_cost/guest_num;
			}
			void print()
			{
				if(guest_num % 20 == 0)
				{
					nservers=guest_num/20;
					cout<<"\nNumber Of Server : "<<nservers;
				}		
				else
				{
					nservers=(guest_num/20)+1;
					cout<<"\nNumber Of Server : "<<nservers;
				}
				cout<<"\nThe Cost for Servers : "<<Serv_cost;
				cout<<"\nThe Cost for Food is : "<<Food_cost;
				cout<<"\nAvergae Cost Per Person : "<<Ave_cost;
				Total_cost = Food_cost+(Serv_cost*nservers);
				cout<<"\nTotal Cost is : "<<Total_cost;
				cout<<"\nPlease deposite a 25% deposite to reserve the event";
				float dep = (Total_cost*25)/100;
				cout<<"\nThe deposite needed is: "<<dep;
			}
};
main()
{
	Event x;
	x.get_det();
	x.find_cost();
	x.print();
}



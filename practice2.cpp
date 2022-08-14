#include<bits/stdc++.h>
#include<fstream>
#define vi vector<int>
#define vii vector<int,int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#include<winbgim.h>
#include<graphics.h>
#include<windows.h>
#include<algorithm>
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
using namespace std;

int countRoom=100;
int CountRoom=0;
int N=100;
int Totalrooms[100];
vi BOOKEDROOM;
int FixedPrice=2000;
int gst=12;
int igst=5;
int cgst=12;
int bgst=18;
int days=0;
float total=0,total2=0;



char ROOMS[101]= {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
void roomsmap()
{
	cout<<"\n      GROUND-FLOOR         1-FLOOR               2-FLOOR                 3-FLOOR               4-FLOOR                 5-FLOOR                6-FLOOR      \n";
	cout<<"      K->KING-SIZE         K->KING-SIZE          K->KING-SIZE            K->KING-SIZE          K->KING-SIZE            K->KING-SIZE           K->KING-SIZE     \n";
	cout<<" +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+    +-------+  +-------+\n";
	cout<<" |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |    |       |  |       |\n";
	cout<<" |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |    |   K   |  |   K   |\n";
	cout<<" +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+    +--------  --------+\n";
	cout<<" |                  =====                  |   |                  =====                  |   |                  =====                  |    |                  |\n";
	cout<<" |___   ____________=====___   ____________|   |___   ____________=====___   ____________|   |___   ____________=====___   ____________|    |___   ____________|\n";
	cout<<" |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |    |   |  |     |     |\n";
	cout<<" | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |    | S |L | D   |  D  |\n";
	cout<<" --------------------   --------------------   --------------------   --------------------   --------------------   --------------------    --------------------\n";
	cout<<"   ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^         ^       ^     ^   \n";
	cout<<"   |       |     |        |       |     |        |       |     |        |       |     |        |       |     |        |       |     |         |       |     |   \n";
	cout<<" [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE]  [D-DOUBLE]    [SINGLE] [D-DOUBLE]     [SINGLE] [D-DOUBLE]\n";
		cout<<"\n      GROUND-FLOOR         1-FLOOR               2-FLOOR                 3-FLOOR               4-FLOOR                 5-FLOOR                6-FLOOR      \n";

		cout<<"      K->KING-SIZE         K->KING-SIZE          K->KING-SIZE            K->KING-SIZE          K->KING-SIZE            K->KING-SIZE           K->KING-SIZE     \n";
	cout<<" +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+    +-------+  +-------+\n";
	cout<<" |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |    |       |  |       |\n";
	cout<<" |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |    |   K   |  |   K   |\n";
	cout<<" +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+    +--------  --------+\n";
	cout<<" |                  =====                  |   |                  =====                  |   |                  |   |                  |    |                  |\n";
	cout<<" |___   ____________=====___   ____________|   |___   ____________=====___   ____________|   |___   ____________|   |___   ____________|    |___   ____________|\n";
	cout<<" |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |    |   |  |     |     |\n";
	cout<<" | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |    | S |L | D   |  D  |\n";
	cout<<" --------------------   --------------------   --------------------   --------------------   --------------------   --------------------    --------------------\n";
	cout<<"   ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^         ^       ^     ^   \n";
	cout<<"   |       |     |        |       |     |        |       |     |        |       |     |        |       |     |        |       |     |         |       |     |   \n";
	cout<<" [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE]  [D-DOUBLE]    [SINGLE] [D-DOUBLE]     [SINGLE] [D-DOUBLE]\n";
		cout<<"\n           GROUND-FLOOR         1-FLOOR               2-FLOOR                 3-FLOOR               4-FLOOR                 5-FLOOR                6-FLOOR      \n";

	cout<<"          K->KING-SIZE         K->KING-SIZE          K->KING-SIZE            K->KING-SIZE          K->KING-SIZE            K->KING-SIZE           \n";
	cout<<"      +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+   +-------+  +-------+    \n";
	cout<<"      |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |   |       |  |       |  \n";
	cout<<"      |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |   |   K   |  |   K   |    \n";
	cout<<"      +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+   +--------  --------+  \n";
	cout<<"      |                  |   |                  |   |                  |   |                  |   |                  |   |                  |   \n";
	cout<<"      |___   ____________|   |___   ____________|   |___   ____________|   |___   ____________|   |___   ____________|   |___   ____________|   \n";
	cout<<"      |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   |   |  |     |     |   \n";
	cout<<"      | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |   | S |L | D   |  D  |  \n";
	cout<<"      --------------------   --------------------   --------------------   --------------------   --------------------   --------------------   \n";
	cout<<"        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        ^       ^     ^        \n";
	cout<<"        |       |     |        |       |     |        |       |     |        |       |     |        |       |     |        |       |     |       \n";
	cout<<"      [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE] [D-DOUBLE]    [SINGLE]  [D-DOUBLE]    [SINGLE] [D-DOUBLE]    \n";
}
string toUppercase(string name)
{
	for (int i = 0; i < name.length(); i++)
  	{
  		name[i] = toupper(name[i]);
  	}
	return name;
}
void catagory()
{
	int choice;
	cout<<"\t\t\t\t\t\t\t\t\t1. CHINESE\n";
	cout<<"\t\t\t\t\t\t\t\t\t2. INDIAN\n";
	cout<<"\t\t\t\t\t\t\t\t\t3. BEVERAGE\n";
	
	cout<<"\t\t\t\t\t\t\t\t\tSELECT OPTION : ";
	/*cin>>choice;
	switch(choice)
	{
		case 1:
			
			break;
			case 2:
				
				break;
				default:
					break;
	}*/
	
 } 
 int  currdate(int Date)
 {
 	string m;
 	int date,year;
 	fstream file,file1;
 	file.open("date.txt",ios::app|ios::binary);
 	file<<__DATE__<<endl;
 	file.close();
 	file1.open("date.txt",ios::in|ios::out);
 	file1>>m>>date>>year;
 	file1.close();
 	remove("date.txt");
 	int res=date-Date;
 	if(res==0)
 	{
 		res=1;
 		return res;
	 }
 	else return res;
 }
 int calculateDays(int roomno)
 {
 	string m,name,Adhaar,phone,address;
 	int date,year,age,RoomNo;
 	fstream file;
 	file.open("hotel.txt",ios::in|ios::out);
 	if(!file)
 	{
 		cout<<"ERROR";
	 }
	 else 
	 {
	 	file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
	 	while(!file.eof())
	 	{
	 		if(roomno==RoomNo)
	 		{
	 			days=currdate(date);
			 }
			 file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		 }
		 file.close();
	 }
	 return days;
 	
 }
void home() {
	
	system("color 3");
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\tHOTEL MANAGEMENT PAGE"<<endl;
	cout<<"\t\t\t\t\t\t\t\t#######################################################"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t1. BOOK ROOM                 8. ADD ITEMS\n";
	cout<<"\t\t\t\t\t\t\t\t\t2. AVAILABLE ROOMS           9. MODIFY ITEMS\n";
	cout<<"\t\t\t\t\t\t\t\t\t3. CUSTOMERS RECORD          10. DELETE ITEM\n";
	cout<<"\t\t\t\t\t\t\t\t\t4. CHECK PAYMENT-STATUS      11. ORDER/VIEW ITMES\n";
	cout<<"\t\t\t\t\t\t\t\t\t5. DELETE ALL-RECORD \n";
	cout<<"\t\t\t\t\t\t\t\t\t6. CHECK-OUT\n";
	cout<<"\t\t\t\t\t\t\t\t\t7. ROOMS-MAP\n";
	
	cout<<"\t\t\t\t\t\t\t\t#######################################################"<<endl<<endl;


}

class hotel {
		string ID;
		string name,Adhaar,phone,address,item,m;
		int age,RoomNo,mark,itemprice,date,year;
		 string uniquename;
		float price;
	public:
		void modify();
		void booking();
		void CustomerRec();
		void rooms();
		void check();
		bool Available(int);
		void floor(int);
		void payment(int);
		void checkOut(int );
		void status(int);
		void deleteall();
		void foodItems();
		void itemlist();
		void modifyItem();
		void deleteitem();
		void order();


}obj;



//**********************************************************FOOD-ITEMS***********************************
void hotel::foodItems()
{
	cin.ignore();
		m:
	fstream file,file1;
	int choice,i=0;
	string Additem,additem;
	file.open("foodlist.txt",ios::app|ios::binary);
	if(!file)
	{
		cout<<"ERROR";
	}
	else 
	{
		
		cout<<"\t\t\t\t\t\t\t\t\tENTER ITEM NAME : ";
		getline(cin,additem);
	 Additem=toUppercase(additem);
		file1.open("foodlist.txt",ios::out|ios::in);
		file1>>item>>itemprice>>uniquename;
		while(!file1.eof())
		{
			if(Additem==item)
			{
				
				i++;
			}
			file1>>item>>itemprice>>uniquename;
		}
			if(i!=0)
			{
				cout<<"\t\t\t\t\t\t\t\t\tDUPLICATE ITEM ENTRY NOT ALLOWED\n";
			goto m;
			}
		
		cout<<"\t\t\t\t\t\t\t\t\tENTER ITEM PRICE: ";
		cin>>itemprice;
		cout<<"\t\t\t\t\t\t\t\t\tFOOD-CATAGORY \n";
		catagory();
		cin>>choice;
		if(choice==1)
		{
			uniquename="CH";
		}
		else if(choice==2)
		{
			uniquename="IN";
		}
		else if(choice==3)
		{
			uniquename="BV";
		}
		file<<Additem<<" "<<itemprice<<" "<<uniquename<<endl;
		file.close();
		file.close();
		cout<<"\t\t\t\t\t\t\t\t\tITEM ADDEDD SUCCESSFULLY....\n";
	}
}
void addorderbill(int rnumber,int amount)
{
	fstream file,file2;
	int RoomNo;
	int mark;
	int flag=0;
	
		
		file2.open("Status.txt",ios::in|ios::out);
		file.open("demo.txt",ios::app|ios::binary);
		file2>>RoomNo>>mark;
		while(!file.eof())
		{
			if(rnumber==RoomNo)
			{
				mark+=amount;
				flag++;
				file<<rnumber<<" "<<mark<<endl;
				cout<<"\n\t\t\t\t\t\t\t\t\tAMOUNT ADDED WITH YOUR ROOM BILL...\n";
				break;
			}
			else 
			{
				file<<RoomNo<<" "<<mark<<endl;
			}
			file2>>RoomNo>>mark;
		}
		file2.close();
		file.close();
		remove("Status.txt");
		rename("demo.txt","Status.txt");
		if(flag==0)
		{
			cout<<"\n\t\t\t\t\t\t\t\t\tINCORRECT ROOM-NO ! \n";
		}
}
void hotel::itemlist()
{
	system("cls");
	fstream file;
	string name,Uname,uname;
	int age,i=0,j=7,total1=0;
	float Grand;
	float GST;
	file.open("foodlist.txt",ios::in|ios::out);
	R:
	
	cout<<"\t\t\t\t\t\t\t\t\t1. INDIAN\n\t\t\t\t\t\t\t\t\t2. CHINESE\n\t\t\t\t\t\t\t\t\t3. BEVERAGE\n";
	int choice;
	cout<<"\t\t\t\t\t\t\t\t\tCHOICE : ";
	cin>>choice;
	if(choice==1)
	{
		Uname="IN";
		GST=igst;
	//	cout<<"\t\t\t\t\t\t\t\t\t=>INDIAN\n";
	}
	else if(choice==2)
	{
		Uname="CH";
		GST=bgst;
	//	cout<<"\t\t\t\t\t\t\t\t\t=>CHINESE\n";
	}
	else if(choice==3)
	{
		Uname="BV";
		GST=cgst;
	//	cout<<"\t\t\t\t\t\t\t\t\t=>CHINESE\n";
	}
	float price;
	vector<pair<string,int>> v;
	vector<pair<string,int>>v1;
	gotoxy(60,5);
	cout<<"S-N";
	gotoxy(70,5);
	cout<<"ITEM-NAME";
	gotoxy(90,5);
	cout<<"PRICE";
	gotoxy(110,5);
	cout<<"FINAL-PRICE ( GST-"<<GST<<"% )";
	
	file>>item>>itemprice>>uname;
	while(!file.eof())
	{
		if(Uname==uname)
		{
			i++;gotoxy(60,j);
			cout<<i<<".";
			gotoxy(70,j);
			cout<<item;
			gotoxy(90,j);
			cout<<itemprice<<" (RUPEES)";
			gotoxy(110,j);
			Grand=((itemprice*GST)/100)+itemprice;
		
		v.push_back(make_pair(item,Grand));
			cout<<Grand;
			j++;
			//cout<<"\t\t\t\t\t\t\t\t\t"<<i<<"."<<item<<"->"<<itemprice<<endl;
		}
		file>>item>>itemprice>>uname;
	}
	char choice1;
	cout<<"\n\t\t\t\t\t\t\t    ========================================================================";
	cout<<"\n\t\t\t\t\t\t\t\t\tWANT TO BUY SOMETHING (Y/N)?: ";
	cin>>choice1;
	if(choice1=='y'||choice1=='Y')
	{
		
	int l=0;
	cout<<"\n\n\t\t\t\t\t\t\t\tADD TO CART (ENTER S-N) :\n";
	m:
		cout<<"\t\t\t\t\t\t\t\tS-N ? : ";
	int search;
	cin>>search;
	search-=1;
		for(int i=0;i<v.size();i++)
		{
			if(search==i)
			{
				l++;
				string name1=v[i].first;
				float kprice=v[i].second;
				v1.push_back(make_pair(name1,kprice));
				
			}
		}
			cout<<"\t\t\t\t\t\t\t\t\tWANT TO ADD MORE (Y/N)? ";
			char k;
			cin>>k;
			if(k=='y'||k=='Y')
			goto m;
			else if(k=='n'||k=='N')
			{
		
			system("cls");
			cout<<"\t\t\t\t\t\t\t\t\tADDED ITEMS ARE...\n";
			int increase=5;	
			gotoxy(60,3);
			cout<<"S-N";	
			gotoxy(80,3);
			cout<<"ITEMS";
			gotoxy(100,3);
			cout<<" PRICE (GST-"<<GST<<"%)";
	for(int i=0;i<v1.size();i++)
		{
				gotoxy(60,increase);
				cout<<i+1<<".";
				gotoxy(80,increase);
				cout<<v1[i].first;
				gotoxy(100,increase);
				cout<<v1[i].second;
				
			//cout<<"\t\t\t\t\t\t\t\t\t"<<i+1<<". "<<" "<<<<endl;
			total1+=v1[i].second;
			increase++;
				
			
		}
			gotoxy(60,increase);
		cout<<"---------------------------------------------";
		increase++;
		
		gotoxy(60,increase);
		cout<<"BILL-GENERATED : TOTAL AMOUNT -> ";
		gotoxy(100,increase);
		cout<<total1;
		
	}
	cout<<"\n\t\t\t\t\t\t\t\t\tIF YOU CHOOSE 'N' YOUR BILL WILL BE ADDED TO YOUR ROOM-NO...";
	cout<<"\n\t\t\t\t\t\t\t\t\tWANT TO PAY NOW (Y/N) ? ";
	char choice2;
	cin>>choice2;
	if(choice2=='y'||choice2=='Y')
	{
		cout<<"\n\t\t\t\t\t\t\t\t\tTHANK-YOU FOR ORDER WITH US...\n";
	}
	else if(choice2=='n'||choice2=='N')
	{
		cout<<"\t\t\t\t\t\t\t\t\tENTER ROOM NO : ";
		int roomno;
		cin>>roomno;
		addorderbill( roomno, total1);
	}
		
				
			}
			else
			if(choice1=='n'||choice1=='N')
			{
				
	file.close();
			}
		
	
	
}
void hotel::order()
{
	
	
		
	
}
void hotel::modifyItem()
{
	fstream file,file1;
	int token=0,choice;
	string newname,searchname,Search;
	int price;
	file.open("foodlist.txt",ios::in|ios::out);
	if(!file)
	{
		cout<<"ERROR";
	}
	else 
	{
		cout<<"\t\t\t\t\t\t\t\t\tENTER FOOD NAME : ";
		cin>>Search;
		searchname=toUppercase(Search);
		file1.open("demo.txt",ios::app|ios::binary);
		file>>item>>itemprice>>uniquename;
		while(!file.eof())
		{
			if(searchname==item)
			{
				string Uname;
				token++;
				cout<<"\t\t\t\t\t\t\t\t\tFOUND ITEM "<<item<<"->"<<itemprice<<endl;
				cout<<"\t\t\t\t\t\t\t\t\tENTER NEW NAME : ";
				cin>>newname;
				cout<<"\t\t\t\t\t\t\t\t\tENTER NEW PRICE : ";
				cin>>price;
				cout<<"\t\t\t\t\t\t\t\t\tFOOD CATAGORY\n";
				catagory();
				if(choice==1)
				{
					Uname="CH";
				}
				else if(choice==2)
				{
					Uname="IN";
				}
				file1<<newname<<" "<<price<<" "<<Uname<<endl;
				
			}
			else 
			{
				file1<<item<<" "<<itemprice<<" "<<uniquename<<endl;
			}
			file>>item>>itemprice>>uniquename;
			
		}
		file.close();
		file1.close();
		remove("foodlist.txt");
		rename("demo.txt","foodlist.txt");
		if(token==0)
		{
			cout<<"\t\t\t\t\t\t\t\t\tITEM NOT FOUND\n";
		}
		else{
			cout<<"\t\t\t\t\t\t\t\t\tMODIFICATION SUCCESSFULL...\n";
		}
	}
}
void hotel::deleteitem()
{
	fstream file,file1;
	int token=0;
	int choice;
	string fname,uname,Uname;//food name
	file.open("foodlist.txt",ios::in |ios::out);
	if(!file)
	{
		cout<<"ERROR";
	}
	else 
	{
		cout<<"\t\t\t\t\t\t\t\t\tENTER ITEM NAME : ";
		cin>>Uname;
		fname=toUppercase(Uname);
		cout<<"\t\t\t\t\t\t\t\t\t1. CHINESE\n\t\t\t\t\t\t\t\t\t2. INDIAN\n\t\t\t\t\t\t\t\t\t3. BEVERAGE\n";
		cin>>choice;
		if(choice==1)
		{
			uname=="CH";
		}
		else if(choice==2)
		{
			uname="IN";
		}
		else if(choice==3)
		{
			uname="BV";
		}
		file1.open("demo.txt",ios::app|ios::binary);
		file>>item>>itemprice>>uniquename;
		while(!file.eof())
		{
			if(fname==item && uname==uniquename)
			{
				token++;
				cout<<"\t\t\t\t\t\t\t\t\tITEM FOUND AND DELETED SUCCESSFULLY...\n";
			}else
			{
				file1<<item<<" "<<itemprice<<" "<<uniquename<<endl;
			}
			file>>item>>itemprice>>uniquename;
		}
		file.close();
		file1.close();
		remove("foodlist.txt");
		rename("demo.txt","foodlist.txt");
		if(token==0)
		{
			cout<<"\t\t\t\t\t\t\t\t\tITEM NOT FOUND\n";
		}
	}
}
//*****************************************************HOTEL-BOOKING & OTHERS DETAILS**********************
void hotel::floor(int n) {
	if(n>=1 && n<=10) {
		cout<<"GROUND FLOOR\n\n";
	} else if(n>=11 && n<=20) {
		cout<<"1ST FLOOR\n\n";
	} else if(n>=21 && n<=30) {
		cout<<"2ND FLOOR\n\n";
	} else if(n>=31 && n<=40) {
		cout<<"3RD FLOOR\n\n";
	}

	else if(n>=41 && n<=50) {
		cout<<"4TH FLOOR\n\n";
	} else if(n>=51 && n<=60) {
		cout<<"5TH FLOOR\n\n";
	} else if(n>=61 && n<=70) {
		cout<<"6THFLOOR\n\n";
	} else if(n>=71 && n<=80) {
		cout<<"7TH FLOOR\n\n";
	} else if(n>=81 && n<=90) {
		cout<<"8TH FLOOR\n\n";
	} else if(n>=91 && n<=100) {
		cout<<"9TH FLOOR\n\n";
	}
}

void hotel::rooms() {

	cout<<"\t\t\t\t\t|**Zero*|**1st**|**2nd**|**3rd**|**4th**|**5th**|**6th**|**7th**|**8th**|**9th**|<--FLOORS"<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t| "<<ROOMS[1]<<" | "<<ROOMS[6]<<" | "<<ROOMS[11]<<" | "<<ROOMS[16]<<" | "<<ROOMS[21]<<" | "<<ROOMS[26]<<" | "<<ROOMS[31]<<" | "<<ROOMS[36]<<" | "<<ROOMS[41]<<" | "<<ROOMS[46]<<" | "<<ROOMS[51]<<" | "<<ROOMS[56]<<" | "<<ROOMS[61]<<" | "<<ROOMS[66]<<" | "<<ROOMS[71]<<" | "<<ROOMS[75]<<" | "<<ROOMS[81]<<" | "<<ROOMS[86]<<" | "<<ROOMS[91]<<" | "<<ROOMS[96]<<" | "<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t| "<<ROOMS[2]<<" | "<<ROOMS[7]<<" | "<<ROOMS[12]<<" | "<<ROOMS[17]<<" | "<<ROOMS[22]<<" | "<<ROOMS[27]<<" | "<<ROOMS[32]<<" | "<<ROOMS[37]<<" | "<<ROOMS[42]<<" | "<<ROOMS[47]<<" | "<<ROOMS[52]<<" | "<<ROOMS[57]<<" | "<<ROOMS[62]<<" | "<<ROOMS[67]<<" | "<<ROOMS[72]<<" | "<<ROOMS[76]<<" | "<<ROOMS[82]<<" | "<<ROOMS[87]<<" | "<<ROOMS[92]<<" | "<<ROOMS[97]<<" | "<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t| "<<ROOMS[3]<<" | "<<ROOMS[8]<<" | "<<ROOMS[13]<<" | "<<ROOMS[18]<<" | "<<ROOMS[23]<<" | "<<ROOMS[28]<<" | "<<ROOMS[33]<<" | "<<ROOMS[38]<<" | "<<ROOMS[43]<<" | "<<ROOMS[48]<<" | "<<ROOMS[53]<<" | "<<ROOMS[58]<<" | "<<ROOMS[63]<<" | "<<ROOMS[68]<<" | "<<ROOMS[73]<<" | "<<ROOMS[78]<<" | "<<ROOMS[83]<<" | "<<ROOMS[88]<<" | "<<ROOMS[93]<<" | "<<ROOMS[98]<<" | "<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t| "<<ROOMS[4]<<" | "<<ROOMS[9]<<" | "<<ROOMS[14]<<" | "<<ROOMS[19]<<" | "<<ROOMS[24]<<" | "<<ROOMS[29]<<" | "<<ROOMS[34]<<" | "<<ROOMS[39]<<" | "<<ROOMS[44]<<" | "<<ROOMS[49]<<" | "<<ROOMS[54]<<" | "<<ROOMS[59]<<" | "<<ROOMS[64]<<" | "<<ROOMS[69]<<" | "<<ROOMS[74]<<" | "<<ROOMS[79]<<" | "<<ROOMS[84]<<" | "<<ROOMS[89]<<" | "<<ROOMS[94]<<" | "<<ROOMS[99]<<" | "<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t| "<<ROOMS[5]<<" | "<<ROOMS[10]<<" | "<<ROOMS[15]<<" | "<<ROOMS[20]<<" | "<<ROOMS[25]<<" | "<<ROOMS[30]<<" | "<<ROOMS[35]<<" | "<<ROOMS[40]<<" | "<<ROOMS[45]<<" | "<<ROOMS[50]<<" | "<<ROOMS[55]<<" | "<<ROOMS[60]<<" | "<<ROOMS[65]<<" | "<<ROOMS[70]<<" | "<<ROOMS[75]<<" | "<<ROOMS[80]<<" | "<<ROOMS[85]<<" | "<<ROOMS[90]<<" | "<<ROOMS[95]<<" | "<<ROOMS[100]<<" | "<<endl;
	cout<<"\t\t\t\t\t+-------|-------|-------|-------|-------|-------|-------|-------|-------|-------+"<<endl;
	cout<<"\t\t\t\t\t|**Zero*|**1st**|**2nd**|**3rd**|**4th**|**5th**|**6th**|**7th**|**8th**|**9th*|<--FLOORS"<<endl;
}
void hotel::booking(){
	m:
	fstream file1,file;
	string Name;
	int roomno;
	file.open("hotel.txt",ios::in);
	if(!file){
		cout<<"ERROR";
	}
	else
	{
		check();
		cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER ROOM NO : ";
		cin>>roomno;
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		while(!file.eof())
		{
			if(roomno==RoomNo)
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\tTHIS ROOM IS ALREADY BOOKED\n";
				goto m;
			}
			file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		}
		cout<<"\t\t\t\t\t\t\t\tROOM-NO "<<roomno<<" AVAILABLE FOR BOOKING\n";
		file.close();
		file1.open("hotel.txt",ios::app | ios::binary);
		if(!file1)
		{
			cout<<"ERROR\n";
		}
		else 
		{
			cin.ignore();
			cout<<"\t\t\t\t\t\t\t\t\tENTER NAME : ";
			getline(cin,Name);
			string name=toUppercase(Name);
			cout<<"\t\t\t\t\t\t\t\t\tENTER AGE : ";
			cin>>age;
			cin.ignore();
			cout<<"\t\t\t\t\t\t\t\t\tENTER PHONE : ";
			getline(cin,phone);
			cout<<"\t\t\t\t\t\t\t\t\tENTER ADHAAR : ";
			getline(cin,Adhaar);
			cout<<"\t\t\t\t\t\t\t\t\tENTER ADDRESS : ";
			getline(cin,address);
			file1<<roomno<<" "<<name<<" "<<age<<" "<<phone<<" "<<Adhaar<<" "<<address<<" "<<__DATE__<<endl;
			file1.close();
			cout<<"\n\n\t\t\t\t\t\t\t\t\tBOOKING CONFIRMED...\n\n\n";
			payment(roomno);
		}
	}
}



bool hotel::Available(int roomno) {
	
	//char mark='X';
	fstream file;
	file.open("hotel.txt",ios::in |ios::out);
	if(!file) {
		cout<<"file not found\n";
	} else {
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		while(!file.eof()) {
			if(RoomNo==roomno) {
				return false;
			}


			file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		}
		file.close();

	}
	return true;


}
void hotel::check() {

	fstream file;
	int k=0;
	char mark='X';
	file.open("hotel.txt",ios::in |ios::out);
	if(!file) {
		cout<<"NOT FOUND";
	} else {
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		while(!file.eof()) {

			ROOMS[RoomNo]=mark;
			k++;
			file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		}
		file.close();
		rooms();
		cout<<"\n\n\t\t\t\t\t\t\t\t\t0-->AVAILABLE ROOMS\n\t\t\t\t\t\t\t\t\tX-->BOOKED ROOMS\n";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t=======================\n";
		cout<<"\t\t\t\t\t\t\t\t\t AVAILABLE-ROOMS =>"<<countRoom-k<<" \n";
		cout<<"\t\t\t\t\t\t\t\t\t=======================\n";
		//cout<<"\t\t\t\t\t\t\t\t\tENTER ANY KEY TO CONTINUE...\n";
	
		
		
		//cout<<"\t\t\t\t\t\t\t\n"<<countRoom-k<<" ROOMS ARE AVAILABLE...\n";


	}
}
bool pStatus(int rnumber)
{
	int mark,RoomNo;
	int i=0;
	fstream file;
	file.open("Status.txt",ios::out|ios::in);
	if(!file)
	{
		cout<<"ERROR";
	}
	else 
	{
		file>>RoomNo>>mark;
		while(!file.eof())
		{
			if(rnumber==RoomNo &&mark==0)
			{
				cout<<"PAID\n";
				i++;
				return true;
			}
			else if(rnumber==RoomNo&& mark>0)
			{
				cout<<"DUE\n";
				i++;
				return false;
			}
			file>>RoomNo>>mark;
			
		}
		file.close();
	}
	if(i==0)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\tNO RECORD FOUND BELONGS TO ROOM-NUMBER "<<rnumber;
	}
	return -1;
	
}
void hotel::CustomerRec(){
		fstream file,file1;
		int mark1,roomno;
	//char mark='X';
	
	file.open("hotel.txt",ios::in |ios::out);
	if(!file) {
		cout<<"NOT FOUND";
	} else {
		int i=6;
		int j=7;
		
		
		system("cls");
		system("color A");
		
		gotoxy(60,1);
		cout<<"CUSTOMERS RECORD";
		gotoxy(7,4);
		cout<<"NAME";
		gotoxy(37,4);
		cout<<"AGE";
		gotoxy(67,4);
		cout<<"ROOM-NO";
		
		gotoxy(97,4);
		cout<<"FLOOR";
		gotoxy(114,4);
		cout<<"CONTACT-NO";
		gotoxy(135,4);
		cout<<"Status";
		
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		while(!file.eof()) {
			
			gotoxy(j,i);
			cout<<name;
			gotoxy(j+30,i);
			cout<<age;
			gotoxy(j+60,i);
			cout<<RoomNo;
			gotoxy(j+90,i);
			floor(RoomNo);
			gotoxy(j+107,i);
			cout<<phone;
			gotoxy(j+128,i);
			pStatus(RoomNo);
			
			
			i++;
			i++;
		
			file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		}
		file.close();
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\tENTER ANY KEY TO CONTINUE...\n";
		getch();
		system("cls");
		
}
}

void hotel::status(int rnumber)
{
	system("cls");
	fstream file1;
	int token=0,mark1;
	
	file1.open("Status.txt",ios::out|ios::in);
	if(!file1)
	{
		cout<<"ERROR";
	}
	else 
	{
		
	file1>>RoomNo>>mark1;
		while(!file1.eof())
		{
			if(rnumber==RoomNo&& mark1==0)
			{
				token++;
				cout<<"\n\n\t\t\t\t\t\t\t\t\tPAYMENT-STATUS OF ROOM-NO "<<rnumber<<" --> PAYMENT STATUS PAID";
			
			}
			else if(rnumber==RoomNo&& mark1>0)
			{
				token++;
				cout<<"\n\n\t\t\t\t\t\t\t\t\tPAYMENT-STATUS OF ROOM-NO "<<rnumber<<" --> DUE "<<mark1;
				
			}
			file1>>RoomNo>>mark1;
		}
		file1.close();
		if(token==0)
		{
			cout<<"RECORD NOT FOUND ON ROOM-NO : "<<rnumber<<endl;
		}
	}
	
}


void hotel::payment(int rnumber)
{
	fstream file;
	int i=0,j=0;
	file.open("Status.txt", ios::app | ios::binary);
	if(!file)
	{
		cout<<"ERROR";
	}
	else
	{
		char choice;
		float amount;
		 total=((FixedPrice*12)/100)+FixedPrice;
		total*=calculateDays(rnumber);
		cout<<"\t\t\t\t\t\t\t\t\tTOTAL AMOUNT : "<<total<<" INCLUDING GST ( 12% )"<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\tWANT TO PAY NOW?? ";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		{
		cout<<"\t\t\t\t\t\t\t\t\tENTER AMOUNT TO BE PAID IN ADVANCE : ";
		cin>>amount;
		total=total-amount;
		i++;
			file<<rnumber<<" "<<total<<endl;
		}
		
		else if(choice=='n'||choice=='N')
		{
			j++;
			file<<rnumber<<" "<<total<<endl;
		}
		file.close();
		
	}
	if(i>0)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\tTHANK-YOU ADVANCE AMOUNT RECEIVED \n";
		cout<<"\t\t\t\t\t\t\t\t\tAMOUNT TO BE PAID : "<<total<<endl;
	}
	else if(j>0)
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\tYOUR PAYMENT IS DUE :=> "<<total<<"\n\t\t\t\t\t\t\t\t\tPLEASE PAY BEFORE CHECKOUT\n";
	}
	
}
void hotel::checkOut(int rnumber)
{
	R:
    fstream file,file1;
    int token=0;
    float Total=0,amount;
    bool done;
    char choice;
    file.open("Status.txt",ios::in |ios::out);
    if(!file)
        {
            cout<<"FILE COULD NOT BE OPENED\n";
        }
    else
        {
        	
            /*if(pStatus(rnumber)==true)
            {
            	cout<<"\n\t\t\t\t\t\tYOUR PAYMENT STATUS IS SHOWING PAID\n";
			}*/
			 if(pStatus(rnumber)==false)
			{
				//Total=((FixedPrice*gst)/100)+FixedPrice;
				//Total*=calculateDays(rnumber);
				//cout<<"\t\t\t\t\t\t\t\t\tTOTAL AMOUNT DUE => "<<Total<<" "<<calculateDays(rnumber)<<" DAYS STAY";
				cout<<"\n\n\t\t\t\t\t\t\t\t\tWANT TO PAY (Y/N) : ";
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
            file1.open("demo.txt",ios::binary | ios::app);
            file>>RoomNo>>mark;
            while(!file.eof())
                {
                    if(rnumber==RoomNo)
                        {
                            system("cls");
                        	cout<<"\n\t\t\t\t\t\t\t\t\tAMOUNT DUE :=> "<<mark;
            	cout<<"\n\t\t\t\t\t\t\t\t\tENTER AMOUNT : ";
            	cin>>amount;
                        	mark=mark-amount;
                        	//mark=Total;
                        	if(mark==0)
                        	{
                            cout<<"\n\n\t\t\t\t\t\t\t\t\tPAYMENT DONE SUCCESSFULLY...\n";
                        		
                            file1<<rnumber<<" "<<mark<<endl;
							}
							else if(mark>0)
							{
								cout<<"\t\t\t\t\t\t\t\t\tPLEASE PAY FULL AMOUNT "<<mark<<endl;
								goto R;
								//file1<<rnumber<<" "<<mark<<endl;
							}
                           token++;
                            
                        }
                    else
                        {
                        	
                            file1<<RoomNo<<" "<<mark<<endl;
                        }
                    file>>RoomNo>>mark;
                }
            file.close();
            file1.close();
            remove("Status.txt");
            rename("demo.txt","Status.txt");
            if(token==0)
            {
            	cout<<"\n\n\t\t\t\t\t\t\t\t\tROOM NOT FOUND";
            	goto R;
			}
			}
			else if(choice=='N'||choice=='n')
			{
				cout<<"\n\n\t\t\t\t\t\t\t\t\tYOUR PAYMENT IS DUE PLEASE PAY LATER...\n";
			}
			}
            
        }
}
/*void hotel::modify()
{
	fstream file,file1;
	int rnumber,roomNo;
	file.open("hotel.txt",ios::in |ios::out);
	if(!file)
	{
		cout<<"ERROR";
	}
	else 
	{
		cout<<"ENTER ROOM NUMBER : ";
		cin>>rnumber;
		file1.open("demo.txt",ios::app|ios::binary);
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address;
		while(!file.eof())
		{
			if(rnumber==RoomNo)
			{
				char choice;
				cout<<"WANT TO CHANGE NAME ? ";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"ENTER NEW NAME : ";
					cin>>name;
				}
				else if(choice=='n'||choice=='N')
				{
					cout<<"OK!\n";
					
				}
				cout<<"WANT TO CHANGE PHONE NUMBER ? ";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"ENTER NEW CONTACT NUMBER : ";
					cin>>phone;
				}
				else if(choice=='n'||choice=='N')
				{
					cout<<"OK!\n";
				}
				cout<<"WANT TO CHANGE ROOM ? : ";
						cin>>choice;
						if(choice=='y'||choice=='Y')
						{
							check();
							m:
							cout<<"ENTER NEW ROOM NUMBER : ";
							cin>>roomNo;
							file>>RoomNo>>name>>age>>phone>>Adhaar>>address;
							while(!file.eof())
							{
								if(roomNo==RoomNo)
								{
									cout<<"THIS ROOM IS ALREADY BBOOKED PLEASE SELECT ANOTHER...\n";
									goto m;
								}
								file>>RoomNo>>name>>age>>phone>>Adhaar>>address;
							}
						}
							file1<<roomNo<<" "<<name<<" "<<age<<" "<<phone<<" "<<Adhaar<<" "<<address;
				
			}
			file1<<RoomNo<<" "<<name<<" "<<age<<" "<<phone<<" "<<Adhaar<<" "<<address;
		}
		file.close();
		file1.close();
		remove("hotel.txt");
		rename("demo.txt","hotel.txt");
		cout<<"DETAIL MODIFIED SUCCESSFULLY...\n";
	}
}*/
void hotel::deleteall()
{
	fstream file,file1;
	file.open("Hotel.txt",ios::out|ios::in);
	if(!file)
	{
		cout<<"ERROR OPENING";
		
	}
	else 
	{
		file1.open("demo1.txt",ios::app|ios::binary);
		file>>RoomNo>>name>>age>>phone>>Adhaar>>address>>m>>date>>year;
		file1<<RoomNo<<" "<<name<<" "<<age<<" "<<phone<<" "<<Adhaar<<" "<<address<<" "<<__DATE__<<endl;
		file.close();
		file1.close();
		remove("hotel.txt");
		rename("demo1.txt","hotel.txt");
		
	}
	fstream file2,file3;
	file2.open("Status.txt",ios::in|ios::out);
	{
		if(!file2)
		{
			cout<<"ERROR";
		}
		else 
		{
			file3.open("Demo2.txt",ios::binary|ios::app);
			file2>>RoomNo>>mark;
			file3<<RoomNo<<" "<<mark<<endl;
			file2.close();
			file3.close();
			remove("Status.txt");
			rename("Demo2.txt","Status.txt");
		}
	}
	cout<<"\n\n\t\t\t\t\t\t\t\t\tDELETED ALL DETAILS SUCCESSFULLY...\n";
}
int main() {
	
	int Option,rnumber;
	home();
	cout<<"\t\t\t\t\t\t\t\t\tCHOOSE OPTION : ";
	cin>>Option;
	switch(Option) {
		case 1:

			obj.booking();
			main();

			break;
		case 2:
			system("cls");
			cout<<endl<<endl;
			obj.check();
			main();
			break;
			case 3:
				obj.CustomerRec();
				main();
				break;
				case 4:
					cout<<"\t\t\t\t\t\t\t\t\tENTER YOUR ROOM-NO : ";
					cin>>rnumber;
					obj.status(rnumber);
					main();
					break;
				case 5:
					obj.deleteall();
					
					main();
					break;
				case 6:
					
					cout<<"\t\t\t\t\t\t\t\t\tENTER ROOM NUMBER : ";
					cin>>rnumber;system("cls");
					cout<<"\n\n\t\t\t\t\t\t\t\t\tPAYMENT-STATUS--> ";
					obj.checkOut(rnumber);
					main();
					break;
					case 7:
						system("cls");
						roomsmap();
						cout<<"\n\n\t\t\t\t\t\t\t\tENTER ANY KEY TO CONTINUE...\n";
						getch();
						main();
						break;
						case 8:
							
							obj.foodItems();
							main();
							break;
							case 9:
								obj.modifyItem();
								main();
								break;
								case 10:
									obj.deleteitem();
									main();
									break;
							case 11:
							
							obj.itemlist();
							main();
							break;
						default:
							cout<<"WRONG KEYWORD...\n";
							main();
							break;
						
	}
	return 0;
}


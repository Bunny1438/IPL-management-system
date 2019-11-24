using namespace std;
#include<iostream>

#include<string.h>
#include<fstream>
class teams
{
	public:
		int b;
	   int i;
	    int a;
	    void add();
	    void addplayers();
	   
	    void seenewplayers();
	    void callagain()
	    {
	    				int p;
   cout<<"\n\n"<<"enter 1 for main menu:";
    cin>>p;
    if(p==1)
    {
    info();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
		}
	    void info()
	    {
	    	cout<<"                                                              This program is a type of IPL cricket simulator";
	    	cout<<"\n                                                            ----------------------------------------------------";
	    	
	    	cout<<"\n\n 1.Display all teams in IPL.";
	    	cout<<"\n 2.Members of all teams respectively with their coaching staff.";
	    	cout<<"\n 3.Know about Umpires in IPL 2019.";
	    	cout<<"\n 4.Owners of all the IPL teams.";
	    	cout<<"\n 5.Tournament schedule with venue.";
	    	cout<<"\n 6.Stats of this season(2019).";
	    	cout<<"\n 7.Stats of all the players .";
	    	cout<<"\n 8.Add  teams.";
	    	cout<<"\n 9.Add players.";
	    	cout<<"\n 10.See the players of the new added teams.";
	    	cout<<"\n****************************************************************************************************************************************************************************";
	    	cout<<"\n                                                          Choose any one of the above options according to yourself:";
	    	cout<<"\n\n****************************************************************************************************************************************************************************";
	    	cout<<"\n option selected :";
	    	cin>>a;
	    	
	    
if(a==1)
	    {
		   {
	    	fstream allteam;
	    	allteam.open("teams.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = allteam.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		allteam.close();
		}
		callagain();
	}
	
		
else if(a==2)
{

{
			cout<<"\n\nenter the the team of which you want see the members of :";
			cout<<"\n 1.CSK";
			cout<<"\n 2.DC";
			cout<<"\n 3.KX1P";
			cout<<"\n 4.KKR";
			cout<<"\n 5.MI";
			cout<<"\n 6.RR";
			cout<<"\n 7.RCB";
			cout<<"\n 8.SH\n";
			cin>>b;
			if(b==1)
			{
			fstream member;
			member.open("csk.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
			}
			
			else if(b==2)
			{
					fstream member;
			member.open("dc.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
				
			}
			else if(b==3)
			{
				fstream member;
			member.open("kxp.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();	
			}
			else if(b==4)
			{
					fstream member;
			member.open("kkr.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
			}
			else if(b==5)
			{
					fstream member;
			member.open("mi.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
			}
			else if(b==6)
			{
					fstream member;
			member.open("rr.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
			}
			else if(b==7)
			{
				fstream member;
			member.open("rcb.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();	
			}
			else if(b==8)
			{
					fstream member;
			member.open("sh.txt",ios::in);
			char c;
			while(1)
			{
				c= member.get();
				if(c==EOF)
				break;
				cout<<c;
			}
			member.close();
			}
}callagain();
}
		
else if(a==3)
{

{
	fstream umpire;
	    	umpire.open("umpires.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = umpire.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		umpire.close();
		}
		callagain();
}
else if(a==4)
{

{
	fstream owner;
	    	owner.open("owners.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = owner.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		owner.close();
		}
		callagain();
}
else if(a==5)
{{
	fstream sch;
	    	sch.open("schedule.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = sch.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		sch.close();
		}
		callagain();
	
}
else if(a==6)
{

{
	fstream sch;
	    	sch.open("stats.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = sch.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		sch.close();
		}
		callagain();
	}
	
	else if(a==7)
	{
	
	{
		int z;
		cout<<"\nstats of players in categories as follows select as you want:";
		cout<<"\n1.Most runs.";
	
		cout<<"\n2.Most wickets";
		cout<<"\n3.Players with Purple cap";
		cout<<"\n4.Players with orange cap\n";
		
		cin>>z;
		 if(z==1)
		 {
		 	fstream mr;
	    	mr.open("mostruns.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = mr.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		mr.close();
		 }
		 else if(z==2)
		 {
		 	fstream mw;
	    	mw.open("mostwickets.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = mw.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		mw.close();
		 	
		 }
		 else if(z==3)
		 {
		 	fstream pr;
	    	pr.open("purple.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = pr.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		pr.close();
		 }
		 else if(z==4)
		 {
		 	fstream ora;
	    	ora.open("orange.txt",ios::in);
	    		char ch;
	    	while(1)
	    	{
	    		ch = ora.get();
	    		if(ch==EOF)
	    		break;
	    		cout<<ch;
			}
		ora.close();
		 	
		 }
	}
	callagain();
}

else if(a==8)
{

{
add();
}
callagain();
}
else if(a==9)
{
	{
		addplayers();
	}
	callagain();
}
else if(a==10)
{
	{
	seenewplayers();
}callagain();
}
	
}

};

void teams :: add()
{int s;
	char team[100];
	cout<<"\n********************************";
	cout<<"\nyou can add upto 5 teams only";
	cout<<"\n********************************";
	cout<<"\n\nHow many teams you want to add ?:";
	cin>>s;
	if(s==1)
	{
		cout<<"Enter a new team :";

	cin>>team;
	fstream addd;
    addd.open("teams.txt",ios::app);
	addd<<"newly Added team:\n";
	addd<<"9.      "<<team;
	addd.close();
	fstream yu;
	yu.open("team1.txt",ios::out);
	yu.close();
	}
	else if(s==2)
	{
		fstream addd;
		addd.open("teams.txt",ios::app);
		addd<<"Newly Added teams:\n";
		addd.close();
	
	for(int i=9;i<=10;i++)
	{
	
	cout<<"\nEnter a new team :";

	cin>>team;
	fstream addd;
    addd.open("teams.txt",ios::app);
	
	addd<<i<<".      "<<team<<"\n";
	addd.close();
}
fstream yu,yu1;
	yu.open("team1.txt",ios::out);
	yu.close();
	yu1.open("team2.txt",ios::out);
	yu1.close();
}
else if(s==3)
{fstream addd;
		addd.open("teams.txt",ios::app);
		addd<<"Newly Added teams:\n";
		addd.close();
	for(int i=9;i<=11;i++)
	{
	
	cout<<"Enter a new team :";
	
	cin>>team;
	fstream addd;
    addd.open("teams.txt",ios::app);
	
	addd<<i<<".      "<<team<<"\n";
	addd.close();
}
fstream yu,yu1,yu2;
	yu.open("team1.txt",ios::out);
	yu.close();
	yu1.open("team2.txt",ios::out);
	yu1.close();
	yu2.open("team3.txt",ios::out);
	yu2.close();

	
}
else if(s==4)
{fstream addd;
		addd.open("teams.txt",ios::app);
		addd<<"Newly Added teams:\n";
		addd.close();
	for(int i=9;i<=12;i++)
	{
	
	cout<<"Enter a new team :";

	cin>>team;
	fstream addd;
    addd.open("teams.txt",ios::app);
	
	addd<<i<<".      "<<team<<"\n";
	addd.close();
}
fstream yu,yu1,yu2,yu3;
	yu.open("team1.txt",ios::out);
	yu.close();
	yu1.open("team2.txt",ios::out);
	yu1.close();
	yu2.open("team3.txt",ios::out);
	yu2.close();
	yu3.open("team4.txt",ios::out);
	yu3.close();
}
else if(s==5)
{fstream addd;
		addd.open("teams.txt",ios::app);
		addd<<"Newly Added teams:\n";
		addd.close();
	for(int i=9;i<=13;i++)
	{
	
	cout<<"Enter a new team :";
    cin>>team;
	fstream addd;
    addd.open("teams.txt",ios::app);
	
	addd<<i<<".      "<<team<<"\n";
	addd.close();
}
fstream yu,yu1,yu2,yu3,yu4;
	yu.open("team1.txt",ios::out);
	yu.close();
	yu1.open("team2.txt",ios::out);
	yu1.close();
	yu2.open("team3.txt",ios::out);
	yu2.close();
	yu3.open("team4.txt",ios::out);
	yu3.close();
	yu4.open("team5.txt",ios::out);
	yu4.close();

}

	
}

void teams :: addplayers()
{int q,y,v;
char t[100],x[100];
    cout<<"\n*******************************************************************************************";
     	cout<<"\nYou can only add players to the new team created.";
     	cout<<"\n----------------------------------------------------------------------------------------";
	cout<<"\n So if you have not created a team ,first create it then come back to add the new players.";
    cout<<"\n********************************************************************************************";
cout<<"\n\nIn which of the newly added team you want to enter players ? : ";
cout<<"\n1.team9";
cout<<"\n2.team10";
cout<<"\n3.team11";
cout<<"\n4.team12";
cout<<"\n5.team13\n";
cout<<"\n=========================";
cout<<"\nEnter your choice :";
cin>>q;
if(q==1)
{
	cout<<"\nHow many Players you want to enter?";
	cout<<"\nEnter players :";
	cin>>v;
	fstream ob;
	ob.open("team1.txt",ios::app);
		ob<<"                                               Players added";
	ob<<"\n===============================================================================================================";
	ob<<"\n    Name                      Style            age";
	ob.close();
	for(int i=1;i<=v;i++)
	{
	cout<<"\nEnter player name: ";
	cin>>t;
	cout<<"Enter player style(LHS/RHS):";
	cin>>x;
	cout<<"Enter players age:";
	cin>>y;
	fstream ob;
	ob.open("team1.txt",ios::app);

	ob<<"\n"<<i<<"."<<t<<"                     "<<x<<"            "<<y;
	ob.close();
	
}
}
else if(q==2)
{
	cout<<"\nHow many Players you want to enter?";
	cout<<"\nEnter players :";
	cin>>v;
	fstream ob;
	ob.open("team2.txt",ios::app);
		ob<<"                                               Players added";
	ob<<"\n===============================================================================================================";
	ob<<"\n    Name                    Style            age";
	ob.close();
	for(int i=1;i<=v;i++)
	{
		
	cout<<"\nEnter player name: ";
	cin>>t;
	cout<<"Enter player style(LHS/RHS):";
	cin>>x;
	cout<<"Enter players age:";
	cin>>y;
	fstream ob;
	ob.open("team2.txt",ios::app);

	ob<<"\n"<<i<<"."<<t<<"                  "<<x<<"            "<<y;
	ob.close();
	
}
}
else if(q==3)
{
	cout<<"\nHow many Players you want to enter?";
	cout<<"\nEnter players :";
	cin>>v;
	fstream ob;
	ob.open("team3.txt",ios::app);
		ob<<"                                               Players added";
	ob<<"\n===============================================================================================================";
	ob<<"\n    Name                    Style            age";
	ob.close();
	for(int i=1;i<=v;i++)
	{
	cout<<"\nEnter player name: ";
	cin>>t;
	cout<<"Enter player style(LHS/RHS):";
	cin>>x;
	cout<<"Enter players age:";
	cin>>y;
	fstream ob;
	ob.open("team3.txt",ios::app);

	ob<<"\n"<<i<<"."<<t<<"                 "<<x<<"            "<<y;
	ob.close();
	
}
}
else if(q==4)
{
	cout<<"\nHow many Players you want to enter?";
	cout<<"\nEnter players :";
	cin>>v;
	fstream ob;
	ob.open("team4.txt",ios::app);
		ob<<"                                               Players added";
	ob<<"\n===============================================================================================================";
	ob<<"\n    Name                    Style            age";
	ob.close();
	for(int i=1;i<=v;i++)
	{
	cout<<"\nEnter player name: ";
	cin>>t;
	cout<<"\Enter player style(LHS/RHS):";
	cin>>x;
	cout<<"Enter players age:";
	cin>>y;
	fstream ob;
	ob.open("team4.txt",ios::app);

	ob<<"\n"<<i<<"."<<t<<"                   "<<x<<"            "<<y;
	ob.close();
	
}
}
else if(q==5)
{
	cout<<"\nHow many Players you want to enter?";
	cout<<"\nEnter players :";
	cin>>v;
	fstream ob;
	ob.open("team5.txt",ios::app);
		ob<<"                                               Players added";
	ob<<"\n===============================================================================================================";
	ob<<"\n    Name                    Style            age";
	ob.close();
	for(int i=1;i<=v;i++)
	{
	cout<<"\nEnter player name: ";
	cin>>t;
	cout<<"Enter player style(LHS/RHS):";
	cin>>x;
	cout<<"Enter players age:";
	cin>>y;
	fstream ob;
	ob.open("team5.txt",ios::app);

	ob<<"\n"<<i<<"."<<t<<"                 "<<x<<"            "<<y;
	ob.close();
	
}
}

}
void teams::seenewplayers()
{int d;
	cout<<"Select the team of which you want to see the data:";
cout<<"\n1.team9";
cout<<"\n2.team10";
cout<<"\n3.team11";
cout<<"\n4.team12";
cout<<"\n5.team13\n";
cout<<"\n============";
cout<<"\nSelected Team:";
cin>>d;
if(d==1)
{
fstream ob;
ob.open("team1.txt",ios::in);
char ch;
while(1)
{
	ch = ob.get();
	if(ch==EOF)
    break;
	cout<<ch;
}
ob.close();
	
}
else if(d==2)
{
	fstream ob1;
ob1.open("team2.txt",ios::in);
char ch;
while(1)
{
	ch = ob1.get();
	if(ch==EOF)
    break;
	cout<<ch;
}
ob1.close();
}
else if(d==3)
{
	fstream ob2;
ob2.open("team3.txt",ios::in);
char ch;
while(1)
{
	ch = ob2.get();
	if(ch==EOF)
    break;
	cout<<ch;
}
ob2.close();
}
else if(d==4)
{
	fstream ob;
ob.open("team4.txt",ios::in);
char ch;
while(1)
{
	ch = ob.get();
	if(ch==EOF)
    break;
	cout<<ch;
}
ob.close();
}
else if(d==5)
{
	fstream ob;
ob.open("team5.txt",ios::in);
char ch;
while(1)
{
	ch = ob.get();
	if(ch==EOF)
    break;
	cout<<ch;
}
ob.close();
}
	
}
int main()
{
	teams ob;
	ob.info();
}

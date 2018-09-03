#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;
void call();
void exit1();
void detail();
void info();
int details;
int er;
class BMICalc
{
	protected:
	int age;
	char gender[10];
	int erno;
	float height,weight,BMI;
	char name[50];
	public:
		BMICalc()
		{
		    BMI=0;
			weight=0;
			height=0;
			age=0;
			strcpy(name,"No Name");
			strcpy(gender,"No Data");
		}
		void get()
		{
			system("COLOR 4F");
			cout<<endl<<"\t\t\t\t\t\tEnter Your Name: ";
			fflush(stdin);
		    cin.getline(name,50);
		    cout<<"\t\t\t\t\t\tSet your Enrollment ID ";
		    cout<<endl<<"\t\t\t\t\t\t(NOTE:Do Remember Your Enrollment ID For Future Reference)"<<endl;
		    cout<<"\t\t\t\t\t\t";
		    cin>>erno;
		    cout<<"\n\t\t\t\t\t\tEnter Your Gender:";
	        cout<<"\n\t\t\t\t\t\t1)Male";
	        cout<<"\n\t\t\t\t\t\t2)Female";
	        cout<<endl<<"\t\t\t\t\t\tSelect:"<<ends;
	        cin>>details;
	        switch(details)
			{
		    case 1:
		    	strcpy(gender,"Male");
			break;
		    case 2:
		    	strcpy(gender,"Female");
	    	break;
		    default:
			     strcpy(gender,"invalid");
			break;	
			}   
			do
			{
			cout<<"\n\t\t\t\t\t\tEnter Age(in years):";
	        cin>>age;
			if(age<0||age>150)
			cout<<"\n\t\t\tEnter valid age !";
			}
			while(age<0||age>150);
			do
			{
			cout<<"\n\t\t\t\t\t\tEnter Your Height(in cm):";
	        cin>>height;
	        if(height<0||height>250)
	        cout<<"\n\t\t\tEnter valid height !";
	        }
	        while(height<0||height>250);
	        do
	        {
			cout<<"\n\t\t\t\t\t\tEnter Your weight(in kg):";
	        cin>>weight;
			if(weight<0||weight>250)
			cout<<"\n\t\t\tEnter valid weight !"; 
		    }
		    while(weight<0||weight>250);
	        BMI=(weight/(height*height))*10000;
		}
		
		void show()
		{
			//system("COLOR 25A");
			cout<<"\t\t\t\t\t\tEnrollment ID: "<<erno<<endl;
			cout<<"\t\t\t\t\t\tName: "<<name<<endl;
			cout<<"\t\t\t\t\t\tAge: "<<age<<endl;
			cout<<"\t\t\t\t\t\tGender: "<<gender<<endl;  
	        cout<<"\t\t\t\t\t\tHeight: "<<height<<endl;
	        cout<<"\t\t\t\t\t\tWeight: "<<weight<<endl; 
	        cout<<"\t\t\t\t\t\tYour BMI is :"<<std::setprecision(4)<<BMI<<" kg/m^2"<<endl;
	        cout<<endl;
	        cout<<endl;
	    }
	    void info()
		{
			int n;
			cout<<"\n\t";
			{
		       for(int a=0;a<37;a++)
	            {
		        cout<<"*";
                Sleep(35);
		        }
			}
			cout<<"\n\t\tAdvices";
			cout<<"\n\t*************************************";
			cout<<"\n\t|  1:Severly underweight:(          |";
			cout<<"\n\t|  2:Underweight:(                  |";
			cout<<"\n\t|  3:Healthy:)                      |";
			cout<<"\n\t|  4:Over Weight                    |";
			cout<<"\n\t|  5:Severly Overweight  :~)        |";
			cout<<"\n\t*************************************";
			cout<<"\n";
			cin>>n;
			switch(n)
	        {   
			case 1:
				system("cls");
				cout<<"\n\t**Please take a healthy diet and drink milk 2 glass in a day**";
				cout<<"\n\t**Do exercise or yoga at early morning\n";
			
				break;
			case 2:
			    system("cls");
			    system("start https://www.uccs.edu/Documents/healthcircle/pnc/health-topics/Weight%20Gain.pdf");  
    		
				break;
			case 3:
			    system("cls");
				system("start https://health.gov/paguidelines/pdf/adultguide.pdf");
				break;
			case 4:
			    system("cls");
				system("start https://www.youtube.com/watch?v=cgTE_09hEDU");
				break;
			case 5:
			    system("cls");
				system("start http://site.stewsmithptclub.com/45dayplan.pdf");			
			    break;     
		    }
		}
	    void detail()
		{
			system("COLOR 1F");
			    cout<<"\n\tFITNESS MANAGEMENT SYSTEM\n";
			    
			    cout<<"\n\tCreation Year-(2018) ";

                cout<<"\tMini Project in C++\n";

                cout<<"\tSubmitted To: Lovely Professional University(CSE branch)\n";

                cout<<"\tCode with C++ : Shubham Kumar\n";
 
                cout<<"******************************************\n\n";

                cout<<"******************************************\n";

                cout<<"******************************************\n\n";

                cout<<"********************************************\n\n\n";

                cout<<"Exiting in 3 second...........>";
                Sleep(3000);   
		}
			
	};
class Advise: public BMICalc
{
	public:
		void advise()
		{
			get();
		    system("cls");
			show();
		if(BMI<16)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\t\t\t\t\t\tSevere Thinness"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tMild Thinness"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are underweight(BMI less than 16),you may be malnourished and develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Compromised immune function"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Respiratory diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.Digestive diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoporosis."<<endl;
		
		}
		else if(BMI>=16 && BMI<17)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\t\t\t\t\t\tModerate Thinness"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tMild Thinness"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are underweight(BMI less than 17), you may be malnourished and develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Compromised immune function"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Respiratory diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.Digestive diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoporosis."<<endl;
		}
		else if(BMI>=17 && BMI<18.5)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\n\t\t\t\t\t\tMild Thinness"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are underweight(BMI less than 18.5), you may be malnourished:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Compromised immune function"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Respiratory diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.Digestive diseases"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoporosis."<<endl;
			exit1();
		}
		else if(BMI>=18.5 && BMI<25)
		{
			cout<<"\t\t\t\t\t\tNormal"<<endl;
	
		}
		else if(BMI>=25 && BMI<30)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\t\t\t\t\t\tOverweight"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are overweight(with a BMI over 25) and physically inactive, you may develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Cardiovascular(heart and blood circulation) disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Gallbladder disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.High blood pressure(hypertension)"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Type 2 diabetes"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoarthritis"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t6.Certain types of cancer, such as colon and breast cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t7.Depression and other mental health disorders."<<endl;
			
		}
		else if(BMI>=30 && BMI<35)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\t\t\t\t\t\tObese Class I"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are overweight (with a BMI over 30) and physically inactive, you may develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Cardiovascular (heart and blood circulation) disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Gallbladder disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.High blood pressure(hypertension)"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Type 2 diabetes"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoarthritis"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t6.Certain types of cancer, such as colon and breast cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t7.Depression and other mental health disorders."<<endl;
			
		}
		else if(BMI>=35 && BMI<40)
		{
			cout<<"Wait!!!! your Diet plan is being ready in 2 sec:";
			Sleep(2000);
			cout<<"\t\t\t\t\t\tObese Class II"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are overweight (with a BMI over 35) and physically inactive, you may develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Cardiovascular (heart and blood circulation) disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Gallbladder disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.High blood pressure (hypertension)"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Type 2 diabetes"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoarthritis"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t6.Certain types of cancer, such as colon and breast cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t7.Depression and other mental health disorders."<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"\t\t\t\t\t\tObese Class III"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\tYou are overweight (with a BMI over 25) and physically inactive, you may develop:"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t1.Cardiovascular (heart and blood circulation) disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t2.Gallbladder disease"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t3.High blood pressure (hypertension)"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t4.Type 2 diabetes"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t5.Osteoarthritis"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t6.Certain types of cancer, such as colon and breast cancer"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t7.Depression and other mental health disorders."<<endl;
		}
		}
		
		int storeUserData();
		void searchData(int);
		
}obj1;
void Advise::searchData(int er)
{
	int count=0;
	ifstream fin;
	fin.open("fms.txt",ios::in|ios::binary);
		if(!fin)
		{
		cout<<"Invalid File\n";
		}
		else
		{
			while(fin.read((char*)this,sizeof(*this))){
				if(erno==er){
					show();
					count++;
				}
				
			}
		if(count==0)	
		cout<<"\nRecord Not Found";
		}
		fin.close();
}
int Advise::storeUserData()
{	ofstream fout;
	fout.open("fms.txt",ios::app|ios::binary);
	fout.write((char*)this,sizeof(*this));
	fout.close();
	return 1;
	
}
void header()

{
	system("COLOR B0");
	cout<<"\n\t\t\t";
		 for(int i=0;i<20;i++)
	     {
		    cout<<"*";
            Sleep(20);
		 }
	cout<<".......FITNESS CALCULATOR.......";
		 for(int i=0;i<20;i++)
	     {
		    cout<<"*";
            Sleep(20);
		 }
}
int main()
{
	string username = "";
	int password;
	
	  int var=0;
	header();
	do{
		cout<<"\t\t\t\t\t\tlogin:";
		cin>>username;
	//	cout<<"\n\t\t\t\t\t\t**************************************\n";
		cout<<"\t\t\tPassword: ";
		cin>>password;
		cout<<"\n\t\t\t\t\t\t**************************************";
		
		if((username=="shubham"||username=="SHUBHAM" )&& password ==240298)
		{
			cout<<"\t\t\t\t\t\t\nSuccessful login\n\n";
			
			system("cls");
			call();
			var=1;
			}
		else
		{
			system("cls");
	
			cout<<"\t\t\t\t\t\tIncorrect Username and Password";
			
		}
	
	}
		while(var!=1);
}
void exit1()
{
	cout<<endl<<"\t\t\t\t\t\tThank You For Visiting us"<<endl;
	cout<<"\t\t\t\t\t\tPress 1 For Main Menu"<<endl;
	cout<<"\t\t\t\t\t\tPress 0 to Exit The Page"<<ends;
	cin>>details;
	switch(details)
	{
		case 0:
			exit(0);
			break;
		case 1:
			system("cls");
			call();	
	}
}
void call()
{
	header();
	cout<<"\t\t\t\t\t\tEnter Your Choice"<<endl;
	cout<<"\t\t\t\t\t\t1.Enter Client Detail"<<endl;
	cout<<"\t\t\t\t\t\t2.Search Client Detail"<<endl;
	cout<<"\t\t\t\t\t\t3.Client advice Details"<<endl;
	cout<<"\t\t\t\t\t\t4.Program Details:"<<endl;
	cout<<"\t\t\t\t\t\tSelect Your Choice"<<ends;
	cin>>details;
	system("cls");
	switch(details)
	{
		case 1:
			header();
		    obj1.advise();
		    obj1.storeUserData();
	        exit1();
	        exit(0);
			break;
		case 2:
			header();
			cout<<"\t\t\t\t\t\tEnter Enrollment ID to Search Information:";
			cin>>er;
			cout<<endl;
			obj1.searchData(er);
			exit1();
		    break;
		case 3:
			system("cls");
			obj1.info();
			exit1();
			exit(0);
			break;
		case 4:
			system("cls");
			obj1.detail();
			exit1();
			exit(0);
			break;
		default:
			header();
			cout<<"\t\t\t\t\t\tWrong Input Entered"<<endl;
		    exit1();
		    break;				
		}
		getch();
	}

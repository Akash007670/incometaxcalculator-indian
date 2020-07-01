#include<iostream>
#include<fstream>
#include<math.h>
#include<string>
using namespace std;
//*************Base class 1****************//
class tax
{
    private:
    int salary;
    public:
    char g,f;
    string name,occupation,address,gender;
    int id,age;
    void identity()
    {
             cout<<"Enter Your Name : \n";
             cin>>name;
             cout<<"Enter Your Occupation : \n";
             cin>>occupation;
             cout<<"Enter Your Gender (M/F) : \n";
             cin>>gender;
             cout<<"Enter Your Age : \n";
                    g:
                    cin>>age;
                    if(age<18)
                    {
                              cout<<"Enter Valid Age\n";
                              goto g;
                    }
             cout<<"Enter Id : \n";
             cin>>id;
             cout<<"Give your Address in Detail : \n";
             cin>>address;
    }
    void show()
    {
          cout<<"\nName : "<<name;
          cout<<"\nGender : "<<gender;
          cout<<"\nAge : "<<age;
          cout<<"\nOccupation : "<<occupation;
          cout<<"\nId No. : "<<id;
          cout<<"\nAddress : "<<address;
    }

};
//*************************BaseClass2****************************//
class first:public tax
{
	public:
          float sal,tax1;
          void taxslab()
          {
              cout<<"How much you earn in a Year : ";
              cin>>sal;
                    if(sal<250000)
                    {
                        tax1=0;
                    }
                    if((sal>250000)&&(sal<=500000))
                    {
                        tax1=sal*(.5);
                    }
                    if((sal>500000)&&(sal<1000000))
                    {
                        tax1=sal*(.15);
                    }
                    if(sal>1500000)
                    {
                        tax1=sal*(.30);
                    }
		}
		void showit()
		{
                      cout<<"\nYour IncomeTax is = Rs "<<tax1<<endl;
                      sal=sal-tax1;
                      cout<<"And your salary after paying tax is = Rs "<<sal;
		}
};
//******************MainFunction*********************//
int main()
{
          ofstream incometaxfile;
	tax m;
	first n;
	int a,d;
	char b,c,e,p;
	cout<<"\t\t\t\tName : Akash kumar "<<endl;
	cout<<"\t\t\t\tReg No. : 11910013 "<<endl;
	cout<<"//******************************INCOME TAX CALCULATOR 2020*****************************//"<<endl<<endl;
	cout<<"\t\t\tWelcome to Income Tax Calculator"<<endl<<endl;
	cout<<"Enter the choice you want ?"<<endl;
	z:
	cout<<"\n1.Want to know your IncomeTax ?"<<endl;
	cout<<"2.Want to view old IncomeTax ?"<<endl;
	cout<<"3.Want to know what is IncomeTax and how it works for improvement of our Country ?"<<endl;
	cout<<"4.Exit -_-"<<endl;
	cout<<"Enter Your Choice"<<endl;
	cin>>a;
	if((a!=1)&&(a!=2)&&(a!=3)&&(a!=4))
	{
		cout<<"\n*********ERROR********\n";
		cout<<"\nEnter valid no \n";
		goto z;
	}
	switch(a)
	{
		case 1:
                    {
                      cout<<"\nHow many members ? \n";
                      cin>>d;
                    if(d==0)
                     {
                       cout<<"Enter the valid number .\n\n";
                     }
                     for(int i=1;i<=d;i++)
                       {
                              m.identity();
                              n.taxslab();
                       }
                     for(int i=1;i<=d;i++)
                     {
                              m.show();
                              n.showit();
                     }
                    cout<<"\n Do you Want to Save Data ?\n"<<endl;
                    cout<<"(Y/N)"<<endl;
                    cin>>e;
                    if(e == 'y')
                    {
                              cout<<"Your Data Saved";
                              return 0;
                    }
                    else
                    {
                              return 0;
                    }
                    break;
                    }
                    case 2:
                    {
                              cout<<"here is case 2";
                              break;
                    }
                    case 3:
                    {
			cout<<"\nAn income tax is a tax imposed on individuals or entities (taxpayers) that varies with the"<<endl;
                              cout<<"income or profits (taxable income) of the taxpayer. Details vary widely by jurisdiction."<<endl;
                              cout<<"Many jurisdictions refer to income tax on business entities as companies tax or corporate tax."<<endl;
                              cout<<"Partnerships generally are not taxed; rather, the partners are taxed on their share of partnership items."<<endl;
                              cout<<"Tax may be imposed by both a country and subdivisions. Most jurisdictions exempt locally organized "<<endl;
                              cout<<"charitable organizations from tax."<<endl;
                              p:
                              cout<<"Want to know more ?"<<endl;
                              cout<<"(Y/N): "<<endl;
                              cin>>c;
                              if(c == 'y')
                              {
                                   cout<<"go to the link for more information  = https://cleartax.in/s/income-tax-slabs"<<endl;
                                   return 0;
                              }
                              else if(c == 'n')
                              {
                                 goto z ;
                              }
                             if((c!='y')&&(c!='n'))
                              {
                                  cout<<"Wrong Choice"<<endl;
                                  goto p;
                                  break;

                              }
                              break;

                    }
                    case 4:
                    {
                              cout<<"do you really want to exit"<<endl;
                              cout << "(Y/N)" << endl;
                              cin >> b;
                              if(b == 'Y')
                              {
                                 cout << "exit" << endl;
                              }
                              else if(b == 'N')
                               {
                                    goto z;
                               }
                                break;
                    }

	}


}
//*************************End Of Main Function*********************//



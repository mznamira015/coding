#include<bits/stdc++.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
#include <conio.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<stdbool.h>
#define PI=acos(-1);
using namespace std;

template <typename A>
class calculator
{

public:
     A fact(A n) {
   if (n == 0 || n == 1)
      return 1;
   else
      return n * fact(n - 1);
    }
    FractionToDecimal( A &a, A &b)
{
    cout<<"Enter the numerator ";
    cin>>a;
    cout<<"Enter the denominator ";
    cin>>b;
	cout<<"decimal no="<<(a/b);
	_getch();
}

    void mainMenu()
    {
         cout<<"1.Summation"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Sine"<<endl;
    cout<<"6.Cosine"<<endl;
    cout<<"7.Tangent"<<endl;
    cout<<"8.Power(X^N)"<<endl;
    cout<<"9.Squareroot"<<endl;
    cout<<"10.Log Function"<<endl;
    cout<<"11.Ln Function"<<endl;
    cout<<"12.Percentage"<<endl;
    cout<<"13.Exponential"<<endl;
    cout<<"14.Sin_inverse"<<endl;
    cout<<"15.Cos_inverse"<<endl;
    cout<<"16.Tan_inverse"<<endl;
    cout<<"17.Modular"<<endl;
    cout<<"18.Permutation"<<endl;
    cout<<"19.Combination"<<endl;
    cout<<"20.Factorial"<<endl;
    cout<<"21.Decimal to Binary"<<endl;
    cout<<"22.Decimal to Octal"<<endl;
    cout<<"23.Decimal to Hexadecimal"<<endl;
     cout<<"24.Binary to Decimal"<<endl;
      cout<<"25.Binary to Octal"<<endl;
       cout<<"26.Binary to Hexadecimal"<<endl;
        cout<<"27.Octal to Decimal"<<endl;
        cout<<"28.Octal to Binary"<<endl;
        cout<<"29.Octal to Hexadecimal"<<endl;
        cout<<"30.Hexadecimal to Decimal"<<endl;
        cout<<"31.Hexadecimal to Binary"<<endl;
        cout<<"32.Hexadecimal to Octal"<<endl;
        cout<<"33.Fraction to Decimal"<<endl;
        cout<<"34.Decimal to Fraction"<<endl;
        cout<<"35.Y*10^X"<<endl;
        cout<<"36.Mixed Fraction to Improper Fraction"<<endl;
        cout<<"37.Improper Fraction to Mixed Fraction"<<endl;
      cout<<"38.GCD"<<endl;
      cout<<"39.LCF"<<endl;


    }
    mixed_to_improper(A &n1, A &d)
    {

    int rem;
    cout<<"Enter the numerator ";
    cin>>n1;
    cout<<"Enter the denominator ";
    cin>>d;
    rem=n1%d;
    n1=(n1-rem)/d;
    cout<<"Mixed Fraction = "<<n1<<" "<<rem<<"/"<<d;
    _getch();

    }
    improper_to_mixed(A &w, A &n1, A &d)
    {

    int temp;
    cout<<"Enter the whole ";
    cin>>w;
    cout<<"Enter the numerator ";
    cin>>n1;
    cout<<"Enter the denominator ";
    cin>>d;

	temp = d * w;

	n1 = temp + n1;

	w = 0;
    cout<<"Improper Fraction = "<<n1<<"/"<<d;
    _getch();

    }
    sum( A &a, A &b)
    {
         cout<<"enter input :"<<endl;
        cin>>a>>b;
        cout<<"sum="<<a+b<<endl;
        _getch();
    }
    subtract( A &a, A &b)
    {
         cout<<"enter input :"<<endl;
        cin>>a>>b;
        cout<<"subtract="<<a-b<<endl;
        _getch();
    }
    multiple( A &a, A &b)
    {
         cout<<"enter input :"<<endl;
        cin>>a>>b;
        cout<<"multiple="<<a*b<<endl;
        _getch();
    }
division( A &a, A &b)
    {
         cout<<"enter input :"<<endl;
        cin>>a>>b;
        if(b=0)
            throw "error";
        cout<<"division="<<a/b<<endl;
        _getch();
    }
    modular( A &s, A &t)
    {
         cout<<"enter input :"<<endl;
        cin>>s>>t;
        cout<<"mod="<<abs(s-t)<<endl;
        _getch();
    }

    sine( A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        cout<<"sinX="<<sin(x*(M_PI/180))<<endl;
        _getch();
    }
     cosine( A &x)
    {
        cout<<"enter input :"<<endl;
        cin>>x;
        cout<<"cosX="<<cos(x*(M_PI/180))<<endl;
        _getch();
    }
     tangent( A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        int d=x/90;
        if(d%2)
            throw "error";
        cout<<"tanX="<<tan(x*(M_PI/180))<<endl;
        _getch();
    }
     power( A &x, A &n)
    {
     cout<<"enter input :"<<endl;
        cin>>x>>n;
        cout<<"power="<<pow(x,n)<<endl;
        _getch();
    }

    power2( A &y, A &m)
    {
     cout<<"enter input :"<<endl;
        cin>>y>>m;
        cout<<"power="<<(y*pow(10,m))<<endl;
        _getch();
    }
    squareroot( A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        if(x<0)
            throw "error";
        cout<<"squareroot="<<sqrt(x)<<endl;
        _getch();
    }
    ln_function( A &y)
    {
         cout<<"enter input :"<<endl;
        cin>>y;
        if(y==0)
            throw "error";
        cout<<"ln(y)="<<log(y)<<endl;
        _getch();
    }
    log_function( A &y)
    {
        cout<<"enter input :"<<endl;
        cin>>y;
        if(y==0)
            throw "error";
        cout<<"log(y)="<<log10(y)<<endl;
        _getch();
    }
    percentage( A &y)
    {
        cout<<"enter input :"<<endl;
        cin>>y;
        cout<<"Y%="<<(y/100)<<endl;
        _getch();
    }
    exponential( A &m, A&y)
    {
        int i;
        float sum=1.0f;
         cout<<"enter input :"<<endl;
        cin>>m>>y;
        for(i=m-1 ;i>0; --i)
        {
            sum=1+y*sum/i;
        }
        cout<<"e^y="<<sum<<endl;
        _getch();
    }

    sine_inverse(A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        cout<<"sin'1(x)="<<asin(x)<<endl;
        _getch();
    }
    cosine_inverse(A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        cout<<"cos'1(x)="<<acos(x)<<endl;
        _getch();
    }
    tangent_inverse(A &x)
    {
         cout<<"enter input :"<<endl;
        cin>>x;
        cout<<"tan'1(x)="<<atan(x)<<endl;
        _getch();
    }
    factorial(A &n)
    {
        double i,factorial=1;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>n;
	for (int i=1;i<=n;i++) {
		factorial=factorial*i;
	}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
    }
    permutation( A &n, A &r)
    {
calculator<int>ob2;
        double per;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   per = ob2.fact(n) / ob2.fact(n-r);
   cout << "\nPermutation : " << per;
        _getch();
    }
    combination( A &n, A &r)
    {
        calculator<int>ob2;
        double comb;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   comb = ob2.fact(n) / (ob2.fact(r) * ob2.fact(n-r));
   cout << "\nCombination : " << comb;
        _getch();
    }
};
int main()
{
    double a,b,y,m;
    int j,s,t,r,n,x,n1,d,w;
    bool again = true;
    char D[50]="WELCOME TO SCIENTIFIC CALCULATOR BY NAMIRA";
      system("CLS");
system("COLOR FC");
    while (again)
    {

for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
for(j=0;j<42;j++)
{
Sleep(50);
printf("%c",D[j]);
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
cout<<endl<<endl;

    cout<<"enter your choice:"<<endl<<endl;

    calculator<double>ob;

    calculator<int>ob1;
    ob.mainMenu();
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
    ob.sum(a,b);
    break;
    case 2:
    ob.subtract(a,b);
    break;
    case 3:
    ob.multiple(a,b);
    break;
    case 4:
        try
        {
    ob.division(a,b);
        }
        catch(...)
        {
            cout<<"error"<<endl;
        }
    break;
    case 5:
    ob1.sine(x);
    break;
    case 6:
    ob1.cosine(x);
    break;
    case 7:
        try
        {
    ob1.tangent(x);
    }
        catch(...)
        {
            cout<<"error"<<endl;
        }
    break;
    case 8:
    ob1.power(x,n);
    break;
    case 9:
        try
        {
    ob1.squareroot(x);
    }
        catch(...)
        {
            cout<<"error"<<endl;
        }
    break;
    case 10:
        try
        {
    ob.log_function(y);
    }
        catch(...)
        {
            cout<<"error"<<endl;
        }
    break;
    case 11:
        try
        {
    ob.ln_function(y);
    }
        catch(...)
        {
            cout<<"error"<<endl;
        }
    break;
    case 12:
    ob.percentage(y);
    break;
    case 13:
    ob.exponential(m,y);
    break;
    case 14:
    ob1.sine_inverse(x);
    break;
    case 15:
    ob1.cosine_inverse(x);
    break;
    case 16:
    ob1.tangent_inverse(x);
    break;
    case 17:
    ob1.modular(s,t);
    break;
    case 18:
        ob1.permutation(n,r);
    break;
    case 19:
        ob1.combination(n,r);
    break;
    case 20:
        ob1.factorial(n);
    break;
    case 33:
        ob.FractionToDecimal(a,b);
    break;
    case 37:
        ob1. mixed_to_improper(n1,d);
    break;
    case 36:
        ob1.improper_to_mixed(w,n1,d);
    break;
    case 35:
        ob.power2(y,m);
    break;

    default:
        cout<<"invalid choice"<<endl;
        _getch();
        break;
    }
    int choose;
    printf(" Would you like to contine ??:\n\n ");
        printf("< 1 > Yes \n\n");
        printf(" < 2 > No \n\n");
        scanf("%d", &choose);
        system("CLS");

        if (choose == 2)
        {
            again = false;
             return 0;

        }
    }
        _getch();


}


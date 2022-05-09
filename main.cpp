///TETIARY EDUCATION GRADING SYSTEM

#include<iostream>

using namespace std;

int main()

{

int x;//marks entered
int a;//user options
cout<<"Enter your percentage marks obtained\n";
cin>>x;

if(x==0, x<=39)
{
    cout<<"You have obtained a: D\n";
}


else if(x==40, x<=49)
{
    cout<<"You have obtained a: D+\n";
}


else if(x==40, x<=55)
{
    cout<<"You have obtained a:C\n";
}


else if(x==56, x<=61)
{
    cout<<"You have obtained a: C+\n";
}


else if(x==62, x<=67)
{
    cout<<"You have obtained a: B\n";
}


else if(x==68, x<=75)
{
    cout<<"You have obtained a: B\n";
}


else if(x==76, x<=85)
{
    cout<< "Well done, for an: A\n";
}

else if(x==86, x<=100)
{
    cout<<"Congratulations for obtaining an: A+\n";
}

else{cout<<"Kindly note that, the marks you have entered are invalid";}

cout<<"Would you like to check for another student?\n";
cout<<"1.Yes\n";
cout<<"Press any key to exit\n";

cin>>a;//user option
if(a==1){main();}//repeats the code from main

else{

 ("cls");//clear screen of exit if the user selects any option


}



return(0);//end of the program
}

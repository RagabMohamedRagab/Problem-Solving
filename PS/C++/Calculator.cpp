#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
   string eq;
   char opera,index;
   string Num1,Num2;
   long int Num1Int,Num2Int;
   cin>>eq;
   for(int i=0;i<eq.length();i++){
   	if(eq[i]=='+'||eq[i]=='-'||eq[i]=='*'||eq[i]=='/'){
   		opera=eq[i];
   		index=i;
   		break;
	   }
   }
   Num1=eq.substr(0,index);
   Num2=eq.substr(index+1);
   stringstream n1;
   stringstream n2;
   n1<<Num1;
   n1>>Num1Int;
   n2<<Num2;
   n2>>Num2Int;
   switch(opera){
   	case '-':
   		cout<<Num1Int-Num2Int;
   		break;
   	case '+':
   		cout<<Num1Int+Num2Int;
   		break;
   	case '*':
   		cout<<Num1Int*Num2Int;
   		break;
   	case '/':
   		cout<<Num1Int/Num2Int;
   		break;
   }
   return 0;
   
}

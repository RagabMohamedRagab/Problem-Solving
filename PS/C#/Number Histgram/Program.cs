using System;
namespace LuckyNumbers
{
    class Program{
        static void Main(string[]args){
        string []arr=Console.ReadLine().Split(' ');
            int A=Int32.Parse(arr[0]);
            int B=Int32.Parse(arr[1]);
            int count=-1;
            for(int i=A;i<=B;i++){
                int j=i,flag=0;
                while(j!=0){
                    if(j%10!=7&&j%10!=4){
                        flag=1;
                    }
                    j/=10;
                }
                if(flag==0){
                    System.Console.Write($"{i} ");
                    count++;
                }
            }
            if(count==-1){
                System.Console.Write($"{count}");
            }

        }
    }
}
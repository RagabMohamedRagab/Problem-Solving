using System;
namespace GCD
{
    class Program{
        static void Main(string []args){
            string []Nums=Console.ReadLine().Split(' ');
            int A=Int32.Parse(Nums[0]);
            int B=Int32.Parse(Nums[1]);
            int Max_num=0;
          if(A>=B){
            int i=1;
            while(i<=A){
                if(A%i==0&&B%i==0){
                    Max_num=i;
                }
                i++;
            }
          }else{
            int j=1;
            while(j<=A){
                if(A%j==0&&B%j==0){
                    Max_num=j;
                }
                j++;
            }
          }
          System.Console.WriteLine(Max_num);
        }
    }
}
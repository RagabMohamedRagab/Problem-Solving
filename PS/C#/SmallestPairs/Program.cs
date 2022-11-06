// Time Complexity O(N^3)
// Space Complexity O(N)
using System;
namespace SmallestPair{
    class Program{
        static void Main(string []args){
           int N=Int32.Parse(Console.ReadLine());
           int a=1;
           while(a++<=N){
            int size=Int32.Parse(Console.ReadLine());
            string []A=Console.ReadLine().Split(' ');
            int i=0,res=0,min=0;
            bool flag=true;
            while(i<size){
                int item=Int32.Parse(A[i]);
                int j=i+1;
                while(j<size){
                    res=(item+Int32.Parse(A[j]))+(j-i);
                    if(flag){
                        min=res;
                        flag=false;
                    }
                    if(min>res && flag==false){
                        min=res;
                    }
                    j++;
                }
                i++;
            }
            res=0;
            flag=true;
            Console.WriteLine($"{min}");
           }
           

        }
    }
}

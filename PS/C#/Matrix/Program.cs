// Happy Code
// Time Complexity O(N^2)
// Space Complexity O(N)
using System;
using System.Collections.Generic;
namespace Matrix
{
    class Program
    {
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            string []A=new string[]{};
            IList<string []> list_Arr=new List<string []>();
            int i=1;
            while(i<=N){
                A=Console.ReadLine().Split(' ');
                if(A.Length==N){
                    list_Arr.Add(A);
                }
                i++;
            }
            int sum1=0,sum2=0;
           for(int a=0;a<N;a++){
                for(int b=0;b<N;b++){
                    if(a==b){
                        Console.Write(list_Arr[a][b]+" ");
                        sum1+=Int32.Parse(list_Arr[a][b]);
                    }
                    if(N-1-a==b){
                        sum2+=Int32.Parse(list_Arr[a][b]);
                         Console.Write(list_Arr[a][b]+" ");
                    }
                }
           }
           Console.WriteLine(Math.Abs(sum1-sum2));
        }
    }
}
// Happy Code
// T O(N)
// S O(N)
using System;
namespace RangeSumQuery
{
    class Program{
        static void Main(string[]args){
            string []size=Console.ReadLine().Split(' ');
            long N=Int64.Parse(size[0]);
            long Q=Int64.Parse(size[1]);
            string []Arr=Console.ReadLine().Split(' ');
            long []temp=new long[N];
            temp[0]=Int64.Parse(Arr[0]);
            long i=1;
            while(i<N){
                temp[i]=temp[i-1]+Int32.Parse(Arr[i]);
                i++;
            }
            long b=1;
            while(b<=Q){
                string []range=Console.ReadLine().Split(' ');
                long L=Int64.Parse(range[0]);
                long R=Int64.Parse(range[1]);
                L-=1;
                R-=1;
                if(L==0){
                    System.Console.WriteLine(temp[R]);
                }else{
                    System.Console.WriteLine(temp[R]-temp[L-1]);
                }
                b++;
            }
            


        }
    }
}


// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace Front_End
{
    class Program{
        static void Main(string[]args){
            long N=Int64.Parse(Console.ReadLine());
            string []A=Console.ReadLine().Split(' ');
            long []A2=new long[N];
            long a=0,b=N-1,i=0;
            while(a<b){
                A2[i]=Int64.Parse(A[a]);
                i++;
                A2[i]=Int64.Parse(A[b]);
                i++;
                a++;
                b--;
            }
            A2[i]=Int64.Parse(A[a]);
           for(int y=0;y<N;y++){
            Console.Write(A2[y]+" ");
           }
        }
    }
}
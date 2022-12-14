// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
using System.Collections.Generic;
namespace BSubSequenceOfA
{
    class Program
    {
        static void Main(string []args){
            string []size=Console.ReadLine().Split(' ');
            long N=Int64.Parse(size[0]);
            long M=Int64.Parse(size[1]);
           string []A=Console.ReadLine().Split(' ');
           string []B=Console.ReadLine().Split(' ');
             long pivot=0;
             int i=0;
             while(i<N){
               if(Int32.Parse(B[pivot])==Int32.Parse(A[i])){
                 pivot++;
               }
               if(pivot==M){
                break;
               }
               i++;
             }
            if(pivot==M){
                Console.WriteLine("YES");
            }else{
                Console.WriteLine("NO");
            }

        }

    }
}
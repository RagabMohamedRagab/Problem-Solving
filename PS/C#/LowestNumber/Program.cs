// Happy Code 
// Time Complexity O(N)
// Aulxiliary Space O(N)
using System;
namespace LowestNumber
{
    class Program{
        static void Main(string []args){
            int size=Int32.Parse(Console.ReadLine());
            string []A=Console.ReadLine().Split(' ');
            int min=Int32.Parse(A[0]);
            int j=1,Position=0;
            while(j<size){
                int item=Int32.Parse(A[j]);
                if(min>item){
                    min=item;
                    Position=j;
                    
                }
                j++;
            }
         Console.WriteLine($"{min} {Position+1}");
        }
    }
}
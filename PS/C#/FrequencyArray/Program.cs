// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace FrequencyArray
{
    class Program{
        static void Main(string []args){
            string []A=Console.ReadLine().Split(' ');
            int N=Int32.Parse(A[0]);
            int M=Int32.Parse(A[1]);
            string []Arr=Console.ReadLine().Split(' ');
            int []Fre=new int[M+1];
            for(int i=0;i<N;i++){
                ++Fre[Int32.Parse(Arr[i])];
            }
            for(int a=1;a<=M;a++){
                Console.WriteLine(Fre[a]);
            }


        }
    }
}
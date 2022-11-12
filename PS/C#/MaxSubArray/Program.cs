// Time Complexity O(N^2)
// Space Complexity O(N)
using System;
namespace maxSubArray{
    class Program{
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            for(int i=1;i<=N;i++){
                int size=Int32.Parse(Console.ReadLine());
                string []A=Console.ReadLine().Split(' ');
                for(int x=0;x<=size-1;x++){
                     Console.Write($"{A[x]} ");
                }
                int a=0,b=0,ma=0;
                while(true){
                    if(b==size-1){
                        break;
                    } 
                    int f=Int32.Parse(A[a]);
                    int s=Int32.Parse(A[a+1]);
                    if(a==b){
                     ma=(f>s)?f:s;
                    }else{
                        ma=(ma>s)?ma:s;
                    }
                    Console.Write($"{ma} ");
                    a++;
                    if(a==size-1){
                       b++;
                       a=b;
                    }
                }
                Console.WriteLine();
            }
        }
    }
}

// Time O(N^2)
// Space O(1)
using System;
namespace Fibonacci{
    class Program{
        static void Main(string []args){
        long N=Int64.Parse(Console.ReadLine());
        if(N==1){
            Console.WriteLine("0");
            return;
        }
        	// 0 1 1 2 3 5 8 13
	        // 1 2 3 4 5 6 7 8
        long []A=new long[100];
        A[0]=0;
        A[1]=1;
        long i=1,t1=0,t2=1,temp=0,a=1,c=2;
        while(true){
          temp=t1+t2;
          t1=t2;
          t2=temp;
          A[c++]=temp;
          if(N==a){
            for(int j=0;;j++){
                if(j==N-1){
                    Console.WriteLine(A[j]);
                    return ;
                }
            }
          }

          a++;
        }
        }
    }
}
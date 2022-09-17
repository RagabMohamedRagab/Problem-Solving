// Nice Code
// Complexity Time O(N^2)
using System;
namespace PrimesFrom1ToN
{
    class Program{
        static void Main(string []args){
         int N=Int32.Parse(Console.ReadLine()); // 10
         int i=2;
         while(i<=N){ // 2<=10 3 <=10 4<=10
            bool Prime=true;  
            	for(int j=2;j<i;j++){  
				if(i%j==0){ 
					Prime=false;
					break;
				}
		}
            if(Prime){
                Console.Write($"{i} ");
            }
            i++;
         }
        }
    }
}

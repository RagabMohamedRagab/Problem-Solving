using System;
namespace SubArray{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int a=0;
            while(a<N){
                int size=Int32.Parse(Console.ReadLine());
                string []A=Console.ReadLine().Split(' ');
                int i=0, z=0 , result=size;
                while(true){
                    if(z==size-1){
                        break;
                    }

                    if(Int32.Parse(A[i])>Int32.Parse(A[i+1]))
                        {
                            z++;
                            i=z;
                            continue;
                        }
                        result++;
                        i++;
                    if(i==size-1){
                        z++;
                        i=z;
                    }
                }
                a++;
                Console.WriteLine(result);
            }
        }
        
    }
}

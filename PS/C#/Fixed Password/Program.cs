using System;
namespace FixedPassword
{
    class Program{
        static void Main(string []args){
              int Pass;
              while(true){
                 Pass=Int32.Parse(Console.ReadLine());
                 if(Pass==1999){
                    Console.WriteLine("Correct");
                    break;
                 }else{
                    Console.WriteLine("Wrong");
                 }
              }
        }
    }
}

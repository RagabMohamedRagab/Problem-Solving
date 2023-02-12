//Happy Code 
// Time Complexity O(N)
// Space Complexit O(1)
using System;
using System.Linq;
 
namespace Breaknumber
{
	public static class Program
	{
		public static void Main()
		{
			string s1 = Console.ReadLine();
			int sum = 0, b = 0;
			while (b < s1.Length)
			{
				sum += s1[b] - '0';
				b++;
			}
			Console.WriteLine(sum);
		}
	}
}
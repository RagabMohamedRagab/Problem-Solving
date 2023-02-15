// Happy Code
// Time Complexity O(N^2)
// Space Complexity O(1)
using System;
using System.Text;
namespace Conversion
{
	class Program
	{
		static void Main(string[] args)
		{
			int N = Int32.Parse(Console.ReadLine());
			int b = 1;
			while (b <= N)
			{
				bool flag = false;
				string str = Console.ReadLine();
				for (int a = 0; a < str.Length; a++)
				{
					if ((str[a] == '0' && str[a + 1] == '1' && str[a + 2] == '0') || (str[a] == '1' && str[a + 1] == '0' && str[a+ 2] == '1'))
					{
						flag = true;
						break;
					}
				}

				if (flag)
				{
					Console.WriteLine("Good");
				}
				else
				{
					Console.WriteLine("Bad");
				}

				b++;
			}
		}
	}
}
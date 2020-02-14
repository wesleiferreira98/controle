using System;
using System.Collections.Generic;

class lixo{
	static void Main(){
		LinkedList<string> casa = new LinkedList<string>();
		casa.AddFirst("Telha");
		casa.AddFirst("porta");
		casa.AddFirst("cimento");
		casa.AddFirst("ceramica");
		casa.AddFirst("quarto");
		LinkedListNode<string>no;
		no=casa.FindLast("cimento");
		casa.AddBefore(no,"janela");
		casa.Remove("porta");

		foreach(string c in casa){
			Console.WriteLine("O Elemento é: {0}", c);
		}
	}
}
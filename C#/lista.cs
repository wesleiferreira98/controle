/* LinkedList Lista duplamenta endadeada: Onde cada elemento é um nó da lista para um elemento posterio e anterior para isso temos os metodos
para adicionar, remover e etc. 
o metodo AddFirst(); adiciona os elementos na frente da fila.
EX: transp.AddFirst("Carro");
o metodo AddLast() adiciona no fim da lista 
Ex: transp.AddLast("carro grande"); 

ransp.AddAfter(no,"Patins"); esse metodo adiocna um elemento apos outro elemento especificado que esteja na lista.

transp.AddBefore(no,"apa"); esse metodo adiocna um elemento antes do outro elemento especificado que esteja na lista.
transp.Clear(); esse metodo remove todos os itens da lista
transp.Find("Carro");  serve para buscar um elemento na lista.
trans.Remove(); remove um elemento especifico da lista 
RemoveFirst e ReomveLast removem repectivamente o primeiro elemento e o ultimo  elemento da lista
*/
using System;
using System.Collections.Generic;

class lista{
	static void Main(){
		LinkedList<string> transp = new LinkedList<string>();
		transp.AddFirst("Carro");
		transp.AddFirst("Moto");
		transp.AddFirst("Navio");
		transp.AddFirst("Bike");
		transp.AddLast("carro grande");

		LinkedListNode<string>no;
		no=transp.FindLast("Navio");
		//transp.AddAfter(no,"Patins");
		transp.AddBefore(no,"apa");

		//transp.Clear();
		if(transp.Find("Carro")==null){
			Console.WriteLine("Nao encontrado");
		}else if(transp.Find("Carro")!=null){
			Console.WriteLine("Elemento encontrado");
		}

		foreach(string t in transp){
			Console.WriteLine("transporte: {0}",t);
		}
		Console.WriteLine("Zero");

	}
}
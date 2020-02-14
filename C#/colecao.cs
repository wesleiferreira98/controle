/*coleção queque é uma represetação de uma fila nesse tipo de fila o primeiro elemento a ser adicionado é o primeiro elemento a sair 
new Queue<string>(vs); usamos esse parametro vs para passar os elemento do arrey para a coleção queue.
veiculos.Enqueue("Moto"); adiciona o elemento ao final da fila.
veiculos.Count essa propriedade retorna o tamanho da fila
veiculos.Contains("gol") verifica se o metodo especificado está na lista.*/
using System;
using System.Collections.Generic;
class colecao{
	static void Main(){
		//string[] vs={"carro","Moto","Navio","Aviao"};
		Queue<string>veiculos= new Queue<string>();
		veiculos.Enqueue("Moto");
		veiculos.Enqueue("carro");
		veiculos.Enqueue("Navio");
		veiculos.Enqueue("Aviao");
		if(veiculos.Contains("patins")){
			System.Console.WriteLine("O elemento está na fila. ");
		}else{
			System.Console.WriteLine("O elemento não está na fila. ");
		}
		foreach(string c in veiculos){
			System.Console.WriteLine("Os elementos são: {0}",c);
		}
		System.Console.WriteLine("Tamanho da fila: {0}", veiculos.Count);
		
		while(veiculos.Count>=1){
			System.Console.WriteLine(veiculos.Dequeue());
		}
		System.Console.WriteLine("Tamanho da fila: {0}", veiculos.Count);
	}
}
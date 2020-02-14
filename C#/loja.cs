using System;
static class veiculo{
	 static private int num_rodas;
	 static private string modelo,tipo;
	 static private float preco;
	
	static public void set_dados(){
		System.Console.WriteLine("Digite a quantidade de rodas: ");
		num_rodas=int.Parse(System.Console.ReadLine());
		
		System.Console.WriteLine("Digite o tipo de veicúlo: ");
		tipo=System.Console.ReadLine();

		System.Console.WriteLine("Digite o modelo de veicúlo: ");
		modelo=System.Console.ReadLine();

		System.Console.WriteLine("Digite o peço do veicúlo: ");
		preco=float.Parse(System.Console.ReadLine());




	}
	static public void print_dados(){
		System.Console.WriteLine("A quantidade de rodas.. {0} ",num_rodas);
		System.Console.WriteLine("O tipo de veicúlo...... {0} ",tipo);
		System.Console.WriteLine("O modelo de veicúlo.... {0} ",modelo);
		System.Console.WriteLine("O peço do veicúlo...... {0} ",preco);



	}
	static public void ini(string m,int num,float p, string t){
		modelo=m=" Não informado";
		tipo=t=" Não informado";
		num_rodas=num=0;
		preco=p=0;


	}
}
class peca{
	private int qtd;
	private string nome;
	 static public float preco;
	public void set_dados1(){
		qtd=int.Parse(System.Console.ReadLine());
		nome=System.Console.ReadLine();
		preco=float.Parse(System.Console.ReadLine());



	}
	public void print_dados1(){
		System.Console.WriteLine(qtd);
		System.Console.WriteLine(nome);
		System.Console.WriteLine(preco);
	}
	public peca(){
		qtd=0;
		preco=0;
		nome= " ";
	}
}
class loja{
	static void Main(){
		 veiculo.set_dados();
		 veiculo.print_dados();
		 peca x= new peca();
		// x.set_dados1();
		 peca.preco=11112;
		 x.print_dados1();
	}
}
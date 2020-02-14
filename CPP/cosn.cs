using System;
class veiculo{
	private string tipo;
	private int qtd_rodas;
	private string modelo;
	private float preco;
	public veiculo(){
		tipo= "Não informado.";
		qtd_rodas=0;
		modelo= "Não informado.";
		preco=0;
	}
	


	public void set_dados(){
		System.Console.WriteLine("Digite o tipo de veiculo");
		tipo=System.Console.ReadLine();

		System.Console.WriteLine("digite a quantidade de rodas de {0}", tipo);
		qtd_rodas=int.Parse(System.Console.ReadLine());

		System.Console.WriteLine("digite o modelo  de {0}", tipo);
		modelo=System.Console.ReadLine();

		System.Console.WriteLine("digite o preço  de {0}", tipo);
		preco=int.Parse(System.Console.ReadLine());
	}
	public void print_dados(){
		System.Console.WriteLine("O tipo de veiculo {0}", tipo);
		System.Console.WriteLine("A quantidade de rodas de {0}", qtd_rodas);
		System.Console.WriteLine("O modelo  de {0}", modelo);
		System.Console.WriteLine("O preço  de {0}", preco);



	}
	public float soma(){
		 return preco+200;
	}
	~veiculo(){

	}
}
class carro:veiculo{
	public float soma2(){
		float s;
		s=veiculo::soma();
		return s*2;

	}

}

class cosn{
	static void Main(){
		carro x= new carro();
		x.set_dados();
		x.print_dados();
		System.Console.WriteLine("O preço do carro é {0}",x.soma2());
	}
}
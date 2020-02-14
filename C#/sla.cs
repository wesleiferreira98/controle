class fucionario{
	private static string nome;
	private static int idade;
	private static float qtd_dias;
	private static float sala;
	private static string end;
	private static string num_cateira;

	public static void set_dados(){
		System.Console.WriteLine("Digite o nome do funcionaro: ");
		nome=System.Console.ReadLine();
		System.Console.WriteLine("Digite a idade de {0}",nome);
		idade=int.Parse(System.Console.ReadLine());
		System.Console.WriteLine("Digite o endereço de {0}",nome);
		end=System.Console.ReadLine();
		System.Console.WriteLine("Informe o número da carteira de {0}",nome);
		num_cateira=System.Console.ReadLine();
		System.Console.WriteLine("Informe a quantidade de dias trabalhados de {0}",nome);
		qtd_dias=float.Parse(System.Console.ReadLine());
		System.Console.WriteLine("Informe o salario base  de {0}",nome);
		sala=float.Parse(System.Console.ReadLine());



	}
	public static void print_dados(){
		System.Console.WriteLine("O nome do funcionaro {0}",nome);
		System.Console.WriteLine("A idade de {0} é {1} ",nome,idade);
		System.Console.WriteLine("O endereço de {0} é {1} ",nome,end);
		System.Console.WriteLine("O número da carteira de {0} é {1}",nome,num_cateira);
		System.Console.WriteLine("A quantidade de dias trabalhados de {0} é {1}",nome,qtd_dias);
		System.Console.WriteLine("O salario base  de {0} é {1}",nome,sala);
	}
	public static float salario(){
		return sala*qtd_dias+3;
	}

}
class sla{
	static void Main(){
		fucionario.set_dados();
		fucionario.print_dados();
		System.Console.WriteLine("O salario do funcionaro é {0}",fucionario.salario());
	}
}

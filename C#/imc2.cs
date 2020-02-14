using System;
using static System.Math;
public class imc{
	private string nome;
	private double altura;
	private double peso, imc1;
	private char d='e';
	public imc(){
		nome=" Não informado.";
		altura=0;
		peso=0;
		imc1=0;
	}
	public void set_dados(){
		System.Console.WriteLine("Digite o nome: ");
		nome=System.Console.ReadLine();

		System.Console.WriteLine("Digite a altura de {0}",nome);
		altura=double.Parse(System.Console.ReadLine());

		System.Console.WriteLine("Digite o peso de {0}",nome);
		peso=double.Parse(System.Console.ReadLine());
		calculo();
		
	}
	public double calculo(){
		imc1=peso/(Math.Pow(2,altura));
		return imc1;

	}
	 
	public void print_dados(){
		do{
			if(d=='S' || d=='s'){
				set_dados();

			}
			if(calculo()<16){
				System.Console.WriteLine("Cuidado {0} seu grau de magreza é III consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());
			}
			if(calculo()>16 && calculo()<16.9 ){
				System.Console.WriteLine("Cuidado {0} seu grau de magreza é II consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()>17 && calculo()<18.4 ){
				System.Console.WriteLine("Cuidado {0} seu grau de magreza é I consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()>18.4 && calculo()<24.9 ){
				System.Console.WriteLine("Parabéns {0} você está no peso ideal ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()>24.9 && calculo()<29.9 ){
				System.Console.WriteLine("Cuidado {0} você está pré-obeso um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()>29.9 && calculo()<34.9 ){
				System.Console.WriteLine("Cuidado {0} seu grau de obesidade é I consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()>34.9 && calculo()<39.9 ){
				System.Console.WriteLine("Cuidado {0} seu grau de obesidade é II consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			if(calculo()==40 || calculo()<40 ){
				System.Console.WriteLine("Cuidado {0} seu grau de obesidade é III consulte um médico com urgência ",nome);
				System.Console.WriteLine("{0} seu IMC é: {1} ",nome,calculo());

			}
			System.Console.WriteLine("Deseja digitar outros IMCs[S/s]");
			d=char.Parse(System.Console.ReadLine());
			

		}while(d=='S'|| d=='s');

	}
	~imc(){

	}

}
class imc2{
	static void Main(){
		imc x= new imc();
		//x.set_dados();
		x.print_dados();

	}
}
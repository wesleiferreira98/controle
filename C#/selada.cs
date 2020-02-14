/*Classes seladas, quando uma classe é definida como seleda ela NÃO PODE SER HERDADA*/
using System;
sealed class veiculo{

}
class carro:veiculo{

}






 class selada{
	static void Main(){
		carro x=new carro();

	}
}
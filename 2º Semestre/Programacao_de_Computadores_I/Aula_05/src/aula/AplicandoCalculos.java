package aula;

public class AplicandoCalculos {
	public static void main(String[] args){
		Calculos calc = new Calculos();
		
		System.out.println("A resposta da soma �: " + calc.somar(10,  5));
		System.out.println("A resposta da subtra��o �: " + calc.subtrair(10,  2));
		System.out.println("A resposta da multiplica��o �: " + calc.multiplicar(2,  2));
		System.out.println("A resposta da divis�o �: " + calc.dividir(7,  2));
	}
}

#pragma once
class ValorTabla
{
private:
	char letraProcedencia;
	int valorT;
	int valorT2;
	int valorD ;
	bool fin;
	bool infinito ;
public:
	ValorTabla() {
		valorT = 0;
		valorT2 = 0;
		valorD = 0;
		fin = false;
		infinito = true;
		letraProcedencia = ' ';
	};
	~ValorTabla() {};

	char getLetraProcedencia() { return letraProcedencia; };
	int getValorD() { return valorD; };
	int getValorT() { return valorT; };
	int getValorT2() { return valorT2; };
	void setValorD(int v) { valorD = v; };
	void setValorT(int v) { valorT = v; };
	void setValorT2(int v) { valorT2 = v; };
	void setLetraProcedencia(char v) { letraProcedencia = v; };

	void setCompletado() { fin = true; };
	bool getCompletado() { return fin; };

	void setInfinito() { infinito = false; };
	bool getInfinito() { return infinito; };
};


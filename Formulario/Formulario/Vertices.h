#pragma once
#include"Vertice.h"
#include"ValorTablaFila.h"
class Vertices
{
private:
	int ab; int ac; int ad; int ae; int af; int ag; int ah; int ai; int aj; int ak; int al; int am; int an; int ao;
			int bc; int bd; int be; int bf; int bg; int bh; int bi; int bj; int bk; int bl; int bm; int bn; int bo;
					int cd; int ce; int cf; int cg; int ch; int ci; int cj; int ck; int cl; int cm; int cn; int co;
							int de; int df; int dg; int dh; int di; int dj; int dk; int dl; int dm; int dn; int doo;
									int ef; int eg; int eh; int ei; int ej; int ek; int el; int em; int en; int eo;
											int fg; int fh; int fi; int fj; int fk; int fl; int fm; int fn; int fo;
													int gh; int gi; int gj; int gk; int gl; int gm; int gn; int go;
															int hi; int hj; int hk; int hl; int hm; int hn; int ho;
																	int ij; int ik; int il; int im; int in; int io;
																			int jk; int jl; int jm; int jn; int jo;
																					int kl; int km; int kn; int ko;
																							int lm; int ln; int lo;
																									int mn; int mo;
																											int no;
	

	
	vector<Vertice*> A ;
	vector<Vertice*> B ;
	vector<Vertice*> C ;
	vector<Vertice*> D ;
	vector<Vertice*> E ;
	vector<Vertice*> F ;
	vector<Vertice*> G ;
	vector<Vertice*> H ;
	vector<Vertice*> I ;
	vector<Vertice*> J ;
	vector<Vertice*> K ;
	vector<Vertice*> L ;
	vector<Vertice*> M ;
	vector<Vertice*> N ;
	vector<Vertice*> O ;

	int rspta;
	
public:
	
	//van TODOS LOS DATOS DE LA MATRIZ (11 CONSTRUCTORES)
	//5
	Vertices(int ab, int ac, int ad, int ae,
					 int bc, int bd, int be,
							 int cd, int ce,
									 int de,int nele,char Vinicial,char Vfinal) : ab(ab),ac(ac),ad(ad),ae(ae),
													  bc(bc),bd(bd),be(be),
															 cd(cd),ce(ce),
																	de(de) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae)};
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de) };
		
		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		}
		//ITERACIONES
		int iterador=0;
		while (iterador<nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado()==false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < A.size(); i++)//para cada uno de los valores que llegan al vertice
				{	
					
					switch (A[i]->getLetra()){
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;				
					case 'D':infinit = d->getInfinito(); break;					
					case 'E':infinit = e->getInfinito(); break;	
					}
					if (A[i]->getPeso() != 0 && infinit==false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[i]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':	
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C': 
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D': 
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E': 
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						}
						aux = A[i]->getPeso()+aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[i]->getLetra()); contAux++; }
						
					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < B.size(); i++)//para cada uno de los valores que llegan al vertice
				{
					
					switch (B[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					}
					if (B[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						}
						aux = B[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[i]->getLetra()); contAux++; }
						
					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < C.size(); i++)//para cada uno de los valores que llegan al vertice
				{
					
					switch (C[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					}
					if (C[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						}
						aux = C[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[i]->getLetra()); contAux++; }
						
					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < D.size(); i++)//para cada uno de los valores que llegan al vertice
				{
					
					switch (D[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					}
					if (D[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						}
						aux = D[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[i]->getLetra()); contAux++; }
					
					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < E.size(); i++)//para cada uno de los valores que llegan al vertice
				{
					
					switch (E[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					}

					if (E[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						}
						aux = E[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[i]->getLetra()); contAux++; }
						
					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if(a->getValorT()<=b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getLetraProcedencia()!= ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if(b->getValorT()<=a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getLetraProcedencia() != ' '){
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if(c->getValorT()<=b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getLetraProcedencia() != ' '){
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if(d->getValorT()<=b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getLetraProcedencia() != ' '){
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if(e->getValorT()<=b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getLetraProcedencia() != ' '){
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
				
			
			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		}
	};
	//6
	Vertices(int ab, int ac, int ad, int ae, int af,
					 int bc, int bd, int be, int bf,
							 int cd, int ce, int cf,
									 int de, int df,
											 int ef, int nele,char Vinicial,char Vfinal) : ab(ab), ac(ac), ad(ad), ae(ae),af(af),
															   bc(bc), bd(bd), be(be),bf(bf),
																	   cd(cd), ce(ce),cf(cf),
																			   de(de),df(df),
																					  ef(ef){
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < A.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}
					if (A[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[i]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = A[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[i]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < B.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}
					if (B[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = B[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[i]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < C.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}
					if (C[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = C[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[i]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < D.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}
					if (D[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = D[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[i]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < E.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}

					if (E[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = E[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[i]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < F.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					}

					if (F[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						}
						aux = F[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[i]->getLetra()); contAux++; }

					}
				}

			}


			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() &&  c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();

			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		}
	};
	//7
	Vertices(int ab, int ac, int ad, int ae, int af, int ag,
					 int bc, int bd, int be, int bf, int bg,
							 int cd, int ce, int cf, int cg,
									 int de, int df, int dg,
											 int ef, int eg,
													 int fg, int nele, char Vinicial, char Vfinal) : ab(ab), ac(ac), ad(ad), ae(ae), af(af),ag(ag),
																	   bc(bc), bd(bd), be(be), bf(bf),bg(bg),
																			   cd(cd), ce(ce), cf(cf),cg(cg),
																					   de(de), df(df),dg(dg),
																							   ef(ef),eg(eg),
																									  fg(fg){
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < A.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}
					if (A[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[i]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = A[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[i]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < B.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}
					if (B[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = B[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[i]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < C.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}
					if (C[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = C[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[i]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < D.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}
					if (D[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = D[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[i]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < E.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}

					if (E[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = E[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[i]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < F.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}

					if (F[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = F[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); f->setLetraProcedencia(F[i]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < G.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					}

					if (G[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						}
						aux = G[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[i]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();

			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();

			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		}
	};
	//8
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah,
					 int bc, int bd, int be, int bf, int bg, int bh,
							 int cd, int ce, int cf, int cg, int ch,
									 int de, int df, int dg, int dh,
											 int ef, int eg, int eh,
													 int fg, int fh,
															 int gh, int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae), af(af),ag(ag),ah(ah),
																			  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),
																					  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),
																							  de(de), df(df),dg(dg),dh(dh),
																									  ef(ef),eg(eg),eh(eh),
																											 fg(fg),fh(fh),
																													gh(gh) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < A.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}
					if (A[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[i]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = A[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[i]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < B.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}
					if (B[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = B[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[i]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < C.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[i]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}
					if (C[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = C[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[i]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < D.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}
					if (D[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = D[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[i]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < E.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}

					if (E[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = E[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[i]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < F.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}

					if (F[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = F[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[i]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < G.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}

					if (G[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = G[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[i]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t i = 0; i < H.size(); i++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[i]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					}

					if (H[i]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[i]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						}
						aux = H[i]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[i]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();

			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();

			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();

			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		}
	};
	//9
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi,
							 int cd, int ce, int cf, int cg, int ch, int ci,
									 int de, int df, int dg, int dh, int di,
											 int ef, int eg, int eh, int ei,
													 int fg, int fh, int fi,
															 int gh, int gi,
																	 int hi, int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae), af(af),ag(ag),ah(ah),ai(ai),
																					  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),
																							  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),
																									  de(de), df(df),dg(dg),dh(dh),di(di),
																											  ef(ef),eg(eg),eh(eh),ei(ei),
																													 fg(fg),fh(fh),fi(fi),
																															gh(gh),gi(gi),
																																   hi(hi) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					
					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						
						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();

			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();

			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();

			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();

			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		}
	};
	//10
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj,
									 int de, int df, int dg, int dh, int di, int dj,
											 int ef, int eg, int eh, int ei, int ej,
													 int fg, int fh, int fi, int fj,
															 int gh, int gi, int gj,
																	 int hi, int hj,
																			 int ij, int nele, char Vinicial, char Vfinal) : ab(ab), ac(ac), ad(ad), ae(ae),af(af),ag(ag),ah(ah),ai(ai),aj(aj),
																							  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),
																									  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),
																											  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),
																													  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),
																															 fg(fg),fh(fh),fi(fi),fj(fj),
																																	gh(gh),gi(gi),gj(gj),
																																		   hi(hi),hj(hj),
																																				  ij(ij) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();

			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();

			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();

			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();

			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();

			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();

			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();

			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();

			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		}
	};
	//11
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj, int ak,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj, int bk,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj, int ck,
									 int de, int df, int dg, int dh, int di, int dj, int dk,
											 int ef, int eg, int eh, int ei, int ej, int ek,
													 int fg, int fh, int fi, int fj, int fk,
															 int gh, int gi, int gj, int gk,
																	 int hi, int hj, int hk,
																			 int ij, int ik,
																					 int jk, int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae),af(af),ag(ag),ah(ah),ai(ai), aj(aj),ak(ak),
																									  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),bk(bk),
																											  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),ck(ck),
																													  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),dk(dk),
																															  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),ek(ek),
																																	 fg(fg),fh(fh),fi(fi),fj(fj),fk(fk),
																																			gh(gh),gi(gi),gj(gj),gk(gk),
																																				   hi(hi),hj(hj),hk(hk),
																																						  ij(ij),ik(ik),
																																								 jk(jk) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj), new Vertice('K',ak) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj), new Vertice('K',bk) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj), new Vertice('K',ck) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj), new Vertice('K',dk) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej), new Vertice('K',ek) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj), new Vertice('K',fk) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj), new Vertice('K',gk) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj), new Vertice('K',hk) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij), new Vertice('K',ik) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij), new Vertice('K',jk) };
		K = { new Vertice('A',ak),new Vertice('B',bk),new Vertice('C',ck),new Vertice('D',dk), new Vertice('E',ek), new Vertice('F',fk), new Vertice('G',gk), new Vertice('H',hk), new Vertice('I',ik), new Vertice('J',jk) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();
		ValorTabla* k = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		case 'K': k->setCompletado(); k->setLetraProcedencia('K');  k->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (k->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (K[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					}

					if (K[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (K[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						}
						aux = K[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; k->setValorT(menor); k->setLetraProcedencia(K[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();
			if (k->getLetraProcedencia() != ' ')
				k->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getValorT() <= k->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getValorT() <= k->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getValorT() <= k->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();
			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getValorT() <= k->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();
			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getValorT() <= k->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();
			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getValorT() <= k->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();
			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getValorT() <= k->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();
			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getValorT() <= k->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();
			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getValorT() <= k->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();
			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getValorT() <= k->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();
			}
			if (k->getValorT() <= b->getValorT() && k->getValorT() <= c->getValorT() && k->getValorT() <= d->getValorT() && k->getValorT() <= a->getValorT() && k->getValorT() <= e->getValorT() && k->getValorT() <= f->getValorT() && k->getValorT() <= g->getValorT() && k->getValorT() <= h->getValorT() && k->getValorT() <= i->getValorT() && k->getValorT() <= j->getValorT() && k->getLetraProcedencia() != ' ') {
				k->setValorD(k->getValorT());
				k->setCompletado();
			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());
			k->setValorT2(k->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		case 'K':rspta = k->getValorT(); break;
		}
	};
	//12
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj, int ak, int al,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj, int bk, int bl,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj, int ck, int cl,
									 int de, int df, int dg, int dh, int di, int dj, int dk, int dl,
											 int ef, int eg, int eh, int ei, int ej, int ek, int el,
													 int fg, int fh, int fi, int fj, int fk, int fl,
															 int gh, int gi, int gj, int gk, int gl,
																	 int hi, int hj, int hk, int hl,
																			 int ij, int ik, int il,
																					 int jk, int jl,
																							 int kl, int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae),af(af),ag(ag),ah(ah),ai(ai), aj(aj),ak(ak),al(al),
																											  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),bk(bk),bl(bl),
																													  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),ck(ck),cl(cl),
																															  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),dk(dk),dl(dl),
																																	  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),ek(ek),el(el),
																																			 fg(fg),fh(fh),fi(fi),fj(fj),fk(fk),fl(fl),
																																					gh(gh),gi(gi),gj(gj),gk(gk),gl(gl),
																																						   hi(hi),hj(hj),hk(hk),hl(hl),
																																								  ij(ij),ik(ik),il(il),
																																										 jk(jk),jl(jl),
																																												kl(kl) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj), new Vertice('K',ak), new Vertice('L',al) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj), new Vertice('K',bk), new Vertice('L',bl) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj), new Vertice('K',ck), new Vertice('L',cl) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj), new Vertice('K',dk), new Vertice('L',dl) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej), new Vertice('K',ek), new Vertice('L',el) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj), new Vertice('K',fk), new Vertice('L',fl) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj), new Vertice('K',gk), new Vertice('L',gl) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj), new Vertice('K',hk), new Vertice('L',hl) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij), new Vertice('K',ik), new Vertice('L',il) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij), new Vertice('K',jk), new Vertice('L',jl) };
		K = { new Vertice('A',ak),new Vertice('B',bk),new Vertice('C',ck),new Vertice('D',dk), new Vertice('E',ek), new Vertice('F',fk), new Vertice('G',gk), new Vertice('H',hk), new Vertice('I',ik), new Vertice('J',jk), new Vertice('L',kl) };
		L = { new Vertice('A',al),new Vertice('B',bl),new Vertice('C',cl),new Vertice('D',dl), new Vertice('E',el), new Vertice('F',fl), new Vertice('G',gl), new Vertice('H',hl), new Vertice('I',il), new Vertice('J',jl), new Vertice('K',kl) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();
		ValorTabla* k = new ValorTabla();
		ValorTabla* l = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		case 'K': k->setCompletado(); k->setLetraProcedencia('K');  k->setValorD(0); break;
		case 'L': l->setCompletado(); l->setLetraProcedencia('L');  l->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (k->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (K[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'L':infinit = j->getInfinito(); break;
					}

					if (K[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (K[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = K[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; k->setValorT(menor); k->setLetraProcedencia(K[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (l->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (L[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					}

					if (L[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (L[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						}
						aux = L[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; l->setValorT(menor); l->setLetraProcedencia(L[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();
			if (k->getLetraProcedencia() != ' ')
				k->setInfinito();
			if (l->getLetraProcedencia() != ' ')
				l->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getValorT() <= k->getValorT() && a->getValorT() <= l->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getValorT() <= k->getValorT() && b->getValorT() <= l->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getValorT() <= k->getValorT() && c->getValorT() <= l->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();
			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getValorT() <= k->getValorT() && d->getValorT() <= l->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();
			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getValorT() <= k->getValorT() && e->getValorT() <= l->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();
			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getValorT() <= k->getValorT() && f->getValorT() <= l->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();
			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getValorT() <= k->getValorT() && g->getValorT() <= l->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();
			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getValorT() <= k->getValorT() && h->getValorT() <= l->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();
			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getValorT() <= k->getValorT() && i->getValorT() <= l->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();
			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getValorT() <= k->getValorT() && j->getValorT() <= l->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();
			}
			if (k->getValorT() <= b->getValorT() && k->getValorT() <= c->getValorT() && k->getValorT() <= d->getValorT() && k->getValorT() <= a->getValorT() && k->getValorT() <= e->getValorT() && k->getValorT() <= f->getValorT() && k->getValorT() <= g->getValorT() && k->getValorT() <= h->getValorT() && k->getValorT() <= i->getValorT() && k->getValorT() <= j->getValorT() && k->getValorT() <= l->getValorT() && k->getLetraProcedencia() != ' ') {
				k->setValorD(k->getValorT());
				k->setCompletado();
			}
			if (l->getValorT() <= b->getValorT() && l->getValorT() <= c->getValorT() && l->getValorT() <= d->getValorT() && l->getValorT() <= a->getValorT() && l->getValorT() <= e->getValorT() && l->getValorT() <= f->getValorT() && l->getValorT() <= g->getValorT() && l->getValorT() <= h->getValorT() && l->getValorT() <= i->getValorT() && l->getValorT() <= j->getValorT() && l->getValorT() <= k->getValorT() && l->getLetraProcedencia() != ' ') {
				l->setValorD(l->getValorT());
				l->setCompletado();
			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());
			k->setValorT2(k->getValorT());
			l->setValorT2(l->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		case 'K':rspta = k->getValorT(); break;
		case 'L':rspta = l->getValorT(); break;
		}
	};
	//13
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj, int ak, int al, int am,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj, int bk, int bl, int bm,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj, int ck, int cl, int cm,
									 int de, int df, int dg, int dh, int di, int dj, int dk, int dl, int dm,
											 int ef, int eg, int eh, int ei, int ej, int ek, int el, int em,
													 int fg, int fh, int fi, int fj, int fk, int fl, int fm,
															 int gh, int gi, int gj, int gk, int gl, int gm,
																	 int hi, int hj, int hk, int hl, int hm,
																			 int ij, int ik, int il, int im,
																					 int jk, int jl, int jm,
																							 int kl, int km,
																									 int lm, int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae),af(af),ag(ag),ah(ah),ai(ai), aj(aj),ak(ak),al(al),am(am),
																													  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),bk(bk),bl(bl),bm(bm),
																															  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),ck(ck),cl(cl),cm(cm),
																																	  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),dk(dk),dl(dl),dm(dm),
																																			  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),ek(ek),el(el),em(em),
																																					 fg(fg),fh(fh),fi(fi),fj(fj),fk(fk),fl(fl),fm(fm),
																																							gh(gh),gi(gi),gj(gj),gk(gk),gl(gl),gm(gm),
																																								   hi(hi),hj(hj),hk(hk),hl(hl),hm(hm),
																																										  ij(ij),ik(ik),il(il),im(im),
																																												 jk(jk),jl(jl),jm(jm),
																																														kl(kl),km(km),
																																															   lm(lm) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj), new Vertice('K',ak), new Vertice('L',al), new Vertice('M',am) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj), new Vertice('K',bk), new Vertice('L',bl), new Vertice('M',bm) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj), new Vertice('K',ck), new Vertice('L',cl), new Vertice('M',cm) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj), new Vertice('K',dk), new Vertice('L',dl), new Vertice('M',dm) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej), new Vertice('K',ek), new Vertice('L',el), new Vertice('M',em) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj), new Vertice('K',fk), new Vertice('L',fl), new Vertice('M',fm) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj), new Vertice('K',gk), new Vertice('L',gl), new Vertice('M',gm) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj), new Vertice('K',hk), new Vertice('L',hl), new Vertice('M',hm) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij), new Vertice('K',ik), new Vertice('L',il), new Vertice('M',im) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij), new Vertice('K',jk), new Vertice('L',jl), new Vertice('M',jm) };
		K = { new Vertice('A',ak),new Vertice('B',bk),new Vertice('C',ck),new Vertice('D',dk), new Vertice('E',ek), new Vertice('F',fk), new Vertice('G',gk), new Vertice('H',hk), new Vertice('I',ik), new Vertice('J',jk), new Vertice('L',kl), new Vertice('M',km) };
		L = { new Vertice('A',al),new Vertice('B',bl),new Vertice('C',cl),new Vertice('D',dl), new Vertice('E',el), new Vertice('F',fl), new Vertice('G',gl), new Vertice('H',hl), new Vertice('I',il), new Vertice('J',jl), new Vertice('K',kl), new Vertice('M',lm) };
		M = { new Vertice('A',am),new Vertice('B',bm),new Vertice('C',cm),new Vertice('D',dm), new Vertice('E',em), new Vertice('F',fm), new Vertice('G',gm), new Vertice('H',hm), new Vertice('I',im), new Vertice('J',jm), new Vertice('K',km), new Vertice('L',lm) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();
		ValorTabla* k = new ValorTabla();
		ValorTabla* l = new ValorTabla();
		ValorTabla* m = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		case 'K': k->setCompletado(); k->setLetraProcedencia('K');  k->setValorD(0); break;
		case 'L': l->setCompletado(); l->setLetraProcedencia('L');  l->setValorD(0); break;
		case 'M': m->setCompletado(); m->setLetraProcedencia('M');  m->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (k->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (K[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'L':infinit = j->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (K[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (K[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = K[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; k->setValorT(menor); k->setLetraProcedencia(K[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (l->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (L[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (L[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (L[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = L[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; l->setValorT(menor); l->setLetraProcedencia(L[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (m->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < M.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (M[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					}

					if (M[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (M[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						}
						aux = M[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; m->setValorT(menor); m->setLetraProcedencia(M[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();
			if (k->getLetraProcedencia() != ' ')
				k->setInfinito();
			if (l->getLetraProcedencia() != ' ')
				l->setInfinito();
			if (m->getLetraProcedencia() != ' ')
				m->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getValorT() <= k->getValorT() && a->getValorT() <= l->getValorT() && a->getValorT() <= m->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getValorT() <= k->getValorT() && b->getValorT() <= l->getValorT() && b->getValorT() <= m->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getValorT() <= k->getValorT() && c->getValorT() <= l->getValorT() && c->getValorT() <= m->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();
			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getValorT() <= k->getValorT() && d->getValorT() <= l->getValorT() && d->getValorT() <= m->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();
			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getValorT() <= k->getValorT() && e->getValorT() <= l->getValorT() && e->getValorT() <= m->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();
			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getValorT() <= k->getValorT() && f->getValorT() <= l->getValorT() && f->getValorT() <= m->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();
			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getValorT() <= k->getValorT() && g->getValorT() <= l->getValorT() && g->getValorT() <= m->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();
			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getValorT() <= k->getValorT() && h->getValorT() <= l->getValorT() && h->getValorT() <= m->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();
			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getValorT() <= k->getValorT() && i->getValorT() <= l->getValorT() && i->getValorT() <= m->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();
			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getValorT() <= k->getValorT() && j->getValorT() <= l->getValorT() && j->getValorT() <= m->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();
			}
			if (k->getValorT() <= b->getValorT() && k->getValorT() <= c->getValorT() && k->getValorT() <= d->getValorT() && k->getValorT() <= a->getValorT() && k->getValorT() <= e->getValorT() && k->getValorT() <= f->getValorT() && k->getValorT() <= g->getValorT() && k->getValorT() <= h->getValorT() && k->getValorT() <= i->getValorT() && k->getValorT() <= j->getValorT() && k->getValorT() <= l->getValorT() && k->getValorT() <= m->getValorT() && k->getLetraProcedencia() != ' ') {
				k->setValorD(k->getValorT());
				k->setCompletado();
			}
			if (l->getValorT() <= b->getValorT() && l->getValorT() <= c->getValorT() && l->getValorT() <= d->getValorT() && l->getValorT() <= a->getValorT() && l->getValorT() <= e->getValorT() && l->getValorT() <= f->getValorT() && l->getValorT() <= g->getValorT() && l->getValorT() <= h->getValorT() && l->getValorT() <= i->getValorT() && l->getValorT() <= j->getValorT() && l->getValorT() <= k->getValorT() && l->getValorT() <= m->getValorT() && l->getLetraProcedencia() != ' ') {
				l->setValorD(l->getValorT());
				l->setCompletado();
			}
			if (m->getValorT() <= b->getValorT() && m->getValorT() <= c->getValorT() && m->getValorT() <= d->getValorT() && m->getValorT() <= a->getValorT() && m->getValorT() <= e->getValorT() && m->getValorT() <= f->getValorT() && m->getValorT() <= g->getValorT() && m->getValorT() <= h->getValorT() && m->getValorT() <= i->getValorT() && m->getValorT() <= j->getValorT() && m->getValorT() <= k->getValorT() && m->getValorT() <= l->getValorT() && m->getLetraProcedencia() != ' ') {
				m->setValorD(m->getValorT());
				m->setCompletado();
			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());
			k->setValorT2(k->getValorT());
			l->setValorT2(l->getValorT());
			m->setValorT2(m->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		case 'K':rspta = k->getValorT(); break;
		case 'L':rspta = l->getValorT(); break;
		case 'M':rspta = m->getValorT(); break;
		}
	};
	//14
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj, int ak, int al, int am, int an,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj, int bk, int bl, int bm, int bn,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj, int ck, int cl, int cm, int cn,
									 int de, int df, int dg, int dh, int di, int dj, int dk, int dl, int dm, int dn,
											 int ef, int eg, int eh, int ei, int ej, int ek, int el, int em, int en,
													 int fg, int fh, int fi, int fj, int fk, int fl, int fm, int fn,
															 int gh, int gi, int gj, int gk, int gl, int gm, int gn,
																	 int hi, int hj, int hk, int hl, int hm, int hn,
																			 int ij, int ik, int il, int im, int in,
																					 int jk, int jl, int jm, int jn,
																							 int kl, int km, int kn,
																									 int lm, int ln,
																											 int mn, int nele, char Vinicial, char Vfinal) : ab(ab), ac(ac), ad(ad), ae(ae),af(af),ag(ag),ah(ah),ai(ai),aj(aj),ak(ak),al(al),am(am),an(an),
																															  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),bk(bk),bl(bl),bm(bm),bn(bn),
																																	  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),ck(ck),cl(cl),cm(cm),cn(cn),
																																			  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),dk(dk),dl(dl),dm(dm),dn(dn),
																																					  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),ek(ek),el(el),em(em),en(en),
																																							 fg(fg),fh(fh),fi(fi),fj(fj),fk(fk),fl(fl),fm(fm),fn(fn),
																																									gh(gh),gi(gi),gj(gj),gk(gk),gl(gl),gm(gm),gn(gn),
																																										   hi(hi),hj(hj),hk(hk),hl(hl),hm(hm),hn(hn),
																																												  ij(ij),ik(ik),il(il),im(im),in(in),
																																														 jk(jk),jl(jl),jm(jm),jn(jn),
																																																kl(kl),km(km),kn(kn),
																																																	   lm(lm),ln(ln),
																																																			  mn(mn) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj), new Vertice('K',ak), new Vertice('L',al), new Vertice('M',am), new Vertice('N',an) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj), new Vertice('K',bk), new Vertice('L',bl), new Vertice('M',bm), new Vertice('N',bn) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj), new Vertice('K',ck), new Vertice('L',cl), new Vertice('M',cm), new Vertice('N',cn) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj), new Vertice('K',dk), new Vertice('L',dl), new Vertice('M',dm), new Vertice('N',dn) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej), new Vertice('K',ek), new Vertice('L',el), new Vertice('M',em), new Vertice('N',en) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj), new Vertice('K',fk), new Vertice('L',fl), new Vertice('M',fm), new Vertice('N',fn) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj), new Vertice('K',gk), new Vertice('L',gl), new Vertice('M',gm), new Vertice('N',gn) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj), new Vertice('K',hk), new Vertice('L',hl), new Vertice('M',hm), new Vertice('N',hn) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij), new Vertice('K',ik), new Vertice('L',il), new Vertice('M',im), new Vertice('N',in) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij), new Vertice('K',jk), new Vertice('L',jl), new Vertice('M',jm), new Vertice('N',jn) };
		K = { new Vertice('A',ak),new Vertice('B',bk),new Vertice('C',ck),new Vertice('D',dk), new Vertice('E',ek), new Vertice('F',fk), new Vertice('G',gk), new Vertice('H',hk), new Vertice('I',ik), new Vertice('J',jk), new Vertice('L',kl), new Vertice('M',km), new Vertice('N',kn) };
		L = { new Vertice('A',al),new Vertice('B',bl),new Vertice('C',cl),new Vertice('D',dl), new Vertice('E',el), new Vertice('F',fl), new Vertice('G',gl), new Vertice('H',hl), new Vertice('I',il), new Vertice('J',jl), new Vertice('K',kl), new Vertice('M',lm), new Vertice('N',ln) };
		M = { new Vertice('A',am),new Vertice('B',bm),new Vertice('C',cm),new Vertice('D',dm), new Vertice('E',em), new Vertice('F',fm), new Vertice('G',gm), new Vertice('H',hm), new Vertice('I',im), new Vertice('J',jm), new Vertice('K',km), new Vertice('L',lm), new Vertice('N',mn) };
		N = { new Vertice('A',an),new Vertice('B',bn),new Vertice('C',cn),new Vertice('D',dn), new Vertice('E',en), new Vertice('F',fn), new Vertice('G',gn), new Vertice('H',hn), new Vertice('I',in), new Vertice('J',jn), new Vertice('K',kn), new Vertice('L',ln), new Vertice('M',mn) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();
		ValorTabla* k = new ValorTabla();
		ValorTabla* l = new ValorTabla();
		ValorTabla* m = new ValorTabla();
		ValorTabla* n = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		case 'K': k->setCompletado(); k->setLetraProcedencia('K');  k->setValorD(0); break;
		case 'L': l->setCompletado(); l->setLetraProcedencia('L');  l->setValorD(0); break;
		case 'M': m->setCompletado(); m->setLetraProcedencia('M');  m->setValorD(0); break;
		case 'N': n->setCompletado(); n->setLetraProcedencia('N');  n->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (k->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (K[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'L':infinit = j->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (K[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (K[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = K[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; k->setValorT(menor); k->setLetraProcedencia(K[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (l->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (L[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (L[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (L[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = L[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; l->setValorT(menor); l->setLetraProcedencia(L[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (m->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < M.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (M[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					}

					if (M[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (M[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = M[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; m->setValorT(menor); m->setLetraProcedencia(M[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (n->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < N.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (N[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					}

					if (N[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (N[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						}
						aux = N[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; n->setValorT(menor); n->setLetraProcedencia(N[ii]->getLetra()); contAux++; }

					}
				}

			}

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();
			if (k->getLetraProcedencia() != ' ')
				k->setInfinito();
			if (l->getLetraProcedencia() != ' ')
				l->setInfinito();
			if (m->getLetraProcedencia() != ' ')
				m->setInfinito();
			if (n->getLetraProcedencia() != ' ')
				n->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getValorT() <= k->getValorT() && a->getValorT() <= l->getValorT() && a->getValorT() <= m->getValorT() && a->getValorT() <= n->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getValorT() <= k->getValorT() && b->getValorT() <= l->getValorT() && b->getValorT() <= m->getValorT() && b->getValorT() <= n->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getValorT() <= k->getValorT() && c->getValorT() <= l->getValorT() && c->getValorT() <= m->getValorT() && c->getValorT() <= n->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();
			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getValorT() <= k->getValorT() && d->getValorT() <= l->getValorT() && d->getValorT() <= m->getValorT() && d->getValorT() <= n->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();
			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getValorT() <= k->getValorT() && e->getValorT() <= l->getValorT() && e->getValorT() <= m->getValorT() && e->getValorT() <= n->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();
			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getValorT() <= k->getValorT() && f->getValorT() <= l->getValorT() && f->getValorT() <= m->getValorT() && f->getValorT() <= n->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();
			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getValorT() <= k->getValorT() && g->getValorT() <= l->getValorT() && g->getValorT() <= m->getValorT() && g->getValorT() <= n->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();
			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getValorT() <= k->getValorT() && h->getValorT() <= l->getValorT() && h->getValorT() <= m->getValorT() && h->getValorT() <= n->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();
			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getValorT() <= k->getValorT() && i->getValorT() <= l->getValorT() && i->getValorT() <= m->getValorT() && i->getValorT() <= n->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();
			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getValorT() <= k->getValorT() && j->getValorT() <= l->getValorT() && j->getValorT() <= m->getValorT() && j->getValorT() <= n->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();
			}
			if (k->getValorT() <= b->getValorT() && k->getValorT() <= c->getValorT() && k->getValorT() <= d->getValorT() && k->getValorT() <= a->getValorT() && k->getValorT() <= e->getValorT() && k->getValorT() <= f->getValorT() && k->getValorT() <= g->getValorT() && k->getValorT() <= h->getValorT() && k->getValorT() <= i->getValorT() && k->getValorT() <= j->getValorT() && k->getValorT() <= l->getValorT() && k->getValorT() <= m->getValorT() && k->getValorT() <= n->getValorT() && k->getLetraProcedencia() != ' ') {
				k->setValorD(k->getValorT());
				k->setCompletado();
			}
			if (l->getValorT() <= b->getValorT() && l->getValorT() <= c->getValorT() && l->getValorT() <= d->getValorT() && l->getValorT() <= a->getValorT() && l->getValorT() <= e->getValorT() && l->getValorT() <= f->getValorT() && l->getValorT() <= g->getValorT() && l->getValorT() <= h->getValorT() && l->getValorT() <= i->getValorT() && l->getValorT() <= j->getValorT() && l->getValorT() <= k->getValorT() && l->getValorT() <= m->getValorT() && l->getValorT() <= n->getValorT() && l->getLetraProcedencia() != ' ') {
				l->setValorD(l->getValorT());
				l->setCompletado();
			}
			if (m->getValorT() <= b->getValorT() && m->getValorT() <= c->getValorT() && m->getValorT() <= d->getValorT() && m->getValorT() <= a->getValorT() && m->getValorT() <= e->getValorT() && m->getValorT() <= f->getValorT() && m->getValorT() <= g->getValorT() && m->getValorT() <= h->getValorT() && m->getValorT() <= i->getValorT() && m->getValorT() <= j->getValorT() && m->getValorT() <= k->getValorT() && m->getValorT() <= l->getValorT() && m->getValorT() <= n->getValorT() && m->getLetraProcedencia() != ' ') {
				m->setValorD(m->getValorT());
				m->setCompletado();
			}
			if (n->getValorT() <= b->getValorT() && n->getValorT() <= c->getValorT() && n->getValorT() <= d->getValorT() && n->getValorT() <= a->getValorT() && n->getValorT() <= e->getValorT() && n->getValorT() <= f->getValorT() && n->getValorT() <= g->getValorT() && n->getValorT() <= h->getValorT() && n->getValorT() <= i->getValorT() && n->getValorT() <= j->getValorT() && n->getValorT() <= k->getValorT() && n->getValorT() <= l->getValorT() && n->getValorT() <= m->getValorT() && n->getLetraProcedencia() != ' ') {
				n->setValorD(n->getValorT());
				n->setCompletado();
			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());
			k->setValorT2(k->getValorT());
			l->setValorT2(l->getValorT());
			m->setValorT2(m->getValorT());
			n->setValorT2(n->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		case 'K':rspta = k->getValorT(); break;
		case 'L':rspta = l->getValorT(); break;
		case 'M':rspta = m->getValorT(); break;
		case 'N':rspta = n->getValorT(); break;
		}
	};
	//15
	Vertices(int ab, int ac, int ad, int ae, int af, int ag, int ah, int ai, int aj, int ak, int al, int am, int an, int ao,
					 int bc, int bd, int be, int bf, int bg, int bh, int bi, int bj, int bk, int bl, int bm, int bn, int bo,
							 int cd, int ce, int cf, int cg, int ch, int ci, int cj, int ck, int cl, int cm, int cn, int co,
									 int de, int df, int dg, int dh, int di, int dj, int dk, int dl, int dm, int dn, int doo,
											 int ef, int eg, int eh, int ei, int ej, int ek, int el, int em, int en, int eo,
													 int fg, int fh, int fi, int fj, int fk, int fl, int fm, int fn, int fo,
															 int gh, int gi, int gj, int gk, int gl, int gm, int gn, int go,
																	 int hi, int hj, int hk, int hl, int hm, int hn, int ho,
																			 int ij, int ik, int il, int im, int in, int io,
																					 int jk, int jl, int jm, int jn, int jo,
																							 int kl, int km, int kn, int ko,
																									 int lm, int ln, int lo,
																											 int mn, int mo,
																													 int no,int nele, char Vinicial, char Vfinal): ab(ab), ac(ac), ad(ad), ae(ae), af(af),ag(ag),ah(ah),ai(ai),aj(aj),ak(ak),al(al),am(am),an(an),ao(ao),
																																	  bc(bc), bd(bd), be(be), bf(bf),bg(bg),bh(bh),bi(bi),bj(bj),bk(bk),bl(bl),bm(bm),bn(bn),bo(bo),
																																			  cd(cd), ce(ce), cf(cf),cg(cg),ch(ch),ci(ci),cj(cj),ck(ck),cl(cl),cm(cm),cn(cn),co(co),
																																					  de(de), df(df),dg(dg),dh(dh),di(di),dj(dj),dk(dk),dl(dl),dm(dm),dn(dn),doo(doo),
																																							  ef(ef),eg(eg),eh(eh),ei(ei),ej(ej),ek(ek),el(el),em(em),en(en),eo(eo),
																																									 fg(fg),fh(fh),fi(fi),fj(fj),fk(fk),fl(fl),fm(fm),fn(fn),fo(fo),
																																											gh(gh),gi(gi),gj(gj),gk(gk),gl(gl),gm(gm),gn(gn),go(go),
																																												   hi(hi),hj(hj),hk(hk),hl(hl),hm(hm),hn(hn),ho(ho),
																																														  ij(ij),ik(ik),il(il),im(im),in(in),io(io),
																																																 jk(jk),jl(jl),jm(jm),jn(jn),jo(jo),
																																																		kl(kl),km(km),kn(kn),ko(ko),
																																																			   lm(lm),ln(ln),lo(lo),
																																																					  mn(mn),mo(mo),
																																																							 no(no) {
		//Asginar pesos y Letra de entrada a cada Vertice
		A = { new Vertice('B',ab),new Vertice('C',ac),new Vertice('D',ad),new Vertice('E',ae), new Vertice('F',af), new Vertice('G',ag), new Vertice('H',ah), new Vertice('I',ai), new Vertice('J',aj), new Vertice('K',ak), new Vertice('L',al), new Vertice('M',am), new Vertice('N',an), new Vertice('O',ao) };
		B = { new Vertice('A',ab),new Vertice('C',bc),new Vertice('D',bd),new Vertice('E',be), new Vertice('F',bf), new Vertice('G',bg), new Vertice('H',bh), new Vertice('I',bi), new Vertice('J',bj), new Vertice('K',bk), new Vertice('L',bl), new Vertice('M',bm), new Vertice('N',bn), new Vertice('O',bo) };
		C = { new Vertice('A',ac),new Vertice('B',bc),new Vertice('D',cd),new Vertice('E',ce), new Vertice('F',cf), new Vertice('G',cg), new Vertice('H',ch), new Vertice('I',ci), new Vertice('J',cj), new Vertice('K',ck), new Vertice('L',cl), new Vertice('M',cm), new Vertice('N',cn), new Vertice('O',co) };
		D = { new Vertice('A',ad),new Vertice('B',bd),new Vertice('C',cd),new Vertice('E',de), new Vertice('F',df), new Vertice('G',dg), new Vertice('H',dh), new Vertice('I',di), new Vertice('J',dj), new Vertice('K',dk), new Vertice('L',dl), new Vertice('M',dm), new Vertice('N',dn), new Vertice('O',doo) };
		E = { new Vertice('A',ae),new Vertice('B',be),new Vertice('C',ce),new Vertice('D',de), new Vertice('F',ef), new Vertice('G',eg), new Vertice('H',eh), new Vertice('I',ei), new Vertice('J',ej), new Vertice('K',ek), new Vertice('L',el), new Vertice('M',em), new Vertice('N',en), new Vertice('O',eo) };
		F = { new Vertice('A',af),new Vertice('B',bf),new Vertice('C',cf),new Vertice('D',df), new Vertice('E',ef), new Vertice('G',fg), new Vertice('H',fh), new Vertice('I',fi), new Vertice('J',fj), new Vertice('K',fk), new Vertice('L',fl), new Vertice('M',fm), new Vertice('N',fn), new Vertice('O',fo) };
		G = { new Vertice('A',ag),new Vertice('B',bg),new Vertice('C',cg),new Vertice('D',dg), new Vertice('E',eg), new Vertice('F',fg), new Vertice('H',gh), new Vertice('I',gi), new Vertice('J',gj), new Vertice('K',gk), new Vertice('L',gl), new Vertice('M',gm), new Vertice('N',gn), new Vertice('O',go) };
		H = { new Vertice('A',ah),new Vertice('B',bh),new Vertice('C',ch),new Vertice('D',dh), new Vertice('E',eh), new Vertice('F',fh), new Vertice('G',gh), new Vertice('I',hi), new Vertice('J',hj), new Vertice('K',hk), new Vertice('L',hl), new Vertice('M',hm), new Vertice('N',hn), new Vertice('O',ho) };
		I = { new Vertice('A',ai),new Vertice('B',bi),new Vertice('C',ci),new Vertice('D',di), new Vertice('E',ei), new Vertice('F',fi), new Vertice('G',gi), new Vertice('H',hi), new Vertice('J',ij), new Vertice('K',ik), new Vertice('L',il), new Vertice('M',im), new Vertice('N',in), new Vertice('O',io) };
		J = { new Vertice('A',aj),new Vertice('B',bj),new Vertice('C',cj),new Vertice('D',dj), new Vertice('E',ej), new Vertice('F',fj), new Vertice('G',gj), new Vertice('H',hj), new Vertice('I',ij), new Vertice('K',jk), new Vertice('L',jl), new Vertice('M',jm), new Vertice('N',jn), new Vertice('O',jo) };
		K = { new Vertice('A',ak),new Vertice('B',bk),new Vertice('C',ck),new Vertice('D',dk), new Vertice('E',ek), new Vertice('F',fk), new Vertice('G',gk), new Vertice('H',hk), new Vertice('I',ik), new Vertice('J',jk), new Vertice('L',kl), new Vertice('M',km), new Vertice('N',kn), new Vertice('O',ko) };
		L = { new Vertice('A',al),new Vertice('B',bl),new Vertice('C',cl),new Vertice('D',dl), new Vertice('E',el), new Vertice('F',fl), new Vertice('G',gl), new Vertice('H',hl), new Vertice('I',il), new Vertice('J',jl), new Vertice('K',kl), new Vertice('M',lm), new Vertice('N',ln), new Vertice('O',lo) };
		M = { new Vertice('A',am),new Vertice('B',bm),new Vertice('C',cm),new Vertice('D',dm), new Vertice('E',em), new Vertice('F',fm), new Vertice('G',gm), new Vertice('H',hm), new Vertice('I',im), new Vertice('J',jm), new Vertice('K',km), new Vertice('L',lm), new Vertice('N',mn), new Vertice('O',mo) };
		N = { new Vertice('A',an),new Vertice('B',bn),new Vertice('C',cn),new Vertice('D',dn), new Vertice('E',en), new Vertice('F',fn), new Vertice('G',gn), new Vertice('H',hn), new Vertice('I',in), new Vertice('J',jn), new Vertice('K',kn), new Vertice('L',ln), new Vertice('M',mn), new Vertice('O',no) };
		O = { new Vertice('A',ao),new Vertice('B',bo),new Vertice('C',co),new Vertice('D',doo), new Vertice('E',eo), new Vertice('F',fo), new Vertice('G',go), new Vertice('H',ho), new Vertice('I',io), new Vertice('J',jo), new Vertice('K',ko), new Vertice('L',lo), new Vertice('M',mo), new Vertice('O',no) };

		//Objetos filas
		ValorTabla* a = new ValorTabla();
		ValorTabla* b = new ValorTabla();
		ValorTabla* c = new ValorTabla();
		ValorTabla* d = new ValorTabla();
		ValorTabla* e = new ValorTabla();
		ValorTabla* f = new ValorTabla();
		ValorTabla* g = new ValorTabla();
		ValorTabla* h = new ValorTabla();
		ValorTabla* i = new ValorTabla();
		ValorTabla* j = new ValorTabla();
		ValorTabla* k = new ValorTabla();
		ValorTabla* l = new ValorTabla();
		ValorTabla* m = new ValorTabla();
		ValorTabla* n = new ValorTabla();
		ValorTabla* o = new ValorTabla();

		//Setear Al valor inicial
		switch (Vinicial)
		{
		case 'A': a->setCompletado(); a->setLetraProcedencia('A');  a->setValorD(0); break;
		case 'B': b->setCompletado(); b->setLetraProcedencia('B');  b->setValorD(0); break;
		case 'C': c->setCompletado(); c->setLetraProcedencia('C');  c->setValorD(0); break;
		case 'D': d->setCompletado(); d->setLetraProcedencia('D');  d->setValorD(0); break;
		case 'E': e->setCompletado(); e->setLetraProcedencia('E');  e->setValorD(0); break;
		case 'F': f->setCompletado(); f->setLetraProcedencia('F');  f->setValorD(0); break;
		case 'G': g->setCompletado(); g->setLetraProcedencia('G');  g->setValorD(0); break;
		case 'H': h->setCompletado(); h->setLetraProcedencia('H');  h->setValorD(0); break;
		case 'I': i->setCompletado(); i->setLetraProcedencia('I');  i->setValorD(0); break;
		case 'J': j->setCompletado(); j->setLetraProcedencia('J');  j->setValorD(0); break;
		case 'K': k->setCompletado(); k->setLetraProcedencia('K');  k->setValorD(0); break;
		case 'L': l->setCompletado(); l->setLetraProcedencia('L');  l->setValorD(0); break;
		case 'M': m->setCompletado(); m->setLetraProcedencia('M');  m->setValorD(0); break;
		case 'N': n->setCompletado(); n->setLetraProcedencia('N');  n->setValorD(0); break;
		case 'O': o->setCompletado(); o->setLetraProcedencia('N');  o->setValorD(0); break;
		}
		//ITERACIONES
		int iterador = 0;
		while (iterador < nele)
		{
			int aux, aux2, menor, contAux;
			bool infinit;
			//Analisis de cada fila en la iteracion
			if (a->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < A.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (A[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;

					}
					if (A[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (A[ii]->getLetra())//no puede tener letra de ella misma (analisis de letras que llegan a A)
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = A[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; a->setValorT(menor); a->setLetraProcedencia(A[ii]->getLetra()); contAux++; }

					}

				}

			}
			if (b->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < B.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (B[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}
					if (B[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (B[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}

						aux = B[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; b->setValorT(menor); b->setLetraProcedencia(B[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (c->getCompletado() == false) {//si aun no tiene valor definitivo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < C.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (C[ii]->getLetra()) {
					case 'A':infinit = a->getInfinito(); break;
					case 'B':infinit = b->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}
					if (C[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (C[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = C[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; c->setValorT(menor); c->setLetraProcedencia(C[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (d->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < D.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (D[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}
					if (D[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (D[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = D[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; d->setValorT(menor); d->setLetraProcedencia(D[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (e->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < E.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (E[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (E[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (E[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = E[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; e->setValorT(menor); e->setLetraProcedencia(E[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (f->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < F.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (F[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (F[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (F[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = F[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; f->setValorT(menor); f->setLetraProcedencia(F[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (g->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (G[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (G[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (G[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = G[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; g->setValorT(menor); g->setLetraProcedencia(G[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (h->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < G.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (H[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (H[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (H[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = H[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; h->setValorT(menor); h->setLetraProcedencia(H[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (i->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < I.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (I[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (I[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (I[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = I[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; i->setValorT(menor); i->setLetraProcedencia(I[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (j->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < J.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (J[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (J[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (J[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = J[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; j->setValorT(menor); j->setLetraProcedencia(J[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (k->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (K[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'L':infinit = j->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (K[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (K[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = K[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; k->setValorT(menor); k->setLetraProcedencia(K[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (l->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < K.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (L[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (L[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (L[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = L[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; l->setValorT(menor); l->setLetraProcedencia(L[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (m->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < M.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (M[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (M[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (M[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = M[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; m->setValorT(menor); m->setLetraProcedencia(M[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (n->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < N.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (N[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'O':infinit = o->getInfinito(); break;
					}

					if (N[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (N[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'O':
							if (o->getCompletado() == false)
								aux2 = o->getValorT2();
							else
								aux2 = o->getValorD();
							break;
						}
						aux = N[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; n->setValorT(menor); n->setLetraProcedencia(N[ii]->getLetra()); contAux++; }

					}
				}

			}
			if (o->getCompletado() == false) {//si aun no tiene valor definitvo
				contAux = menor = aux = aux2 = 0;
				for (size_t ii = 0; ii < O.size(); ii++)//para cada uno de los valores que llegan al vertice
				{

					switch (O[ii]->getLetra()) {
					case 'B':infinit = b->getInfinito(); break;
					case 'C':infinit = c->getInfinito(); break;
					case 'D':infinit = d->getInfinito(); break;
					case 'A':infinit = a->getInfinito(); break;
					case 'E':infinit = e->getInfinito(); break;
					case 'F':infinit = f->getInfinito(); break;
					case 'G':infinit = g->getInfinito(); break;
					case 'H':infinit = h->getInfinito(); break;
					case 'I':infinit = i->getInfinito(); break;
					case 'J':infinit = j->getInfinito(); break;
					case 'K':infinit = k->getInfinito(); break;
					case 'L':infinit = l->getInfinito(); break;
					case 'M':infinit = m->getInfinito(); break;
					case 'N':infinit = n->getInfinito(); break;
					
					}

					if (O[ii]->getPeso() != 0 && infinit == false)//si el peso de esa relacion es diferente de 0(o sea que si hay camino xd) Y si el valor de la letra de la tabla a analizar no es infinito
					{
						switch (O[ii]->getLetra())//no puede tener letra de ella misma
						{
						case 'B':
							if (b->getCompletado() == false)
								aux2 = b->getValorT2();
							else
								aux2 = b->getValorD();
							break;
						case 'C':
							if (c->getCompletado() == false)
								aux2 = c->getValorT2();
							else
								aux2 = c->getValorD();
							break;
						case 'D':
							if (d->getCompletado() == false)
								aux2 = d->getValorT2();
							else
								aux2 = d->getValorD();
							break;
						case 'A':
							if (a->getCompletado() == false)
								aux2 = a->getValorT2();
							else
								aux2 = a->getValorD();
							break;
						case 'E':
							if (e->getCompletado() == false)
								aux2 = e->getValorT2();
							else
								aux2 = e->getValorD();
							break;
						case 'F':
							if (f->getCompletado() == false)
								aux2 = f->getValorT2();
							else
								aux2 = f->getValorD();
							break;
						case 'G':
							if (g->getCompletado() == false)
								aux2 = g->getValorT2();
							else
								aux2 = g->getValorD();
							break;
						case 'H':
							if (h->getCompletado() == false)
								aux2 = h->getValorT2();
							else
								aux2 = h->getValorD();
							break;
						case 'I':
							if (i->getCompletado() == false)
								aux2 = i->getValorT2();
							else
								aux2 = i->getValorD();
							break;
						case 'J':
							if (j->getCompletado() == false)
								aux2 = j->getValorT2();
							else
								aux2 = j->getValorD();
							break;
						case 'K':
							if (k->getCompletado() == false)
								aux2 = k->getValorT2();
							else
								aux2 = k->getValorD();
							break;
						case 'L':
							if (l->getCompletado() == false)
								aux2 = l->getValorT2();
							else
								aux2 = l->getValorD();
							break;
						case 'M':
							if (m->getCompletado() == false)
								aux2 = m->getValorT2();
							else
								aux2 = m->getValorD();
							break;
						case 'N':
							if (n->getCompletado() == false)
								aux2 = n->getValorT2();
							else
								aux2 = n->getValorD();
							break;
						}
						aux = O[ii]->getPeso() + aux2;//se suma el peso del camino y el valor temporal o defnitivo del vertice 
						if (aux <= menor || contAux < 1) { menor = aux; o->setValorT(menor); o->setLetraProcedencia(O[ii]->getLetra()); contAux++; }

					}
				}

			}
			

			//INFINITO
			if (a->getLetraProcedencia() != ' ')
				a->setInfinito();
			if (b->getLetraProcedencia() != ' ')
				b->setInfinito();
			if (c->getLetraProcedencia() != ' ')
				c->setInfinito();
			if (d->getLetraProcedencia() != ' ')
				d->setInfinito();
			if (e->getLetraProcedencia() != ' ')
				e->setInfinito();
			if (f->getLetraProcedencia() != ' ')
				f->setInfinito();
			if (g->getLetraProcedencia() != ' ')
				g->setInfinito();
			if (h->getLetraProcedencia() != ' ')
				h->setInfinito();
			if (i->getLetraProcedencia() != ' ')
				i->setInfinito();
			if (j->getLetraProcedencia() != ' ')
				j->setInfinito();
			if (k->getLetraProcedencia() != ' ')
				k->setInfinito();
			if (l->getLetraProcedencia() != ' ')
				l->setInfinito();
			if (m->getLetraProcedencia() != ' ')
				m->setInfinito();
			if (n->getLetraProcedencia() != ' ')
				n->setInfinito();
			if (o->getLetraProcedencia() != ' ')
				o->setInfinito();

			//buscar menor elemento de la iteracion para volverlo definitivo
			if (a->getValorT() <= b->getValorT() && a->getValorT() <= c->getValorT() && a->getValorT() <= d->getValorT() && a->getValorT() <= e->getValorT() && a->getValorT() <= f->getValorT() && a->getValorT() <= g->getValorT() && a->getValorT() <= h->getValorT() && a->getValorT() <= i->getValorT() && a->getValorT() <= j->getValorT() && a->getValorT() <= k->getValorT() && a->getValorT() <= l->getValorT() && a->getValorT() <= m->getValorT() && a->getValorT() <= n->getValorT() && a->getValorT() <= o->getValorT() && a->getLetraProcedencia() != ' ') {
				a->setValorD(a->getValorT());
				a->setCompletado();
			}
			if (b->getValorT() <= a->getValorT() && b->getValorT() <= c->getValorT() && b->getValorT() <= d->getValorT() && b->getValorT() <= e->getValorT() && b->getValorT() <= f->getValorT() && b->getValorT() <= g->getValorT() && b->getValorT() <= h->getValorT() && b->getValorT() <= i->getValorT() && b->getValorT() <= j->getValorT() && b->getValorT() <= k->getValorT() && b->getValorT() <= l->getValorT() && b->getValorT() <= m->getValorT() && b->getValorT() <= n->getValorT() && b->getValorT() <= o->getValorT() && b->getLetraProcedencia() != ' ') {
				b->setValorD(b->getValorT());
				b->setCompletado();
			}
			if (c->getValorT() <= b->getValorT() && c->getValorT() <= a->getValorT() && c->getValorT() <= d->getValorT() && c->getValorT() <= e->getValorT() && c->getValorT() <= f->getValorT() && c->getValorT() <= g->getValorT() && c->getValorT() <= h->getValorT() && c->getValorT() <= i->getValorT() && c->getValorT() <= j->getValorT() && c->getValorT() <= k->getValorT() && c->getValorT() <= l->getValorT() && c->getValorT() <= m->getValorT() && c->getValorT() <= n->getValorT() && c->getValorT() <= o->getValorT() && c->getLetraProcedencia() != ' ') {
				c->setValorD(c->getValorT());
				c->setCompletado();
			}
			if (d->getValorT() <= b->getValorT() && d->getValorT() <= c->getValorT() && d->getValorT() <= a->getValorT() && d->getValorT() <= e->getValorT() && d->getValorT() <= f->getValorT() && d->getValorT() <= g->getValorT() && d->getValorT() <= h->getValorT() && d->getValorT() <= i->getValorT() && d->getValorT() <= j->getValorT() && d->getValorT() <= k->getValorT() && d->getValorT() <= l->getValorT() && d->getValorT() <= m->getValorT() && d->getValorT() <= n->getValorT() && d->getValorT() <= o->getValorT() && d->getLetraProcedencia() != ' ') {
				d->setValorD(d->getValorT());
				d->setCompletado();
			}
			if (e->getValorT() <= b->getValorT() && e->getValorT() <= c->getValorT() && e->getValorT() <= d->getValorT() && e->getValorT() <= a->getValorT() && e->getValorT() <= f->getValorT() && e->getValorT() <= g->getValorT() && e->getValorT() <= h->getValorT() && e->getValorT() <= i->getValorT() && e->getValorT() <= j->getValorT() && e->getValorT() <= k->getValorT() && e->getValorT() <= l->getValorT() && e->getValorT() <= m->getValorT() && e->getValorT() <= n->getValorT() && e->getValorT() <= o->getValorT() && e->getLetraProcedencia() != ' ') {
				e->setValorD(e->getValorT());
				e->setCompletado();
			}
			if (f->getValorT() <= b->getValorT() && f->getValorT() <= c->getValorT() && f->getValorT() <= d->getValorT() && f->getValorT() <= a->getValorT() && f->getValorT() <= e->getValorT() && f->getValorT() <= g->getValorT() && f->getValorT() <= h->getValorT() && f->getValorT() <= i->getValorT() && f->getValorT() <= j->getValorT() && f->getValorT() <= k->getValorT() && f->getValorT() <= l->getValorT() && f->getValorT() <= m->getValorT() && f->getValorT() <= n->getValorT() && f->getValorT() <= o->getValorT() && f->getLetraProcedencia() != ' ') {
				f->setValorD(f->getValorT());
				f->setCompletado();
			}
			if (g->getValorT() <= b->getValorT() && g->getValorT() <= c->getValorT() && g->getValorT() <= d->getValorT() && g->getValorT() <= a->getValorT() && g->getValorT() <= e->getValorT() && g->getValorT() <= f->getValorT() && g->getValorT() <= h->getValorT() && g->getValorT() <= i->getValorT() && g->getValorT() <= j->getValorT() && g->getValorT() <= k->getValorT() && g->getValorT() <= l->getValorT() && g->getValorT() <= m->getValorT() && g->getValorT() <= n->getValorT() && g->getValorT() <= o->getValorT() && g->getLetraProcedencia() != ' ') {
				g->setValorD(g->getValorT());
				g->setCompletado();
			}
			if (h->getValorT() <= b->getValorT() && h->getValorT() <= c->getValorT() && h->getValorT() <= d->getValorT() && h->getValorT() <= a->getValorT() && h->getValorT() <= e->getValorT() && h->getValorT() <= f->getValorT() && h->getValorT() <= g->getValorT() && h->getValorT() <= i->getValorT() && h->getValorT() <= j->getValorT() && h->getValorT() <= k->getValorT() && h->getValorT() <= l->getValorT() && h->getValorT() <= m->getValorT() && h->getValorT() <= n->getValorT() && h->getValorT() <= o->getValorT() && h->getLetraProcedencia() != ' ') {
				h->setValorD(h->getValorT());
				h->setCompletado();
			}
			if (i->getValorT() <= b->getValorT() && i->getValorT() <= c->getValorT() && i->getValorT() <= d->getValorT() && i->getValorT() <= a->getValorT() && i->getValorT() <= e->getValorT() && i->getValorT() <= f->getValorT() && i->getValorT() <= g->getValorT() && i->getValorT() <= h->getValorT() && i->getValorT() <= j->getValorT() && i->getValorT() <= k->getValorT() && i->getValorT() <= l->getValorT() && i->getValorT() <= m->getValorT() && i->getValorT() <= n->getValorT() && i->getValorT() <= o->getValorT() && i->getLetraProcedencia() != ' ') {
				i->setValorD(i->getValorT());
				i->setCompletado();
			}
			if (j->getValorT() <= b->getValorT() && j->getValorT() <= c->getValorT() && j->getValorT() <= d->getValorT() && j->getValorT() <= a->getValorT() && j->getValorT() <= e->getValorT() && j->getValorT() <= f->getValorT() && j->getValorT() <= g->getValorT() && j->getValorT() <= h->getValorT() && j->getValorT() <= i->getValorT() && j->getValorT() <= k->getValorT() && j->getValorT() <= l->getValorT() && j->getValorT() <= m->getValorT() && j->getValorT() <= n->getValorT() && j->getValorT() <= o->getValorT() && j->getLetraProcedencia() != ' ') {
				j->setValorD(j->getValorT());
				j->setCompletado();
			}
			if (k->getValorT() <= b->getValorT() && k->getValorT() <= c->getValorT() && k->getValorT() <= d->getValorT() && k->getValorT() <= a->getValorT() && k->getValorT() <= e->getValorT() && k->getValorT() <= f->getValorT() && k->getValorT() <= g->getValorT() && k->getValorT() <= h->getValorT() && k->getValorT() <= i->getValorT() && k->getValorT() <= j->getValorT() && k->getValorT() <= l->getValorT() && k->getValorT() <= m->getValorT() && k->getValorT() <= n->getValorT() && k->getValorT() <= o->getValorT() && k->getLetraProcedencia() != ' ') {
				k->setValorD(k->getValorT());
				k->setCompletado();
			}
			if (l->getValorT() <= b->getValorT() && l->getValorT() <= c->getValorT() && l->getValorT() <= d->getValorT() && l->getValorT() <= a->getValorT() && l->getValorT() <= e->getValorT() && l->getValorT() <= f->getValorT() && l->getValorT() <= g->getValorT() && l->getValorT() <= h->getValorT() && l->getValorT() <= i->getValorT() && l->getValorT() <= j->getValorT() && l->getValorT() <= k->getValorT() && l->getValorT() <= m->getValorT() && l->getValorT() <= n->getValorT() && l->getValorT() <= o->getValorT() && l->getLetraProcedencia() != ' ') {
				l->setValorD(l->getValorT());
				l->setCompletado();
			}
			if (m->getValorT() <= b->getValorT() && m->getValorT() <= c->getValorT() && m->getValorT() <= d->getValorT() && m->getValorT() <= a->getValorT() && m->getValorT() <= e->getValorT() && m->getValorT() <= f->getValorT() && m->getValorT() <= g->getValorT() && m->getValorT() <= h->getValorT() && m->getValorT() <= i->getValorT() && m->getValorT() <= j->getValorT() && m->getValorT() <= k->getValorT() && m->getValorT() <= l->getValorT() && m->getValorT() <= n->getValorT() && m->getValorT() <= o->getValorT() && m->getLetraProcedencia() != ' ') {
				m->setValorD(m->getValorT());
				m->setCompletado();
			}
			if (n->getValorT() <= b->getValorT() && n->getValorT() <= c->getValorT() && n->getValorT() <= d->getValorT() && n->getValorT() <= a->getValorT() && n->getValorT() <= e->getValorT() && n->getValorT() <= f->getValorT() && n->getValorT() <= g->getValorT() && n->getValorT() <= h->getValorT() && n->getValorT() <= i->getValorT() && n->getValorT() <= j->getValorT() && n->getValorT() <= k->getValorT() && n->getValorT() <= l->getValorT() && n->getValorT() <= m->getValorT() && n->getValorT() <= o->getValorT() && n->getLetraProcedencia() != ' ') {
				n->setValorD(n->getValorT());
				n->setCompletado();
			}
			if (o->getValorT() <= b->getValorT() && o->getValorT() <= c->getValorT() && o->getValorT() <= d->getValorT() && o->getValorT() <= a->getValorT() && o->getValorT() <= e->getValorT() && o->getValorT() <= f->getValorT() && o->getValorT() <= g->getValorT() && o->getValorT() <= h->getValorT() && o->getValorT() <= i->getValorT() && o->getValorT() <= j->getValorT() && o->getValorT() <= k->getValorT() && o->getValorT() <= l->getValorT() && o->getValorT() <= m->getValorT() && o->getValorT() <= n->getValorT() && o->getLetraProcedencia() != ' ') {
				o->setValorD(o->getValorT());
				o->setCompletado();
			}


			//PASAR VALORES DE T(ACTUAL) A T2(PASADOS) 
			a->setValorT2(a->getValorT());
			b->setValorT2(b->getValorT());
			c->setValorT2(c->getValorT());
			d->setValorT2(d->getValorT());
			e->setValorT2(e->getValorT());
			f->setValorT2(f->getValorT());
			g->setValorT2(g->getValorT());
			h->setValorT2(h->getValorT());
			i->setValorT2(i->getValorT());
			j->setValorT2(j->getValorT());
			k->setValorT2(k->getValorT());
			l->setValorT2(l->getValorT());
			m->setValorT2(m->getValorT());
			n->setValorT2(n->getValorT());
			o->setValorT2(o->getValorT());

			iterador++;
		}


		switch (Vfinal)
		{
		case 'A':rspta = a->getValorT(); break;
		case 'B':rspta = b->getValorT(); break;
		case 'C':rspta = c->getValorT(); break;
		case 'D':rspta = d->getValorT(); break;
		case 'E':rspta = e->getValorT(); break;
		case 'F':rspta = f->getValorT(); break;
		case 'G':rspta = g->getValorT(); break;
		case 'H':rspta = h->getValorT(); break;
		case 'I':rspta = i->getValorT(); break;
		case 'J':rspta = j->getValorT(); break;
		case 'K':rspta = k->getValorT(); break;
		case 'L':rspta = l->getValorT(); break;
		case 'M':rspta = m->getValorT(); break;
		case 'N':rspta = n->getValorT(); break;
		case 'O':rspta = o->getValorT(); break;
		}
	};
	
	//Destructor
	~Vertices() {};

	vector<Vertice*> getB() { return B; }
	vector<Vertice*> getC() { return C; }
	vector<Vertice*> getD() { return D; }
	vector<Vertice*> getE() { return E; }
	vector<Vertice*> getF() { return F; }
	vector<Vertice*> getG() { return G; }
	vector<Vertice*> getH() { return H; }
	vector<Vertice*> getI() { return I; }
	vector<Vertice*> getJ() { return J; }
	vector<Vertice*> getK() { return K; }
	vector<Vertice*> getL() { return L; }
	vector<Vertice*> getM() { return M; }
	vector<Vertice*> getN() { return N; }
	vector<Vertice*> getO() { return O; }
	
	string getRspta() { return to_string(rspta); }

};


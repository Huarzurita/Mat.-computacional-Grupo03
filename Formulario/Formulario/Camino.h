#pragma once
#include "Dependencias.h"

class Camino
{
private:
	string rspta;
public:
	Camino(char a,char b, char c, char d,char e,char Vinicial, char Vfinal, int nele) {
		vector<char>parA = {'A',a};
		vector<char>parB = {'B',b};
		vector<char>parC = {'C',c};
		vector<char>parD = {'D',d};
		vector<char>parE = {'E',e};

		vector<vector<char>>list{ parA,parB,parC,parD,parE };

		char aux=Vfinal;

		while (aux != Vinicial){
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//5
	Camino(char a, char b, char c, char d, char e,char f, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//6
	Camino(char a, char b, char c, char d, char e, char f,char g, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//7
	Camino(char a, char b, char c, char d, char e, char f, char g,char h, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//8
	Camino(char a, char b, char c, char d, char e, char f, char g, char h,char i, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//9
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i,char j, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//10
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j,char k, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };
		vector<char>parK = { 'K',k };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ,parK };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//11
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };
		vector<char>parK = { 'K',k };
		vector<char>parL = { 'L',l };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ,parK,parL };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//12
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l,char m, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };
		vector<char>parK = { 'K',k };
		vector<char>parL = { 'L',l };
		vector<char>parM = { 'M',m };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ,parK,parL,parM };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//13
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m,char n, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };
		vector<char>parK = { 'K',k };
		vector<char>parL = { 'L',l };
		vector<char>parM = { 'M',m };
		vector<char>parN = { 'N',n };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ,parK,parL,parM,parN };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//14
	Camino(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n,char o, char Vinicial, char Vfinal, int nele) {
		vector<char>parA = { 'A',a };
		vector<char>parB = { 'B',b };
		vector<char>parC = { 'C',c };
		vector<char>parD = { 'D',d };
		vector<char>parE = { 'E',e };
		vector<char>parF = { 'F',f };
		vector<char>parG = { 'G',g };
		vector<char>parH = { 'H',h };
		vector<char>parI = { 'I',i };
		vector<char>parJ = { 'J',j };
		vector<char>parK = { 'K',k };
		vector<char>parL = { 'L',l };
		vector<char>parM = { 'M',m };
		vector<char>parN = { 'N',n };
		vector<char>parO = { 'O',o };

		vector<vector<char>>list{ parA,parB,parC,parD,parE,parF,parG,parH,parI,parJ,parK,parL,parM,parN,parO };

		char aux = Vfinal;

		while (aux != Vinicial) {
			for (size_t i = 0; i < list.size(); i++) {
				if (list[i][0] == aux) {
					rspta += list[i][0];
					aux = list[i][1];
				}
			}
		};
		
		rspta += Vinicial;
		reverse(rspta.begin(), rspta.end());
	};//15
	

	~Camino() {};

	string getRspta() { return rspta; }

};

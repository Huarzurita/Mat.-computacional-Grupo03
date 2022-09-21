
#include "MyForm.h"
using namespace System;
using namespace Windows::Forms;
using namespace MateComputacional;
int main() 
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MateComputacional::MatrizVisual);
	return 0;
}

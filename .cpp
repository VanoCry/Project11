#include "Formdeletedata.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project11::Formdeletedata form;
	Application::Run(% form);
}
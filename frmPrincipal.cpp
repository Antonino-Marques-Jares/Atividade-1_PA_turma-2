#include "pch.h"
#include "frmPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MeuFormulario::frmPrincipal form;
    Application::Run(% form);
}
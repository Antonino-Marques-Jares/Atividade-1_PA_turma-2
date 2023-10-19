#include "PavicLab2023_G2_Form.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PavicLab2023_G2_Solution::PavicLab2023_G2_Form form;
    Application::Run(% form);
}

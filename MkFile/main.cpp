// main.cpp

#using <System.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Windows::Forms;

#include "main.h"
#include "gui.h"

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application^ mkfile_v1;
    mkfile_v1->EnableVisualStyles();
    mkfile_v1->Run(gcnew MkFile::gui());
    return 0;
}


//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::addTasksClick(TObject *Sender)
{
	String newTask = textInput->Text;
	if(newTask != "")
	{
		displayTask->Items->Add(newTask);
	}
	textInput->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::displayTaskItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int itemIndex = Item->Index;
    displayTask->Items->Delete(itemIndex);
}
//---------------------------------------------------------------------------


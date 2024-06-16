#pragma once

 

// Package: MyCharaMenu_Interface

#include "Basic.hpp"

#include "MyCharaMenu_Interface_classes.hpp"


namespace SDK
{

// Function MyCharaMenu_Interface.MyCharaMenu_Interface_C.OnOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void IMyCharaMenu_Interface_C::OnOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Interface_C", "OnOpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}


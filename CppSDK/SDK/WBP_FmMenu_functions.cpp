#pragma once

 

// Package: WBP_FmMenu

#include "Basic.hpp"

#include "WBP_FmMenu_classes.hpp"


namespace SDK
{

// Function WBP_FmMenu.WBP_FmMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_FmMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FmMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


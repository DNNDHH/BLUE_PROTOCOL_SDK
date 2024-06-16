#pragma once

 

// Package: SBModelessDialog

#include "Basic.hpp"

#include "SBModelessDialog_classes.hpp"
#include "SBModelessDialog_parameters.hpp"


namespace SDK
{

// Function SBModelessDialog.SBOpenModelessDirectoryDialog.SBOpenModelessDirectoryDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DialogTitle                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DefaultPath                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USBOpenModelessDirectoryDialog*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USBOpenModelessDirectoryDialog* USBOpenModelessDirectoryDialog::SBOpenModelessDirectoryDialog(class UObject* WorldContextObject, const class FString& DialogTitle, const class FString& DefaultPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBOpenModelessDirectoryDialog", "SBOpenModelessDirectoryDialog");

	Params::SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DialogTitle = std::move(DialogTitle);
	Parms.DefaultPath = std::move(DefaultPath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


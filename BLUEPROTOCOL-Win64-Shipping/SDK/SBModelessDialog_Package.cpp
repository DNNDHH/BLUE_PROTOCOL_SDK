/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBModelessDialog.SBOpenModelessDirectoryDialog.SBOpenModelessDirectoryDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DialogTitle                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USBOpenModelessDirectoryDialog* USBOpenModelessDirectoryDialog::SBOpenModelessDirectoryDialog(class UObject* WorldContextObject, const class FString& DialogTitle, const class FString& DefaultPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBModelessDialog.SBOpenModelessDirectoryDialog.SBOpenModelessDirectoryDialog");
		
		USBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DialogTitle = DialogTitle;
		params.DefaultPath = DefaultPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBOpenModelessDirectoryDialog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBOpenModelessDirectoryDialog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBModelessDialog.SBOpenModelessDirectoryDialog");
		return ptr;
	}

}



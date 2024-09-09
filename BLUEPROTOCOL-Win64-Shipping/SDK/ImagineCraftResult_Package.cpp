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
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.SetText
	 * 		Flags  -> ()
	 */
	void UImagineCraftResult_C::SetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.SetText");
		
		UImagineCraftResult_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.Set Storageno
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftResult_C::SetStorageno(int32_t StorageNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.Set Storageno");
		
		UImagineCraftResult_C_SetStorageno_Params params {};
		params.StorageNo = StorageNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.SetUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UImagineCraftResult_C::SetUID(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.SetUID");
		
		UImagineCraftResult_C_SetUID_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.Close
	 * 		Flags  -> ()
	 */
	void UImagineCraftResult_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.Close");
		
		UImagineCraftResult_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.CloseDialog
	 * 		Flags  -> ()
	 */
	void UImagineCraftResult_C::CloseDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.CloseDialog");
		
		UImagineCraftResult_C_CloseDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.OnCloseDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftResult_C::OnCloseDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.OnCloseDialog");
		
		UImagineCraftResult_C_OnCloseDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.Show
	 * 		Flags  -> ()
	 */
	void UImagineCraftResult_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.Show");
		
		UImagineCraftResult_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.ExecuteUbergraph_ImagineCraftResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftResult_C::ExecuteUbergraph_ImagineCraftResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.ExecuteUbergraph_ImagineCraftResult");
		
		UImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftResult.ImagineCraftResult_C.OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCloseAll                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraftResult_C::OnClosed__DelegateSignature(bool isCloseAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftResult.ImagineCraftResult_C.OnClosed__DelegateSignature");
		
		UImagineCraftResult_C_OnClosed__DelegateSignature_Params params {};
		params.isCloseAll = isCloseAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineCraftResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineCraftResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineCraftResult.ImagineCraftResult_C");
		return ptr;
	}

}



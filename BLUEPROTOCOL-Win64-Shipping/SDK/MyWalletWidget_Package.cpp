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
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.SetBG
	 * 		Flags  -> ()
	 */
	void UMyWalletWidget_C::SetBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.SetBG");
		
		UMyWalletWidget_C_SetBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.GetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShowCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyWalletWidget_C::GetCount(int32_t* ShowCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.GetCount");
		
		UMyWalletWidget_C_GetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowCount != nullptr)
			*ShowCount = params.ShowCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.IsShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyWalletWidget_C::IsShow(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.IsShow");
		
		UMyWalletWidget_C_IsShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.Hide
	 * 		Flags  -> ()
	 */
	void UMyWalletWidget_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.Hide");
		
		UMyWalletWidget_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.Show
	 * 		Flags  -> ()
	 */
	void UMyWalletWidget_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.Show");
		
		UMyWalletWidget_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECurrencyType                                      InCurrencyType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyWalletWidget_C::SetActive(ECurrencyType InCurrencyType, bool bInActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.SetActive");
		
		UMyWalletWidget_C_SetActive_Params params {};
		params.InCurrencyType = InCurrencyType;
		params.bInActive = bInActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.PreConstruct_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UCurrencyWidget_C*>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UMyWalletWidget_C::PreConstruct_Internal(TArray<class UCurrencyWidget_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.PreConstruct_Internal");
		
		UMyWalletWidget_C_PreConstruct_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyWalletWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.PreConstruct");
		
		UMyWalletWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyWalletWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.Construct");
		
		UMyWalletWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyWalletWidget.MyWalletWidget_C.ExecuteUbergraph_MyWalletWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyWalletWidget_C::ExecuteUbergraph_MyWalletWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyWalletWidget.MyWalletWidget_C.ExecuteUbergraph_MyWalletWidget");
		
		UMyWalletWidget_C_ExecuteUbergraph_MyWalletWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyWalletWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyWalletWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyWalletWidget.MyWalletWidget_C");
		return ptr;
	}

}



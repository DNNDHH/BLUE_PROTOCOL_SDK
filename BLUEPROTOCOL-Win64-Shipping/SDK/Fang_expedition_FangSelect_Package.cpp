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
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.CB_FangSelectChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_FangSelect_C::CB_FangSelectChange(TArray<class FString>* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.CB_FangSelectChange");
		
		UFang_expedition_FangSelect_C_CB_FangSelectChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList_UniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FangCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_FangSelect_C::InitFangList_UniqueId(int32_t FangCount, TArray<class FString>* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList_UniqueId");
		
		UFang_expedition_FangSelect_C_InitFangList_UniqueId_Params params {};
		params.FangCount = FangCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FangCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FangSelect_C::InitFangList(int32_t FangCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList");
		
		UFang_expedition_FangSelect_C_InitFangList_Params params {};
		params.FangCount = FangCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_FangSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Construct");
		
		UFang_expedition_FangSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.BindFunction
	 * 		Flags  -> ()
	 */
	void UFang_expedition_FangSelect_C::BindFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.BindFunction");
		
		UFang_expedition_FangSelect_C_BindFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.UnbindFunction
	 * 		Flags  -> ()
	 */
	void UFang_expedition_FangSelect_C::UnbindFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.UnbindFunction");
		
		UFang_expedition_FangSelect_C_UnbindFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_FangSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Destruct");
		
		UFang_expedition_FangSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.ExecuteUbergraph_Fang_expedition_FangSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FangSelect_C::ExecuteUbergraph_Fang_expedition_FangSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.ExecuteUbergraph_Fang_expedition_FangSelect");
		
		UFang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.OnFangSelectChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_FangSelect_C::OnFangSelectChange__DelegateSignature(TArray<class FString>* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.OnFangSelectChange__DelegateSignature");
		
		UFang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_FangSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_FangSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_FangSelect.Fang_expedition_FangSelect_C");
		return ptr;
	}

}



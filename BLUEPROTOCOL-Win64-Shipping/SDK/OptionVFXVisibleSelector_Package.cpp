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
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.IsSkipTableRegisted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBBattleEffectVisibleCategory                     Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBBattleEffectVisibleType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRegisted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionVFXVisibleSelector_C::IsSkipTableRegisted(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool* IsRegisted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.IsSkipTableRegisted");
		
		UOptionVFXVisibleSelector_C_IsSkipTableRegisted_Params params {};
		params.Category = Category;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRegisted != nullptr)
			*IsRegisted = params.IsRegisted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionVFXVisibleSelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.PreConstruct");
		
		UOptionVFXVisibleSelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionVFXVisibleSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Construct");
		
		UOptionVFXVisibleSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.GenerateVFXItems
	 * 		Flags  -> ()
	 */
	void UOptionVFXVisibleSelector_C::GenerateVFXItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.GenerateVFXItems");
		
		UOptionVFXVisibleSelector_C_GenerateVFXItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.UpdateVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBBattleEffectVisibleCategory                     Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBBattleEffectVisibleType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Vidsible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionVFXVisibleSelector_C::UpdateVisible(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool Vidsible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.UpdateVisible");
		
		UOptionVFXVisibleSelector_C_UpdateVisible_Params params {};
		params.Category = Category;
		params.Type = Type;
		params.Vidsible = Vidsible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionVFXVisibleSelector_C::BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UOptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionVFXVisibleSelector_C::BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UOptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.InitializeCheck
	 * 		Flags  -> ()
	 */
	void UOptionVFXVisibleSelector_C::InitializeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.InitializeCheck");
		
		UOptionVFXVisibleSelector_C_InitializeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOptionVFXVisibleSelector_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Destruct");
		
		UOptionVFXVisibleSelector_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.ExecuteUbergraph_OptionVFXVisibleSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionVFXVisibleSelector_C::ExecuteUbergraph_OptionVFXVisibleSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.ExecuteUbergraph_OptionVFXVisibleSelector");
		
		UOptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionVFXVisibleSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionVFXVisibleSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionVFXVisibleSelector.OptionVFXVisibleSelector_C");
		return ptr;
	}

}



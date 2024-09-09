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
	 * 		Name   -> Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Initialize
	 * 		Flags  -> ()
	 */
	void UUsedCheck_CheckBox_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Initialize");
		
		UUsedCheck_CheckBox_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UUsedCheck_CheckBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Construct");
		
		UUsedCheck_CheckBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUsedCheck_CheckBox_C::BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.ExecuteUbergraph_UsedCheck_CheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUsedCheck_CheckBox_C::ExecuteUbergraph_UsedCheck_CheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.ExecuteUbergraph_UsedCheck_CheckBox");
		
		UUsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.OnChangeFlag__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUseCheckDialogType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUsedCheck_CheckBox_C::OnChangeFlag__DelegateSignature(ESBUseCheckDialogType Type, bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.OnChangeFlag__DelegateSignature");
		
		UUsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature_Params params {};
		params.Type = Type;
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsedCheck_CheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsedCheck_CheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UsedCheck_CheckBox.UsedCheck_CheckBox_C");
		return ptr;
	}

}



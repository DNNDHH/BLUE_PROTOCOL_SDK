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
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.ResetCkeckState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBEventShopStorage                                Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopStorageSelect_C::ResetCkeckState(ESBEventShopStorage Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.ResetCkeckState");
		
		UEventShopStorageSelect_C_ResetCkeckState_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.Initialize
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.Initialize");
		
		UEventShopStorageSelect_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.Hide
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.Hide");
		
		UEventShopStorageSelect_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.Show
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.Show");
		
		UEventShopStorageSelect_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.UpdateCheckState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBCheckBox_C*                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBCheckBox_C*                               Off1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBCheckBox_C*                               Off2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBEventShopStorage                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopStorageSelect_C::UpdateCheckState(class USBCheckBox_C* On, class USBCheckBox_C* Off1, class USBCheckBox_C* Off2, ESBEventShopStorage Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.UpdateCheckState");
		
		UEventShopStorageSelect_C_UpdateCheckState_Params params {};
		params.On = On;
		params.Off1 = Off1;
		params.Off2 = Off2;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopStorageSelect_C::BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopStorageSelect_C::BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopStorageSelect_C::BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.OnAnimFinish_Event
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::OnAnimFinish_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.OnAnimFinish_Event");
		
		UEventShopStorageSelect_C_OnAnimFinish_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.Construct");
		
		UEventShopStorageSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.ExecuteUbergraph_EventShopStorageSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopStorageSelect_C::ExecuteUbergraph_EventShopStorageSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.ExecuteUbergraph_EventShopStorageSelect");
		
		UEventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopStorageSelect.EventShopStorageSelect_C.OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopStorageSelect_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopStorageSelect.EventShopStorageSelect_C.OnClosed__DelegateSignature");
		
		UEventShopStorageSelect_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopStorageSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopStorageSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopStorageSelect.EventShopStorageSelect_C");
		return ptr;
	}

}



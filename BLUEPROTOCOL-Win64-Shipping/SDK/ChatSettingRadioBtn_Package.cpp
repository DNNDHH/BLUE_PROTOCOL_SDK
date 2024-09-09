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
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.InitBtnSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingRadioBtn_C::InitBtnSetting(int32_t BtnId, bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.InitBtnSetting");
		
		UChatSettingRadioBtn_C_InitBtnSetting_Params params {};
		params.BtnId = BtnId;
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingRadioBtn_C::BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UChatSettingRadioBtn_C_BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingRadioBtn_C::BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UChatSettingRadioBtn_C_BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.UpdateBlocker
	 * 		Flags  -> ()
	 */
	void UChatSettingRadioBtn_C::UpdateBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.UpdateBlocker");
		
		UChatSettingRadioBtn_C_UpdateBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatSettingRadioBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.Construct");
		
		UChatSettingRadioBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingRadioBtn_C::BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UChatSettingRadioBtn_C_BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingRadioBtn_C::BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UChatSettingRadioBtn_C_BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.ExecuteUbergraph_ChatSettingRadioBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingRadioBtn_C::ExecuteUbergraph_ChatSettingRadioBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.ExecuteUbergraph_ChatSettingRadioBtn");
		
		UChatSettingRadioBtn_C_ExecuteUbergraph_ChatSettingRadioBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.OnChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingRadioBtn_C::OnChange__DelegateSignature(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.OnChange__DelegateSignature");
		
		UChatSettingRadioBtn_C_OnChange__DelegateSignature_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatSettingRadioBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatSettingRadioBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatSettingRadioBtn.ChatSettingRadioBtn_C");
		return ptr;
	}

}



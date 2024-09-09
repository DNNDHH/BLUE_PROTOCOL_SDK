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
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetPadAssignedColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UKeyConfig_ConfigSlot_C::GetPadAssignedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetPadAssignedColor");
		
		UKeyConfig_ConfigSlot_C_GetPadAssignedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetKBAssignedColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UKeyConfig_ConfigSlot_C::GetKBAssignedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetKBAssignedColor");
		
		UKeyConfig_ConfigSlot_C_GetKBAssignedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is KB Need Assigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNeedAssined                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::IsKBNeedAssigned(bool* IsNeedAssined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is KB Need Assigned");
		
		UKeyConfig_ConfigSlot_C_IsKBNeedAssigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNeedAssined != nullptr)
			*IsNeedAssined = params.IsNeedAssined;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is Pad Need Assigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNeedAssined                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::IsPadNeedAssigned(bool* IsNeedAssined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.Is Pad Need Assigned");
		
		UKeyConfig_ConfigSlot_C_IsPadNeedAssigned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNeedAssined != nullptr)
			*IsNeedAssined = params.IsNeedAssined;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.InitializeNeedType
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::InitializeNeedType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.InitializeNeedType");
		
		UKeyConfig_ConfigSlot_C_InitializeNeedType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ConvertBookMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             ConfigType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBBookMarkerSlot                                  Slot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::ConvertBookMark(EConfig_KeyconfigItems ConfigType, bool* bIsValid, ESBBookMarkerSlot* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ConvertBookMark");
		
		UKeyConfig_ConfigSlot_C_ConvertBookMark_Params params {};
		params.ConfigType = ConfigType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.IsBookMarks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyConfigItems                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBookMark                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::IsBookMarks(EConfig_KeyconfigItems KeyConfigItems, bool* IsBookMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.IsBookMarks");
		
		UKeyConfig_ConfigSlot_C_IsBookMarks_Params params {};
		params.KeyConfigItems = KeyConfigItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBookMark != nullptr)
			*IsBookMark = params.IsBookMark;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetItemStringId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TextId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::GetItemStringId(EConfig_KeyconfigItems Type, int32_t* TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetItemStringId");
		
		UKeyConfig_ConfigSlot_C_GetItemStringId_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextId != nullptr)
			*TextId = params.TextId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ResetInputMode
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::ResetInputMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ResetInputMode");
		
		UKeyConfig_ConfigSlot_C_ResetInputMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature");
		
		UKeyConfig_ConfigSlot_C_BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyConfigType                              ConfigData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::SetData(const struct FKeyConfigType& ConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetData");
		
		UKeyConfig_ConfigSlot_C_SetData_Params params {};
		params.ConfigData = ConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.CheckChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChanged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::CheckChanged(bool bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.CheckChanged");
		
		UKeyConfig_ConfigSlot_C_CheckChanged_Params params {};
		params.bChanged = bChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetKeyMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigKeyboardKey                            KeyboardKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigMouseKey                               MouseKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::SetKeyMouse(ESBKeyConfigKeyboardKey KeyboardKey, ESBKeyConfigMouseKey MouseKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetKeyMouse");
		
		UKeyConfig_ConfigSlot_C_SetKeyMouse_Params params {};
		params.KeyboardKey = KeyboardKey;
		params.MouseKey = MouseKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetGamePadButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigGamepadKey                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwichLR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::SetGamePadButton(ESBKeyConfigGamepadKey Selection, bool bSwichLR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetGamePadButton");
		
		UKeyConfig_ConfigSlot_C_SetGamePadButton_Params params {};
		params.Selection = Selection;
		params.bSwichLR = bSwichLR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.KeyMouseChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeyMouseChanged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::KeyMouseChanged(bool KeyMouseChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.KeyMouseChanged");
		
		UKeyConfig_ConfigSlot_C_KeyMouseChanged_Params params {};
		params.KeyMouseChanged = KeyMouseChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.PadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PadChanged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::PadChanged(bool PadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.PadChanged");
		
		UKeyConfig_ConfigSlot_C_PadChanged_Params params {};
		params.PadChanged = PadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ApplySlateWidget
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::ApplySlateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ApplySlateWidget");
		
		UKeyConfig_ConfigSlot_C_ApplySlateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");
		
		UKeyConfig_ConfigSlot_C_BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetRequireSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRequire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_ConfigSlot_C::SetRequireSetting(bool bRequire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetRequireSetting");
		
		UKeyConfig_ConfigSlot_C_SetRequireSetting_Params params {};
		params.bRequire = bRequire;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ExecuteUbergraph_KeyConfig_ConfigSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::ExecuteUbergraph_KeyConfig_ConfigSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ExecuteUbergraph_KeyConfig_ConfigSlot");
		
		UKeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Pad__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_ConfigSlot_C*                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::ButtonClicked_Pad__DelegateSignature(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Pad__DelegateSignature");
		
		UKeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature_Params params {};
		params.KeyType = KeyType;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Key__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_ConfigSlot_C*                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_ConfigSlot_C::ButtonClicked_Key__DelegateSignature(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Key__DelegateSignature");
		
		UKeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature_Params params {};
		params.KeyType = KeyType;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.StartWaitInput__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyConfig_ConfigSlot_C::StartWaitInput__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.StartWaitInput__DelegateSignature");
		
		UKeyConfig_ConfigSlot_C_StartWaitInput__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfig_ConfigSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfig_ConfigSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C");
		return ptr;
	}

}



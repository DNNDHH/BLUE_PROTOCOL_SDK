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
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.ExecChangeKeyGuide
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::ExecChangeKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.ExecChangeKeyGuide");
		
		UKeyGuide2_C_ExecChangeKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.GetPlayerClassKeyConfigData
	 * 		Flags  -> ()
	 */
	struct FSBPlayerClassKeyConfigData UKeyGuide2_C::GetPlayerClassKeyConfigData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.GetPlayerClassKeyConfigData");
		
		UKeyGuide2_C_GetPlayerClassKeyConfigData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetIsMount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetIsMount(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetIsMount");
		
		UKeyGuide2_C_SetIsMount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetKeyConfig_OfflineBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetKeyConfig_OfflineBattle(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetKeyConfig_OfflineBattle");
		
		UKeyGuide2_C_SetKeyConfig_OfflineBattle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetKeyConfig_Cty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetKeyConfig_Cty(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetKeyConfig_Cty");
		
		UKeyGuide2_C_SetKeyConfig_Cty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetCheerfulItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetCheerfulItem(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetCheerfulItem");
		
		UKeyGuide2_C_SetCheerfulItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetKeyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetKeyConfig(bool* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetKeyConfig");
		
		UKeyGuide2_C_SetKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.IsKeyGuideAuto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAuto                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::IsKeyGuideAuto(bool* bAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.IsKeyGuideAuto");
		
		UKeyGuide2_C_IsKeyGuideAuto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAuto != nullptr)
			*bAuto = params.bAuto;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.Construct
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.Construct");
		
		UKeyGuide2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.ChangeKeyGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyGuideType                                      InKeyGuideType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide2_C::ChangeKeyGuide(EKeyGuideType InKeyGuideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.ChangeKeyGuide");
		
		UKeyGuide2_C_ChangeKeyGuide_Params params {};
		params.InKeyGuideType = InKeyGuideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibility
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::ChangeKeyGuideVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibility");
		
		UKeyGuide2_C_ChangeKeyGuideVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnUpdateKeyConfig
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::OnUpdateKeyConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnUpdateKeyConfig");
		
		UKeyGuide2_C_OnUpdateKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnRetryKeyGuideType
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::OnRetryKeyGuideType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnRetryKeyGuideType");
		
		UKeyGuide2_C_OnRetryKeyGuideType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.PreConstruct");
		
		UKeyGuide2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnAdventurerRankDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide2_C::OnAdventurerRankDelegate_Event(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnAdventurerRankDelegate_Event");
		
		UKeyGuide2_C_OnAdventurerRankDelegate_Event_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibilityAuto
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::ChangeKeyGuideVisibilityAuto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibilityAuto");
		
		UKeyGuide2_C_ChangeKeyGuideVisibilityAuto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::SetEditMode(bool bIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.SetEditMode");
		
		UKeyGuide2_C_SetEditMode_Params params {};
		params.bIsEdit = bIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.UnbindAdventurerRankDelegate
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::UnbindAdventurerRankDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.UnbindAdventurerRankDelegate");
		
		UKeyGuide2_C_UnbindAdventurerRankDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.Destruct
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.Destruct");
		
		UKeyGuide2_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.UnbindUpdateKeyConfigDelegate
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::UnbindUpdateKeyConfigDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.UnbindUpdateKeyConfigDelegate");
		
		UKeyGuide2_C_UnbindUpdateKeyConfigDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide2_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.CustomEvent_1");
		
		UKeyGuide2_C_CustomEvent_1_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnChangePad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide2_C::OnChangePad(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnChangePad");
		
		UKeyGuide2_C_OnChangePad_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.Bind Pad Skin Change
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::BindPadSkinChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.Bind Pad Skin Change");
		
		UKeyGuide2_C_BindPadSkinChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.Unbind Pad Skin Change
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::UnbindPadSkinChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.Unbind Pad Skin Change");
		
		UKeyGuide2_C_UnbindPadSkinChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.InitKeyGuideSettingTimerEvent
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::InitKeyGuideSettingTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.InitKeyGuideSettingTimerEvent");
		
		UKeyGuide2_C_InitKeyGuideSettingTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.ExecuteUbergraph_KeyGuide2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide2_C::ExecuteUbergraph_KeyGuide2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.ExecuteUbergraph_KeyGuide2");
		
		UKeyGuide2_C_ExecuteUbergraph_KeyGuide2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnCheerfulItemEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheerfulItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnCheerfulItemEvent__DelegateSignature");
		
		UKeyGuide2_C_OnCheerfulItemEvent__DelegateSignature_Params params {};
		params.IsCheerfulItem = IsCheerfulItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnChangeMountEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide2_C::OnChangeMountEvent__DelegateSignature(bool IsMount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnChangeMountEvent__DelegateSignature");
		
		UKeyGuide2_C_OnChangeMountEvent__DelegateSignature_Params params {};
		params.IsMount = IsMount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide2.KeyGuide2_C.OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyGuide2_C::OnChangeKeyGuideVisibilityEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide2.KeyGuide2_C.OnChangeKeyGuideVisibilityEvent__DelegateSignature");
		
		UKeyGuide2_C_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide2.KeyGuide2_C");
		return ptr;
	}

}



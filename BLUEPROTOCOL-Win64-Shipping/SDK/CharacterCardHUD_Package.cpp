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
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.ResetMenuMode
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::ResetMenuMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.ResetMenuMode");
		
		UCharacterCardHUD_C_ResetMenuMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.SetMenuMode
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::SetMenuMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.SetMenuMode");
		
		UCharacterCardHUD_C_SetMenuMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.GetIsAdventurerCardOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutIsOpened                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardHUD_C::GetIsAdventurerCardOpened(bool* bOutIsOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.GetIsAdventurerCardOpened");
		
		UCharacterCardHUD_C_GetIsAdventurerCardOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsOpened != nullptr)
			*bOutIsOpened = params.bOutIsOpened;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.ExecShowOrHideHUD
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::ExecShowOrHideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.ExecShowOrHideHUD");
		
		UCharacterCardHUD_C_ExecShowOrHideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.HideHUD
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::HideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.HideHUD");
		
		UCharacterCardHUD_C_HideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.ShowHUD
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.ShowHUD");
		
		UCharacterCardHUD_C_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.PreConstruct");
		
		UCharacterCardHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.Destruct");
		
		UCharacterCardHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature");
		
		UCharacterCardHUD_C_BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1");
		
		UCharacterCardHUD_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UCharacterCardHUD_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InPartyMemberCharacterIds                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCharacterCardHUD_C::OnInitialize(TArray<class FString> InPartyMemberCharacterIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnInitialize");
		
		UCharacterCardHUD_C_OnInitialize_Params params {};
		params.InPartyMemberCharacterIds = InPartyMemberCharacterIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.ForceAdventurerCardClose
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::ForceAdventurerCardClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.ForceAdventurerCardClose");
		
		UCharacterCardHUD_C_ForceAdventurerCardClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnCloseHUD
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::OnCloseHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnCloseHUD");
		
		UCharacterCardHUD_C_OnCloseHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResetMenuModeOnly                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardHUD_C::OnCloseCharacterCard(bool InResetMenuModeOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCard");
		
		UCharacterCardHUD_C_OnCloseCharacterCard_Params params {};
		params.InResetMenuModeOnly = InResetMenuModeOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.InitializeForDebug
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::InitializeForDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.InitializeForDebug");
		
		UCharacterCardHUD_C_InitializeForDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCardForDebug
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::OnCloseCharacterCardForDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCardForDebug");
		
		UCharacterCardHUD_C_OnCloseCharacterCardForDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnIsNewMemberFoundInParty
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::OnIsNewMemberFoundInParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnIsNewMemberFoundInParty");
		
		UCharacterCardHUD_C_OnIsNewMemberFoundInParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnCharacterCardShowHideKeyPressed
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::OnCharacterCardShowHideKeyPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnCharacterCardShowHideKeyPressed");
		
		UCharacterCardHUD_C_OnCharacterCardShowHideKeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.ExecuteUbergraph_CharacterCardHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardHUD_C::ExecuteUbergraph_CharacterCardHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.ExecuteUbergraph_CharacterCardHUD");
		
		UCharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardHUD.CharacterCardHUD_C.OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardHUD_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardHUD.CharacterCardHUD_C.OnClosed__DelegateSignature");
		
		UCharacterCardHUD_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterCardHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterCardHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterCardHUD.CharacterCardHUD_C");
		return ptr;
	}

}



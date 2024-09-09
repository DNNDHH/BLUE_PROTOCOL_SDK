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
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.SetIsCardInfoHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsInfoHidden                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardBase_C::SetIsCardInfoHidden(bool bInIsInfoHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.SetIsCardInfoHidden");
		
		UCharacterCardBase_C_SetIsCardInfoHidden_Params params {};
		params.bInIsInfoHidden = bInIsInfoHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.SetIsBlankCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsBlank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardBase_C::SetIsBlankCard(bool bInIsBlank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.SetIsBlankCard");
		
		UCharacterCardBase_C_SetIsBlankCard_Params params {};
		params.bInIsBlank = bInIsBlank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerCharacterCardData                  InCharacterCardData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bInIsMe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBPartyMemberState*                         InPartyMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardBase_C::SetCharacterCardData(const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardData");
		
		UCharacterCardBase_C_SetCharacterCardData_Params params {};
		params.InCharacterCardData = InCharacterCardData;
		params.bInIsMe = bInIsMe;
		params.InPartyMemberState = InPartyMemberState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterCardType                                 InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsReceptingParticipants                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardBase_C::SetCharacterCardType(ECharacterCardType InType, bool bInIsReceptingParticipants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardType");
		
		UCharacterCardBase_C_SetCharacterCardType_Params params {};
		params.InType = InType;
		params.bInIsReceptingParticipants = bInIsReceptingParticipants;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.PreConstruct");
		
		UCharacterCardBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.Construct");
		
		UCharacterCardBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature");
		
		UCharacterCardBase_C_BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.Destruct");
		
		UCharacterCardBase_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature");
		
		UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature");
		
		UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature");
		
		UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.StartNewPartyMemberInAnimation
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::StartNewPartyMemberInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.StartNewPartyMemberInAnimation");
		
		UCharacterCardBase_C_StartNewPartyMemberInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.ExecuteUbergraph_CharacterCardBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardBase_C::ExecuteUbergraph_CharacterCardBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.ExecuteUbergraph_CharacterCardBase");
		
		UCharacterCardBase_C_ExecuteUbergraph_CharacterCardBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.OnSendLike__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardBase_C::OnSendLike__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.OnSendLike__DelegateSignature");
		
		UCharacterCardBase_C_OnSendLike__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardBase.CharacterCardBase_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsMe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardBase_C::OnClicked__DelegateSignature(const class FString& InCharacterId, bool bInIsMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardBase.CharacterCardBase_C.OnClicked__DelegateSignature");
		
		UCharacterCardBase_C_OnClicked__DelegateSignature_Params params {};
		params.InCharacterId = InCharacterId;
		params.bInIsMe = bInIsMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterCardBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterCardBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterCardBase.CharacterCardBase_C");
		return ptr;
	}

}



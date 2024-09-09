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
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Send Answer To Invited Guild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildRecruitmentDetailCard_C::SendAnswerToInvitedGuild(bool bIsAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Send Answer To Invited Guild");
		
		UGuildRecruitmentDetailCard_C_SendAnswerToInvitedGuild_Params params {};
		params.bIsAccept = bIsAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Entry Refuse
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::GuildEntryRefuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Entry Refuse");
		
		UGuildRecruitmentDetailCard_C_GuildEntryRefuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Refuse
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::GuildInviteRefuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Refuse");
		
		UGuildRecruitmentDetailCard_C_GuildInviteRefuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Accept
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::GuildInviteAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Accept");
		
		UGuildRecruitmentDetailCard_C_GuildInviteAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildData                                  GuildData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGuildEntryData                             GuildEntryData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bInvite                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildRecruitmentDetailCard_C::Initialize(const struct FGuildData& GuildData, const struct FGuildEntryData& GuildEntryData, bool bInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Initialize");
		
		UGuildRecruitmentDetailCard_C_Initialize_Params params {};
		params.GuildData = GuildData;
		params.GuildEntryData = GuildEntryData;
		params.bInvite = bInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildRecruitmentDetailCard_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.GetGuildComp");
		
		UGuildRecruitmentDetailCard_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteAccept
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Event_GuildInviteAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteAccept");
		
		UGuildRecruitmentDetailCard_C_Event_GuildInviteAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildEntryRefuse
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Event_GuildEntryRefuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildEntryRefuse");
		
		UGuildRecruitmentDetailCard_C_Event_GuildEntryRefuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteRefuse
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Event_GuildInviteRefuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteRefuse");
		
		UGuildRecruitmentDetailCard_C_Event_GuildInviteRefuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedInviteArraignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentDetailCard_C::Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedInviteArraignment");
		
		UGuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment_Params params {};
		params.RetCode = RetCode;
		params.isAccept = isAccept;
		params.InEntryId = InEntryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnClose
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Event_OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnClose");
		
		UGuildRecruitmentDetailCard_C_Event_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildRecruitmentDetailCard_C_BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Construct");
		
		UGuildRecruitmentDetailCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedCancelEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentDetailCard_C::Event_OnCompletedCancelEntry(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedCancelEntry");
		
		UGuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UGuildRecruitmentDetailCard_C_BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnEscape
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentDetailCard_C::Event_OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnEscape");
		
		UGuildRecruitmentDetailCard_C_Event_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.ExecuteUbergraph_GuildRecruitmentDetailCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentDetailCard_C::ExecuteUbergraph_GuildRecruitmentDetailCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.ExecuteUbergraph_GuildRecruitmentDetailCard");
		
		UGuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRecruitmentDetailCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRecruitmentDetailCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C");
		return ptr;
	}

}



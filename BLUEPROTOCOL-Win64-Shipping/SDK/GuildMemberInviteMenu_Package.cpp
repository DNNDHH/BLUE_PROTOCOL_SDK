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
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.DeleteSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::DeleteSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.DeleteSwapBlocker");
		
		UGuildMemberInviteMenu_C_DeleteSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.CreateSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::CreateSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.CreateSwapBlocker");
		
		UGuildMemberInviteMenu_C_CreateSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.UpdateButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberInviteMenu_C::UpdateButtons(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.UpdateButtons");
		
		UGuildMemberInviteMenu_C_UpdateButtons_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildMemberInviteMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.GetGuildComp");
		
		UGuildMemberInviteMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Construct");
		
		UGuildMemberInviteMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGetProfile_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::OnCompletedGetProfile_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGetProfile_Event");
		
		UGuildMemberInviteMenu_C_OnCompletedGetProfile_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.PlayerProfileClose_Event
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::PlayerProfileClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.PlayerProfileClose_Event");
		
		UGuildMemberInviteMenu_C_PlayerProfileClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature");
		
		UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Destruct");
		
		UGuildMemberInviteMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedInviteMemberList_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::OnCompletedInviteMemberList_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedInviteMemberList_Event");
		
		UGuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnInviteCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::OnInviteCancel(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnInviteCancel");
		
		UGuildMemberInviteMenu_C_OnInviteCancel_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGuildCancelInvitation_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::OnCompletedGuildCancelInvitation_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGuildCancelInvitation_Event");
		
		UGuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature");
		
		UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OpenReportUI_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OpenReportUI_Event");
		
		UGuildMemberInviteMenu_C_OpenReportUI_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.ExecuteUbergraph_GuildMemberInviteMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInviteMenu_C::ExecuteUbergraph_GuildMemberInviteMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.ExecuteUbergraph_GuildMemberInviteMenu");
		
		UGuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMemberInviteMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMemberInviteMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMemberInviteMenu.GuildMemberInviteMenu_C");
		return ptr;
	}

}



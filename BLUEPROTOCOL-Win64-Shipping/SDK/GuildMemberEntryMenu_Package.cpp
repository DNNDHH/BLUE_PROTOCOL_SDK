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
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.DeleteSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::DeleteSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.DeleteSwapBlocker");
		
		UGuildMemberEntryMenu_C_DeleteSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CreateSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::CreateSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CreateSwapBlocker");
		
		UGuildMemberEntryMenu_C_CreateSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetEntryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::GetEntryCount(int32_t* EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetEntryCount");
		
		UGuildMemberEntryMenu_C_GetEntryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryCount != nullptr)
			*EntryCount = params.EntryCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GenerateEntries
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::GenerateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GenerateEntries");
		
		UGuildMemberEntryMenu_C_GenerateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildMemberEntryMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetGuildComp");
		
		UGuildMemberEntryMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Construct");
		
		UGuildMemberEntryMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::UpdateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateButtons");
		
		UGuildMemberEntryMenu_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Destruct");
		
		UGuildMemberEntryMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedAcceptMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::CompletedAcceptMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedAcceptMember");
		
		UGuildMemberEntryMenu_C_CompletedAcceptMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Remove Selected
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::RemoveSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Remove Selected");
		
		UGuildMemberEntryMenu_C_RemoveSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedDenyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::CompletedDenyMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedDenyMember");
		
		UGuildMemberEntryMenu_C_CompletedDenyMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedGGetEntryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::CompletedGGetEntryList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedGGetEntryList");
		
		UGuildMemberEntryMenu_C_CompletedGGetEntryList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateEntries
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::UpdateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateEntries");
		
		UGuildMemberEntryMenu_C_UpdateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
		
		UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompleteOnIsGetPlayerProfileDetailMenuDataDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::CompleteOnIsGetPlayerProfileDetailMenuDataDelegate(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompleteOnIsGetPlayerProfileDetailMenuDataDelegate");
		
		UGuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate_Params params {};
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
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryDeny
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::OnEntryDeny(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryDeny");
		
		UGuildMemberEntryMenu_C_OnEntryDeny_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryAccept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::OnEntryAccept(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryAccept");
		
		UGuildMemberEntryMenu_C_OnEntryAccept_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OpenReportUI_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OpenReportUI_Event");
		
		UGuildMemberEntryMenu_C_OpenReportUI_Event_Params params {};
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
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_PlayerReportChangeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::Event_PlayerReportChangeVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_PlayerReportChangeVisibility");
		
		UGuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_CancelKeyPushed
	 * 		Flags  -> ()
	 */
	void UGuildMemberEntryMenu_C::Event_CancelKeyPushed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_CancelKeyPushed");
		
		UGuildMemberEntryMenu_C_Event_CancelKeyPushed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.ExecuteUbergraph_GuildMemberEntryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberEntryMenu_C::ExecuteUbergraph_GuildMemberEntryMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.ExecuteUbergraph_GuildMemberEntryMenu");
		
		UGuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMemberEntryMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMemberEntryMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMemberEntryMenu.GuildMemberEntryMenu_C");
		return ptr;
	}

}



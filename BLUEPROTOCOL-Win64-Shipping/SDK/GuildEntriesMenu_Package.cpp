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
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.DeleteSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::DeleteSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.DeleteSwapBlocker");
		
		UGuildEntriesMenu_C_DeleteSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.CreateSwapBlocker
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::CreateSwapBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.CreateSwapBlocker");
		
		UGuildEntriesMenu_C_CreateSwapBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.PSonlyDiffCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PSOnlyDiff                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildEntriesMenu_C::PSonlyDiffCheck(bool* PSOnlyDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.PSonlyDiffCheck");
		
		UGuildEntriesMenu_C_PSonlyDiffCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PSOnlyDiff != nullptr)
			*PSOnlyDiff = params.PSOnlyDiff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.Get Guild Comp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildEntriesMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.Get Guild Comp");
		
		UGuildEntriesMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.GenerateEntries
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::GenerateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.GenerateEntries");
		
		UGuildEntriesMenu_C_GenerateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.Construct");
		
		UGuildEntriesMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
		
		UGuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::UpdateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.UpdateButtons");
		
		UGuildEntriesMenu_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.Initialize");
		
		UGuildEntriesMenu_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BindInitailize
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::BindInitailize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BindInitailize");
		
		UGuildEntriesMenu_C_BindInitailize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.OnMemberAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::OnMemberAccepted(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.OnMemberAccepted");
		
		UGuildEntriesMenu_C_OnMemberAccepted_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.Remove Selected
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::RemoveSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.Remove Selected");
		
		UGuildEntriesMenu_C_RemoveSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.OnMember Denied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::OnMemberDenied(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.OnMember Denied");
		
		UGuildEntriesMenu_C_OnMemberDenied_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.On Update Guild Member List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::OnUpdateGuildMemberList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.On Update Guild Member List");
		
		UGuildEntriesMenu_C_OnUpdateGuildMemberList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.EntryUpdate
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::EntryUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.EntryUpdate");
		
		UGuildEntriesMenu_C_EntryUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.OnConpletedGetProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::OnConpletedGetProfile(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.OnConpletedGetProfile");
		
		UGuildEntriesMenu_C_OnConpletedGetProfile_Params params {};
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
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.OpenReportUI_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.OpenReportUI_Event");
		
		UGuildEntriesMenu_C_OpenReportUI_Event_Params params {};
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
	 * 		Name   -> Function GuildEntriesMenu.GuildEntriesMenu_C.ExecuteUbergraph_GuildEntriesMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesMenu_C::ExecuteUbergraph_GuildEntriesMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesMenu.GuildEntriesMenu_C.ExecuteUbergraph_GuildEntriesMenu");
		
		UGuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildEntriesMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildEntriesMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildEntriesMenu.GuildEntriesMenu_C");
		return ptr;
	}

}



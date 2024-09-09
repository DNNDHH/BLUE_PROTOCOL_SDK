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
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.UpdateSelectGuideText
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentMenu_C::UpdateSelectGuideText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.UpdateSelectGuideText");
		
		UGuildRecruitmentMenu_C_UpdateSelectGuideText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildRecruitmentMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.GetGuildComp");
		
		UGuildRecruitmentMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Construct");
		
		UGuildRecruitmentMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntryData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRecruitmentMenu_C::BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");
		
		UGuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature_Params params {};
		params.GuildEntryData = GuildEntryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetInviteList_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentMenu_C::OnCompletedGetInviteList_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetInviteList_Event");
		
		UGuildRecruitmentMenu_C_OnCompletedGetInviteList_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetSendedEntries_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentMenu_C::OnCompletedGetSendedEntries_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetSendedEntries_Event");
		
		UGuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Event_OnGetedGuildDatail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuildData                                  InGuildData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildRecruitmentMenu_C::Event_OnGetedGuildDatail(int32_t RetCode, const struct FGuildData& InGuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Event_OnGetedGuildDatail");
		
		UGuildRecruitmentMenu_C_Event_OnGetedGuildDatail_Params params {};
		params.RetCode = RetCode;
		params.InGuildData = InGuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.ExecuteUbergraph_GuildRecruitmentMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentMenu_C::ExecuteUbergraph_GuildRecruitmentMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.ExecuteUbergraph_GuildRecruitmentMenu");
		
		UGuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnSelectRecruitmentEntryItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRecruitmentMenu_C::OnSelectRecruitmentEntryItem__DelegateSignature(const struct FGuildEntryData& GuildEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnSelectRecruitmentEntryItem__DelegateSignature");
		
		UGuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature_Params params {};
		params.GuildEntry = GuildEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRecruitmentMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRecruitmentMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRecruitmentMenu.GuildRecruitmentMenu_C");
		return ptr;
	}

}



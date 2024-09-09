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
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateSubMenuButtonStateByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SubButtonIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::UpdateSubMenuButtonStateByIndex(int32_t SubButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateSubMenuButtonStateByIndex");
		
		UGuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex_Params params {};
		params.SubButtonIndex = SubButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildMemberInfoMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.GetGuildComp");
		
		UGuildMemberInfoMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildMemberInfoMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Construct");
		
		UGuildMemberInfoMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.SelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::SelectTab(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.SelectTab");
		
		UGuildMemberInfoMenu_C_SelectTab_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UGuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateCommandMenuBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::UpdateCommandMenuBG(int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateCommandMenuBG");
		
		UGuildMemberInfoMenu_C_UpdateCommandMenuBG_Params params {};
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildMemberInfoMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Destruct");
		
		UGuildMemberInfoMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedGGetEntryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::CompletedGGetEntryList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedGGetEntryList");
		
		UGuildMemberInfoMenu_C_CompletedGGetEntryList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedAcceptMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::CompletedAcceptMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedAcceptMember");
		
		UGuildMemberInfoMenu_C_CompletedAcceptMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedDenyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::CompletedDenyMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedDenyMember");
		
		UGuildMemberInfoMenu_C_CompletedDenyMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.OnAddedNewMember
	 * 		Flags  -> ()
	 */
	void UGuildMemberInfoMenu_C::OnAddedNewMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.OnAddedNewMember");
		
		UGuildMemberInfoMenu_C_OnAddedNewMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Event_CloseFromChildren
	 * 		Flags  -> ()
	 */
	void UGuildMemberInfoMenu_C::Event_CloseFromChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Event_CloseFromChildren");
		
		UGuildMemberInfoMenu_C_Event_CloseFromChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.ExecuteUbergraph_GuildMemberInfoMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberInfoMenu_C::ExecuteUbergraph_GuildMemberInfoMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.ExecuteUbergraph_GuildMemberInfoMenu");
		
		UGuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMemberInfoMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMemberInfoMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMemberInfoMenu.GuildMemberInfoMenu_C");
		return ptr;
	}

}



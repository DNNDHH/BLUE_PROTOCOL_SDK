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
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.InitChangeTypeBtn
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::InitChangeTypeBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.InitChangeTypeBtn");
		
		UGuildMemberListItem_C_InitChangeTypeBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.SetInviteMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            GuildMemberData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildMemberListItem_C::SetInviteMemberData(const struct FGuildMemberData& GuildMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.SetInviteMemberData");
		
		UGuildMemberListItem_C_SetInviteMemberData_Params params {};
		params.GuildMemberData = GuildMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.GetMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (Parm, OutParm)
	 */
	void UGuildMemberListItem_C::GetMemberData(struct FGuildMemberData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.GetMemberData");
		
		UGuildMemberListItem_C_GetMemberData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberListItem_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.SetSelected");
		
		UGuildMemberListItem_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.InitializeMemberData
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::InitializeMemberData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.InitializeMemberData");
		
		UGuildMemberListItem_C_InitializeMemberData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.Set MemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            GuildMemberData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildMemberListItem_C::SetMemberData(const struct FGuildMemberData& GuildMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.Set MemberData");
		
		UGuildMemberListItem_C_SetMemberData_Params params {};
		params.GuildMemberData = GuildMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.PreConstruct");
		
		UGuildMemberListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.Construct");
		
		UGuildMemberListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildMemberListItem_C_BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnClosed");
		
		UGuildMemberListItem_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.Destruct");
		
		UGuildMemberListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMemberListPannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberListItem_C::OnSelectedMemberListPannel(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMemberListPannel");
		
		UGuildMemberListItem_C_OnSelectedMemberListPannel_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberInviteCancel_Event
	 * 		Flags  -> ()
	 */
	void UGuildMemberListItem_C::OnRequestGuildMemberInviteCancel_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberInviteCancel_Event");
		
		UGuildMemberListItem_C_OnRequestGuildMemberInviteCancel_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.ExecuteUbergraph_GuildMemberListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberListItem_C::ExecuteUbergraph_GuildMemberListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.ExecuteUbergraph_GuildMemberListItem");
		
		UGuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberListItem_C::OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberButtonClicked__DelegateSignature");
		
		UGuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnClickedCancelInvite__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGuildMemberListItem_C*                      MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberListItem_C::OnClickedCancelInvite__DelegateSignature(class UGuildMemberListItem_C* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnClickedCancelInvite__DelegateSignature");
		
		UGuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMember__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGuildMemberListItem_C*                      MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberListItem_C::OnSelectedMember__DelegateSignature(class UGuildMemberListItem_C* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMember__DelegateSignature");
		
		UGuildMemberListItem_C_OnSelectedMember__DelegateSignature_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMemberListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMemberListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMemberListItem.GuildMemberListItem_C");
		return ptr;
	}

}



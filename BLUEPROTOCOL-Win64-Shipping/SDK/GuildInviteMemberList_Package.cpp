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
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildInviteMemberList_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.GetGuildComp");
		
		UGuildInviteMemberList_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.GenerateInviteMemberData
	 * 		Flags  -> ()
	 */
	void UGuildInviteMemberList_C::GenerateInviteMemberData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.GenerateInviteMemberData");
		
		UGuildInviteMemberList_C_GenerateInviteMemberData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildInviteMemberList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.PreConstruct");
		
		UGuildInviteMemberList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildInviteMemberList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.Construct");
		
		UGuildInviteMemberList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildInviteMemberList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.Destruct");
		
		UGuildInviteMemberList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnCompletedInviteMemberList_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildInviteMemberList_C::OnCompletedInviteMemberList_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnCompletedInviteMemberList_Event");
		
		UGuildInviteMemberList_C_OnCompletedInviteMemberList_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnGuildMemberSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGuildMemberListItem_C*                      MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildInviteMemberList_C::OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnGuildMemberSelected");
		
		UGuildInviteMemberList_C_OnGuildMemberSelected_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGuildMemberListItem_C*                      MemberData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildInviteMemberList_C::OnClickedCancelInvite_Event(class UGuildMemberListItem_C* MemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite_Event");
		
		UGuildInviteMemberList_C_OnClickedCancelInvite_Event_Params params {};
		params.MemberData = MemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.ExecuteUbergraph_GuildInviteMemberList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildInviteMemberList_C::ExecuteUbergraph_GuildInviteMemberList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.ExecuteUbergraph_GuildInviteMemberList");
		
		UGuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildInviteMemberList_C::OnRequestGuildMemberButtonClicked__DelegateSignature(const struct FGuildMemberData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnRequestGuildMemberButtonClicked__DelegateSignature");
		
		UGuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildInviteMemberList_C::OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite__DelegateSignature");
		
		UGuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildInviteMemberList.GuildInviteMemberList_C.OnSelectedMemberData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildInviteMemberList_C::OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildInviteMemberList.GuildInviteMemberList_C.OnSelectedMemberData__DelegateSignature");
		
		UGuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildInviteMemberList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildInviteMemberList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildInviteMemberList.GuildInviteMemberList_C");
		return ptr;
	}

}



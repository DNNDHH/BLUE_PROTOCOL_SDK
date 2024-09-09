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
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildRecruitmentList_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.GetGuildComp");
		
		UGuildRecruitmentList_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildRecruitmentList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.PreConstruct");
		
		UGuildRecruitmentList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.Construct");
		
		UGuildRecruitmentList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetInviteList_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::OnCompletedGetInviteList_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetInviteList_Event");
		
		UGuildRecruitmentList_C_OnCompletedGetInviteList_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.Initialize");
		
		UGuildRecruitmentList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetSendedEntries_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::OnCompletedGetSendedEntries_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetSendedEntries_Event");
		
		UGuildRecruitmentList_C_OnCompletedGetSendedEntries_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGuildEntry_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::OnCompletedGuildEntry_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGuildEntry_Event");
		
		UGuildRecruitmentList_C_OnCompletedGuildEntry_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.Generate Entries
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentList_C::GenerateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.Generate Entries");
		
		UGuildRecruitmentList_C_GenerateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.GenerateInvites
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentList_C::GenerateInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.GenerateInvites");
		
		UGuildRecruitmentList_C_GenerateInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompleteCancelEntry_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::OnCompleteCancelEntry_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompleteCancelEntry_Event");
		
		UGuildRecruitmentList_C_OnCompleteCancelEntry_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.Event_OnCompletedInviteArraignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.Event_OnCompletedInviteArraignment");
		
		UGuildRecruitmentList_C_Event_OnCompletedInviteArraignment_Params params {};
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
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnInviteArrived_Event
	 * 		Flags  -> ()
	 */
	void UGuildRecruitmentList_C::OnInviteArrived_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnInviteArrived_Event");
		
		UGuildRecruitmentList_C_OnInviteArrived_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.Complete_OnClickedRecruitmentListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRecruitmentList_C::Complete_OnClickedRecruitmentListItem(const struct FGuildEntryData& GuildEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.Complete_OnClickedRecruitmentListItem");
		
		UGuildRecruitmentList_C_Complete_OnClickedRecruitmentListItem_Params params {};
		params.GuildEntry = GuildEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.ExecuteUbergraph_GuildRecruitmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildRecruitmentList_C::ExecuteUbergraph_GuildRecruitmentList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.ExecuteUbergraph_GuildRecruitmentList");
		
		UGuildRecruitmentList_C_ExecuteUbergraph_GuildRecruitmentList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildRecruitmentList.GuildRecruitmentList_C.OnClickedGuildEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntryData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildRecruitmentList_C::OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildRecruitmentList.GuildRecruitmentList_C.OnClickedGuildEntry__DelegateSignature");
		
		UGuildRecruitmentList_C_OnClickedGuildEntry__DelegateSignature_Params params {};
		params.GuildEntryData = GuildEntryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildRecruitmentList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildRecruitmentList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildRecruitmentList.GuildRecruitmentList_C");
		return ptr;
	}

}



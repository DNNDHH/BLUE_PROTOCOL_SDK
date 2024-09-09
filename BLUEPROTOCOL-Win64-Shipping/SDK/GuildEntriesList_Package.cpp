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
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildEntriesList_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.GetGuildComp");
		
		UGuildEntriesList_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildEntriesList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.PreConstruct");
		
		UGuildEntriesList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildEntriesList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.Construct");
		
		UGuildEntriesList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnCompletedOnClickedGuildEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGuildEntryItem_C*                           SelectedBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnCompletedOnClickedGuildEntry(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnCompletedOnClickedGuildEntry");
		
		UGuildEntriesList_C_OnCompletedOnClickedGuildEntry_Params params {};
		params.GuildEntry = GuildEntry;
		params.SelectedBtn = SelectedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetInviteList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnCompletedGetInviteList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetInviteList");
		
		UGuildEntriesList_C_OnCompletedGetInviteList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildEntriesList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.Initialize");
		
		UGuildEntriesList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetSendedEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnCompletedGetSendedEntries(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetSendedEntries");
		
		UGuildEntriesList_C_OnCompletedGetSendedEntries_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnCompletedGuildEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnCompletedGuildEntry(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnCompletedGuildEntry");
		
		UGuildEntriesList_C_OnCompletedGuildEntry_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.Generate Entries
	 * 		Flags  -> ()
	 */
	void UGuildEntriesList_C::GenerateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.Generate Entries");
		
		UGuildEntriesList_C_GenerateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.GenerateInvites
	 * 		Flags  -> ()
	 */
	void UGuildEntriesList_C::GenerateInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.GenerateInvites");
		
		UGuildEntriesList_C_GenerateInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnCompleteCancelEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnCompleteCancelEntry(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnCompleteCancelEntry");
		
		UGuildEntriesList_C_OnCompleteCancelEntry_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnInviteArraiment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::OnInviteArraiment(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnInviteArraiment");
		
		UGuildEntriesList_C_OnInviteArraiment_Params params {};
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
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnInviteArrived_Event
	 * 		Flags  -> ()
	 */
	void UGuildEntriesList_C::OnInviteArrived_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnInviteArrived_Event");
		
		UGuildEntriesList_C_OnInviteArrived_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.ExecuteUbergraph_GuildEntriesList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntriesList_C::ExecuteUbergraph_GuildEntriesList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.ExecuteUbergraph_GuildEntriesList");
		
		UGuildEntriesList_C_ExecuteUbergraph_GuildEntriesList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntriesList.GuildEntriesList_C.OnClickedGuildEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntryData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildEntriesList_C::OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntriesList.GuildEntriesList_C.OnClickedGuildEntry__DelegateSignature");
		
		UGuildEntriesList_C_OnClickedGuildEntry__DelegateSignature_Params params {};
		params.GuildEntryData = GuildEntryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildEntriesList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildEntriesList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildEntriesList.GuildEntriesList_C");
		return ptr;
	}

}



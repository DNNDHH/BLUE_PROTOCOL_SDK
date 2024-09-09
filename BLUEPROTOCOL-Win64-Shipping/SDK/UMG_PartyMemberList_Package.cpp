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
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.GetPartyListIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_C::GetPartyListIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.GetPartyListIndex");
		
		UUMG_PartyMemberList_C_GetPartyListIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.ResetPartyMemberList
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::ResetPartyMemberList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.ResetPartyMemberList");
		
		UUMG_PartyMemberList_C_ResetPartyMemberList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.Construct");
		
		UUMG_PartyMemberList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.HandlePartyMemberUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::HandlePartyMemberUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.HandlePartyMemberUpdate");
		
		UUMG_PartyMemberList_C_HandlePartyMemberUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnFollowStateChanged_Event
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::OnFollowStateChanged_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnFollowStateChanged_Event");
		
		UUMG_PartyMemberList_C_OnFollowStateChanged_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.Destruct");
		
		UUMG_PartyMemberList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.ExecuteUbergraph_UMG_PartyMemberList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_C::ExecuteUbergraph_UMG_PartyMemberList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.ExecuteUbergraph_UMG_PartyMemberList");
		
		UUMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnUpdatedMemberList__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_C::OnUpdatedMemberList__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnUpdatedMemberList__DelegateSignature");
		
		UUMG_PartyMemberList_C_OnUpdatedMemberList__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PartyMemberList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PartyMemberList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyMemberList.UMG_PartyMemberList_C");
		return ptr;
	}

}



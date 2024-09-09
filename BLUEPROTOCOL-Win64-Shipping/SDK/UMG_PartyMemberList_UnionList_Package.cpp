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
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.GetPartyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PartyListPartyType                               PartyType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_UnionList_C::GetPartyType(E_PartyListPartyType* PartyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.GetPartyType");
		
		UUMG_PartyMemberList_UnionList_C_GetPartyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyType != nullptr)
			*PartyType = params.PartyType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabelEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PartyMemberList_UnionList_C::SetPartyTypeLabelEnable(bool bInEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabelEnable");
		
		UUMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable_Params params {};
		params.bInEnable = bInEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PartyListPartyType                               InPartyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_UnionList_C::SetPartyTypeLabel(E_PartyListPartyType InPartyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabel");
		
		UUMG_PartyMemberList_UnionList_C_SetPartyTypeLabel_Params params {};
		params.InPartyType = InPartyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ClearMember
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_UnionList_C::ClearMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ClearMember");
		
		UUMG_PartyMemberList_UnionList_C_ClearMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.AddMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InMemberWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_UnionList_C::AddMember(class UUserWidget* InMemberWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.AddMember");
		
		UUMG_PartyMemberList_UnionList_C_AddMember_Params params {};
		params.InMemberWidget = InMemberWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.CreateMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         PartyMemberState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowBattleStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PartyMemberList_UnionList_C::CreateMember(class USBPartyMemberState* PartyMemberState, bool bShowBattleStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.CreateMember");
		
		UUMG_PartyMemberList_UnionList_C_CreateMember_Params params {};
		params.PartyMemberState = PartyMemberState;
		params.bShowBattleStatus = bShowBattleStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_UnionList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.Construct");
		
		UUMG_PartyMemberList_UnionList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ExecuteUbergraph_UMG_PartyMemberList_UnionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_UnionList_C::ExecuteUbergraph_UMG_PartyMemberList_UnionList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ExecuteUbergraph_UMG_PartyMemberList_UnionList");
		
		UUMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PartyMemberList_UnionList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PartyMemberList_UnionList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.GetPartyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PartyListPartyType                               PartyType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_Union_C::GetPartyType(E_PartyListPartyType* PartyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.GetPartyType");
		
		UUMG_PartyMemberList_Union_C_GetPartyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyType != nullptr)
			*PartyType = params.PartyType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ResetMemberListVisibility
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_Union_C::ResetMemberListVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ResetMemberListVisibility");
		
		UUMG_PartyMemberList_Union_C_ResetMemberListVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.CreateMemberListWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_PartyMemberList_UnionList_C*            OutMemberListWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USBPartyMemberState*>                 InMemberList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLimitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NextMemberIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_PartyMemberList_UnionList_C*            OutListWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_Union_C::CreateMemberListWidget(class UUMG_PartyMemberList_UnionList_C* OutMemberListWidget, TArray<class USBPartyMemberState*>* InMemberList, int32_t InStart, int32_t InLimitCount, int32_t* NextMemberIndex, class UUMG_PartyMemberList_UnionList_C** OutListWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.CreateMemberListWidget");
		
		UUMG_PartyMemberList_Union_C_CreateMemberListWidget_Params params {};
		params.OutMemberListWidget = OutMemberListWidget;
		params.InStart = InStart;
		params.InLimitCount = InLimitCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMemberList != nullptr)
			*InMemberList = params.InMemberList;
		if (NextMemberIndex != nullptr)
			*NextMemberIndex = params.NextMemberIndex;
		if (OutListWidget != nullptr)
			*OutListWidget = params.OutListWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Update Member List
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_Union_C::UpdateMemberList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Update Member List");
		
		UUMG_PartyMemberList_Union_C_UpdateMemberList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMemberList_Union_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Construct");
		
		UUMG_PartyMemberList_Union_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ExecuteUbergraph_UMG_PartyMemberList_Union
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMemberList_Union_C::ExecuteUbergraph_UMG_PartyMemberList_Union(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ExecuteUbergraph_UMG_PartyMemberList_Union");
		
		UUMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PartyMemberList_Union_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PartyMemberList_Union_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C");
		return ptr;
	}

}



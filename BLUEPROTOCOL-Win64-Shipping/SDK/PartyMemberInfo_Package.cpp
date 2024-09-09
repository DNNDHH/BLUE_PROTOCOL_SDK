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
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.ResetBuffIcon
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_C::ResetBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.ResetBuffIcon");
		
		UPartyMemberInfo_C_ResetBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.OnSetBufIcon
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_C::OnSetBufIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.OnSetBufIcon");
		
		UPartyMemberInfo_C_OnSetBufIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.GetBattleStatusComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBBattleStatusComponent*                    OutBattleStatus                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_C::GetBattleStatusComponent(class USBBattleStatusComponent** OutBattleStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.GetBattleStatusComponent");
		
		UPartyMemberInfo_C_GetBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBattleStatus != nullptr)
			*OutBattleStatus = params.OutBattleStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.UpdatePartyIcon
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_C::UpdatePartyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.UpdatePartyIcon");
		
		UPartyMemberInfo_C_UpdatePartyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.Update Follow Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfileSummaryData>           InFriendList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPartyMemberInfo_C::UpdateFollowIcon(TArray<struct FPlayerProfileSummaryData> InFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.Update Follow Icon");
		
		UPartyMemberInfo_C_UpdateFollowIcon_Params params {};
		params.InFriendList = InFriendList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.SetHPMPGaugeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_C::SetHPMPGaugeVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.SetHPMPGaugeVisibility");
		
		UPartyMemberInfo_C_SetHPMPGaugeVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.Construct");
		
		UPartyMemberInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.Destruct");
		
		UPartyMemberInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfileSummaryData>           PlayerProfileSummaryData                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPartyMemberInfo_C::CustomEvent_3(TArray<struct FPlayerProfileSummaryData> PlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.CustomEvent_3");
		
		UPartyMemberInfo_C_CustomEvent_3_Params params {};
		params.PlayerProfileSummaryData = PlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.OnChangeSameMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSameMap                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_C::OnChangeSameMap(bool InSameMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.OnChangeSameMap");
		
		UPartyMemberInfo_C_OnChangeSameMap_Params params {};
		params.InSameMap = InSameMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo.PartyMemberInfo_C.ExecuteUbergraph_PartyMemberInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_C::ExecuteUbergraph_PartyMemberInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo.PartyMemberInfo_C.ExecuteUbergraph_PartyMemberInfo");
		
		UPartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberInfo.PartyMemberInfo_C");
		return ptr;
	}

}



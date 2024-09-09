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
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventTerm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::SetTerm(const class FName& EventTerm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetTerm");
		
		UUMG_MatchingMenu_ContentInfo_C_SetTerm_Params params {};
		params.EventTerm = EventTerm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetBestScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Record                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClearCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::SetBestScore(int32_t Record, int32_t ClearCount, ESBClassType ClassType, const class FName& MapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetBestScore");
		
		UUMG_MatchingMenu_ContentInfo_C_SetBestScore_Params params {};
		params.Record = Record;
		params.ClearCount = ClearCount;
		params.ClassType = ClassType;
		params.MapId = MapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetCommandMenuMode
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ContentInfo_C::SetCommandMenuMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetCommandMenuMode");
		
		UUMG_MatchingMenu_ContentInfo_C_SetCommandMenuMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetDungeonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  DungeonMapInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetDungeonInfo");
		
		UUMG_MatchingMenu_ContentInfo_C_SetDungeonInfo_Params params {};
		params.DungeonMapInfo = DungeonMapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.ExecuteUbergraph_UMG_MatchingMenu_ContentInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::ExecuteUbergraph_UMG_MatchingMenu_ContentInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.ExecuteUbergraph_UMG_MatchingMenu_ContentInfo");
		
		UUMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickRewardIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ContentInfo_C::OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickRewardIcon__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnCloseButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ContentInfo_C::OnCloseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnCloseButtonClicked__DelegateSignature");
		
		UUMG_MatchingMenu_ContentInfo_C_OnCloseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_ContentInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_ContentInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C");
		return ptr;
	}

}



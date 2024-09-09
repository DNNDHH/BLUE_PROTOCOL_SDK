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
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URankingRewardItem_C*                        RankingRewardItem                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingRewardMenu_C::TryGetItem(class URankingRewardItem_C** RankingRewardItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.TryGetItem");
		
		URankingRewardMenu_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankingRewardItem != nullptr)
			*RankingRewardItem = params.RankingRewardItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.ListInitialize");
		
		URankingRewardMenu_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.SetRankingRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRankingHistoryData                         RankingHistoryData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTotallingEnd                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InMyRank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingRewardMenu_C::SetRankingRewardData(const struct FRankingHistoryData& RankingHistoryData, ESBClassType InClassType, bool IsTotallingEnd, int32_t InMyRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.SetRankingRewardData");
		
		URankingRewardMenu_C_SetRankingRewardData_Params params {};
		params.RankingHistoryData = RankingHistoryData;
		params.InClassType = InClassType;
		params.IsTotallingEnd = IsTotallingEnd;
		params.InMyRank = InMyRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.Construct");
		
		URankingRewardMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		URankingRewardMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		URankingRewardMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.CustomEvent_1");
		
		URankingRewardMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.ExecuteUbergraph_RankingRewardMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingRewardMenu_C::ExecuteUbergraph_RankingRewardMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.ExecuteUbergraph_RankingRewardMenu");
		
		URankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardMenu.RankingRewardMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingRewardMenu_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardMenu.RankingRewardMenu_C.OnClose__DelegateSignature");
		
		URankingRewardMenu_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingRewardMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingRewardMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingRewardMenu.RankingRewardMenu_C");
		return ptr;
	}

}



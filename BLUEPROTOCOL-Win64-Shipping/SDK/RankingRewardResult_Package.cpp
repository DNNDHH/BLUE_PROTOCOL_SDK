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
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.GetIdRewardsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRankingRewardData                          RankingRewardData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FName>                                List                                                       (Parm, OutParm)
	 */
	void URankingRewardResult_C::GetIdRewardsList(const struct FRankingRewardData& RankingRewardData, TArray<class FName>* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.GetIdRewardsList");
		
		URankingRewardResult_C_GetIdRewardsList_Params params {};
		params.RankingRewardData = RankingRewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (List != nullptr)
			*List = params.List;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.Construct
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.Construct");
		
		URankingRewardResult_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		URankingRewardResult_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.StartResult
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::StartResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.StartResult");
		
		URankingRewardResult_C_StartResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.CustomEvent_2");
		
		URankingRewardResult_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.SetRankingRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBRankingRewardData>                InRankingReward                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URankingRewardResult_C::SetRankingRewardData(TArray<struct FSBRankingRewardData> InRankingReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.SetRankingRewardData");
		
		URankingRewardResult_C_SetRankingRewardData_Params params {};
		params.InRankingReward = InRankingReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.TryShowReward
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::TryShowReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.TryShowReward");
		
		URankingRewardResult_C_TryShowReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.StartEnd
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::StartEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.StartEnd");
		
		URankingRewardResult_C_StartEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.Destruct
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.Destruct");
		
		URankingRewardResult_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.ExecuteUbergraph_RankingRewardResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingRewardResult_C::ExecuteUbergraph_RankingRewardResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.ExecuteUbergraph_RankingRewardResult");
		
		URankingRewardResult_C_ExecuteUbergraph_RankingRewardResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingRewardResult.RankingRewardResult_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingRewardResult_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardResult.RankingRewardResult_C.OnClose__DelegateSignature");
		
		URankingRewardResult_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingRewardResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingRewardResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingRewardResult.RankingRewardResult_C");
		return ptr;
	}

}



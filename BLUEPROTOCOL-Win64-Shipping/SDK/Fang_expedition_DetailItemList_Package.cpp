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
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ResetRewardData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::ResetRewardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ResetRewardData");
		
		UFang_expedition_DetailItemList_C_ResetRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupRandomRewardPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::SetupRandomRewardPage(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupRandomRewardPage");
		
		UFang_expedition_DetailItemList_C_SetupRandomRewardPage_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.AddRandomRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBFang_expeditionRandomRewardData>  RandomReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailItemList_C::AddRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>* RandomReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.AddRandomRewardData");
		
		UFang_expedition_DetailItemList_C_AddRandomRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomReward != nullptr)
			*RandomReward = params.RandomReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupPageButton
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::SetupPageButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupPageButton");
		
		UFang_expedition_DetailItemList_C_SetupPageButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_RandomItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::ChangePage_RandomItem(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_RandomItem");
		
		UFang_expedition_DetailItemList_C_ChangePage_RandomItem_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRandomRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBFang_expeditionRandomRewardData>  RandomReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailItemList_C::SetRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>* RandomReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRandomRewardData");
		
		UFang_expedition_DetailItemList_C_SetRandomRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomReward != nullptr)
			*RandomReward = params.RandomReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.UpdatePageButtonVisibility
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::UpdatePageButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.UpdatePageButtonVisibility");
		
		UFang_expedition_DetailItemList_C_UpdatePageButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_FixedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::ChangePage_FixedItem(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_FixedItem");
		
		UFang_expedition_DetailItemList_C_ChangePage_FixedItem_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::ChangePage(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage");
		
		UFang_expedition_DetailItemList_C_ChangePage_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMasterReward>                     RewardList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailItemList_C::SetRewardData(TArray<struct FSBMasterReward>* RewardList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRewardData");
		
		UFang_expedition_DetailItemList_C_SetRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardList != nullptr)
			*RewardList = params.RewardList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Construct");
		
		UFang_expedition_DetailItemList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_DetailItemList_C_BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_DetailItemList_C_BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.CB_OnPageButtonClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::CB_OnPageButtonClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.CB_OnPageButtonClick");
		
		UFang_expedition_DetailItemList_C_CB_OnPageButtonClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Destruct");
		
		UFang_expedition_DetailItemList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ExecuteUbergraph_Fang_expedition_DetailItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemList_C::ExecuteUbergraph_Fang_expedition_DetailItemList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ExecuteUbergraph_Fang_expedition_DetailItemList");
		
		UFang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailItemList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionRandomRewardData          RandomReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UFang_expedition_ProbabilityListItem_C::SetData(int32_t Type, const struct FSBFang_expeditionRandomRewardData& RandomReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.SetData");
		
		UFang_expedition_ProbabilityListItem_C_SetData_Params params {};
		params.Type = Type;
		params.RandomReward = RandomReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityListItem_C::BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_ProbabilityListItem_C_BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.ExecuteUbergraph_Fang_expedition_ProbabilityListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityListItem_C::ExecuteUbergraph_Fang_expedition_ProbabilityListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.ExecuteUbergraph_Fang_expedition_ProbabilityListItem");
		
		UFang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             RewardData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UFang_expedition_ProbabilityListItem_C::OnClicked__DelegateSignature(const struct FSBMasterReward& RewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.OnClicked__DelegateSignature");
		
		UFang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature_Params params {};
		params.RewardData = RewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_ProbabilityListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_ProbabilityListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.SetReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InReceived                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestRewards_C::SetReceived(bool InReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.SetReceived");
		
		UUMG_SeasonPassQuestRewards_C_SetReceived_Params params {};
		params.InReceived = InReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UQuestRewardIcon_C*>                  Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 * 		class UWidgetSwitcher*                             WidgetSwitcher_Btn                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestRewards_C::GetData(TArray<class UQuestRewardIcon_C*>* Array, class UWidgetSwitcher** WidgetSwitcher_Btn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetData");
		
		UUMG_SeasonPassQuestRewards_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (WidgetSwitcher_Btn != nullptr)
			*WidgetSwitcher_Btn = params.WidgetSwitcher_Btn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestRewards_C::BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestRewards_C_BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.ExecuteUbergraph_UMG_SeasonPassQuestRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestRewards_C::ExecuteUbergraph_UMG_SeasonPassQuestRewards(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.ExecuteUbergraph_UMG_SeasonPassQuestRewards");
		
		UUMG_SeasonPassQuestRewards_C_ExecuteUbergraph_UMG_SeasonPassQuestRewards_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetReward_Event__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GroupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestRewards_C::GetReward_Event__DelegateSignature(const class FString& QuestID, const class FString& GroupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetReward_Event__DelegateSignature");
		
		UUMG_SeasonPassQuestRewards_C_GetReward_Event__DelegateSignature_Params params {};
		params.QuestID = QuestID;
		params.GroupId = GroupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestRewards_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestRewards_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C");
		return ptr;
	}

}



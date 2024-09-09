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
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.SetBgBlurVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardIconListDialog_C::SetBgBlurVisible(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.SetBgBlurVisible");
		
		URewardIconListDialog_C_SetBgBlurVisible_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardIDList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                IDList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URewardIconListDialog_C::SetMasterRewardIDList(TArray<class FName>* IDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardIDList");
		
		URewardIconListDialog_C_SetMasterRewardIDList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IDList != nullptr)
			*IDList = params.IDList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMasterReward>                     MasterRewards                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URewardIconListDialog_C::SetMasterRewardList(TArray<struct FSBMasterReward>* MasterRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardList");
		
		URewardIconListDialog_C_SetMasterRewardList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MasterRewards != nullptr)
			*MasterRewards = params.MasterRewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsIconVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardIconListDialog_C::SetMessage(const class FText& Message, bool IsIconVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.SetMessage");
		
		URewardIconListDialog_C_SetMessage_Params params {};
		params.Message = Message;
		params.IsIconVisible = IsIconVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");
		
		URewardIconListDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.Construct");
		
		URewardIconListDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.Destruct");
		
		URewardIconListDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.Close_Event
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::Close_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.Close_Event");
		
		URewardIconListDialog_C_Close_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		URewardIconListDialog_C_BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		URewardIconListDialog_C_BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.ExecuteUbergraph_RewardIconListDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URewardIconListDialog_C::ExecuteUbergraph_RewardIconListDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.ExecuteUbergraph_RewardIconListDialog");
		
		URewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardIconListDialog.RewardIconListDialog_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URewardIconListDialog_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconListDialog.RewardIconListDialog_C.OnClose__DelegateSignature");
		
		URewardIconListDialog_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardIconListDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardIconListDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardIconListDialog.RewardIconListDialog_C");
		return ptr;
	}

}



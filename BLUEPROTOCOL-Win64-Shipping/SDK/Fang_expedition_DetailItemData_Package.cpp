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
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.CheckAnimationSkip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemData_C::CheckAnimationSkip(int32_t InValue, bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.CheckAnimationSkip");
		
		UFang_expedition_DetailItemData_C_CheckAnimationSkip_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetNextButtonDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemData_C::SetNextButtonDisabled(bool IsDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetNextButtonDisabled");
		
		UFang_expedition_DetailItemData_C_SetNextButtonDisabled_Params params {};
		params.IsDisable = IsDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetSelectTimeIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemData_C::GetSelectTimeIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetSelectTimeIndex");
		
		UFang_expedition_DetailItemData_C_GetSelectTimeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  Data                                                       (Parm, OutParm)
	 */
	void UFang_expedition_DetailItemData_C::GetAreaData(struct FSBFang_expeditionAreaData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetAreaData");
		
		UFang_expedition_DetailItemData_C_GetAreaData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRandomRewardData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::UpdateRandomRewardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRandomRewardData");
		
		UFang_expedition_DetailItemData_C_UpdateRandomRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetFangVarietyNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemData_C::SetFangVarietyNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetFangVarietyNum");
		
		UFang_expedition_DetailItemData_C_SetFangVarietyNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeFangValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemData_C::ChangeFangValue(int32_t Value, bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeFangValue");
		
		UFang_expedition_DetailItemData_C_ChangeFangValue_Params params {};
		params.Value = Value;
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemData_C::UpdateRewardList(bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRewardList");
		
		UFang_expedition_DetailItemData_C_UpdateRewardList_Params params {};
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeTimeIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemData_C::ChangeTimeIndex(int32_t Index, bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeTimeIndex");
		
		UFang_expedition_DetailItemData_C_ChangeTimeIndex_Params params {};
		params.Index = Index;
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateTimeButtonText
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::UpdateTimeButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateTimeButtonText");
		
		UFang_expedition_DetailItemData_C_UpdateTimeButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DetailItemData_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetAreaData");
		
		UFang_expedition_DetailItemData_C_SetAreaData_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Construct");
		
		UFang_expedition_DetailItemData_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Destruct");
		
		UFang_expedition_DetailItemData_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ExecuteUbergraph_Fang_expedition_DetailItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemData_C::ExecuteUbergraph_Fang_expedition_DetailItemData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ExecuteUbergraph_Fang_expedition_DetailItemData");
		
		UFang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickFangSelectButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemData_C::OnClickFangSelectButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickFangSelectButton__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_OnClickFangSelectButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickRandomRewardListView__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemData_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickRandomRewardListView__DelegateSignature");
		
		UFang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature_Params params {};
		params.AreaData = AreaData;
		params.TimeIndex = TimeIndex;
		params.FangValue = FangValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailItemData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailItemData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C");
		return ptr;
	}

}



#pragma once

 

// Package: Fang_expedition_DetailItemData

#include "Basic.hpp"

#include "Fang_expedition_DetailItemData_classes.hpp"
#include "Fang_expedition_DetailItemData_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickRandomRewardListView__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_TimeIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemData_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 Param_TimeIndex, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "OnClickRandomRewardListView__DelegateSignature");

	Params::Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.Param_TimeIndex = Param_TimeIndex;
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickFangSelectButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemData_C::OnClickFangSelectButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "OnClickFangSelectButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ExecuteUbergraph_Fang_expedition_DetailItemData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemData_C::ExecuteUbergraph_Fang_expedition_DetailItemData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "ExecuteUbergraph_Fang_expedition_DetailItemData");

	Params::Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailItemData_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemData_C::BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailItemData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetAreaData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DetailItemData_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "SetAreaData");

	Params::Fang_expedition_DetailItemData_C_SetAreaData Parms{};

	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateTimeButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemData_C::UpdateTimeButtonText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "UpdateTimeButtonText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeTimeIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemData_C::ChangeTimeIndex(int32 Param_Index, bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "ChangeTimeIndex");

	Params::Fang_expedition_DetailItemData_C_ChangeTimeIndex Parms{};

	Parms.Param_Index = Param_Index;
	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRewardList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemData_C::UpdateRewardList(bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "UpdateRewardList");

	Params::Fang_expedition_DetailItemData_C_UpdateRewardList Parms{};

	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeFangValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemData_C::ChangeFangValue(int32 Value, bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "ChangeFangValue");

	Params::Fang_expedition_DetailItemData_C_ChangeFangValue Parms{};

	Parms.Value = Value;
	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetFangVarietyNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemData_C::SetFangVarietyNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "SetFangVarietyNum");

	Params::Fang_expedition_DetailItemData_C_SetFangVarietyNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRandomRewardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemData_C::UpdateRandomRewardData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "UpdateRandomRewardData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetAreaData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       Data                                                   (Parm, OutParm)

void UFang_expedition_DetailItemData_C::GetAreaData(struct FSBFang_expeditionAreaData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "GetAreaData");

	Params::Fang_expedition_DetailItemData_C_GetAreaData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetSelectTimeIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemData_C::GetSelectTimeIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "GetSelectTimeIndex");

	Params::Fang_expedition_DetailItemData_C_GetSelectTimeIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetNextButtonDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemData_C::SetNextButtonDisabled(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "SetNextButtonDisabled");

	Params::Fang_expedition_DetailItemData_C_SetNextButtonDisabled Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.CheckAnimationSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemData_C::CheckAnimationSkip(int32 InValue, bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemData_C", "CheckAnimationSkip");

	Params::Fang_expedition_DetailItemData_C_CheckAnimationSkip Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}

}


#pragma once

 

// Package: StepList_Gasha

#include "Basic.hpp"

#include "StepList_Gasha_classes.hpp"
#include "StepList_Gasha_parameters.hpp"


namespace SDK
{

// Function StepList_Gasha.StepList_Gasha_C.OnChangeStep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     GashaInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UStepList_Gasha_C::OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "OnChangeStep__DelegateSignature");

	Params::StepList_Gasha_C_OnChangeStep__DelegateSignature Parms{};

	Parms.GashaInfo = std::move(GashaInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.ExecuteUbergraph_StepList_Gasha
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::ExecuteUbergraph_StepList_Gasha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "ExecuteUbergraph_StepList_Gasha");

	Params::StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature");

	Params::StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature");

	Params::StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature");

	Params::StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature");

	Params::StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature");

	Params::StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.CommonBtnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::CommonBtnClicked(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "CommonBtnClicked");

	Params::StepList_Gasha_C_CommonBtnClicked Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStepList_Gasha_C::BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepList_Gasha.StepList_Gasha_C.BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStepList_Gasha_C::BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepList_Gasha.StepList_Gasha_C.InitSetStepInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectStep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StepMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::InitSetStepInfo(int32 SelectStep, int32 StepMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "InitSetStepInfo");

	Params::StepList_Gasha_C_InitSetStepInfo Parms{};

	Parms.SelectStep = SelectStep;
	Parms.StepMax = StepMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.CreateBtnList
// (Public, BlueprintCallable, BlueprintEvent)

void UStepList_Gasha_C::CreateBtnList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "CreateBtnList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepList_Gasha.StepList_Gasha_C.SetBtnVisivility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::SetBtnVisivility(ESlateVisibility IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "SetBtnVisivility");

	Params::StepList_Gasha_C_SetBtnVisivility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.SetBtnSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectedBtnID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::SetBtnSelected(int32 SelectedBtnID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "SetBtnSelected");

	Params::StepList_Gasha_C_SetBtnSelected Parms{};

	Parms.SelectedBtnID = SelectedBtnID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepList_Gasha.StepList_Gasha_C.GetSelectStepNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSelectStepNum                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::GetSelectStepNum(int32* OutSelectStepNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "GetSelectStepNum");

	Params::StepList_Gasha_C_GetSelectStepNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSelectStepNum != nullptr)
		*OutSelectStepNum = Parms.OutSelectStepNum;
}


// Function StepList_Gasha.StepList_Gasha_C.GetSelectBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSelectBtnId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepList_Gasha_C::GetSelectBtn(int32* OutSelectBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "GetSelectBtn");

	Params::StepList_Gasha_C_GetSelectBtn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSelectBtnId != nullptr)
		*OutSelectBtnId = Parms.OutSelectBtnId;
}


// Function StepList_Gasha.StepList_Gasha_C.UpdateBtnPage
// (Public, BlueprintCallable, BlueprintEvent)

void UStepList_Gasha_C::UpdateBtnPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "UpdateBtnPage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepList_Gasha.StepList_Gasha_C.GetGashaInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBGashaInfo                     OutGashaInfo                                           (Parm, OutParm)

void UStepList_Gasha_C::GetGashaInfo(int32 BtnId, struct FSBGashaInfo* OutGashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_Gasha_C", "GetGashaInfo");

	Params::StepList_Gasha_C_GetGashaInfo Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutGashaInfo != nullptr)
		*OutGashaInfo = std::move(Parms.OutGashaInfo);
}

}


#pragma once

 

// Package: QuestDetail_AdditionalReward

#include "Basic.hpp"

#include "QuestDetail_AdditionalReward_classes.hpp"
#include "QuestDetail_AdditionalReward_parameters.hpp"


namespace SDK
{

// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UQuestDetail_AdditionalReward_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.ExecuteUbergraph_QuestDetail_AdditionalReward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_AdditionalReward_C::ExecuteUbergraph_QuestDetail_AdditionalReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "ExecuteUbergraph_QuestDetail_AdditionalReward");

	Params::QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.CloseByCancel
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_AdditionalReward_C::CloseByCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "CloseByCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.BndEvt__QuestDetail_AdditionalReward_TransParentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_AdditionalReward_C::BndEvt__QuestDetail_AdditionalReward_TransParentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "BndEvt__QuestDetail_AdditionalReward_TransParentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.BndEvt__QuestDetail_AdditionalReward_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_AdditionalReward_C::BndEvt__QuestDetail_AdditionalReward_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "BndEvt__QuestDetail_AdditionalReward_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetail_AdditionalReward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.InitializeAdditionalRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestDetail_AdditionalReward_C::InitializeAdditionalRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_AdditionalReward_C", "InitializeAdditionalRewards");

	UObject::ProcessEvent(Func, nullptr);
}

}


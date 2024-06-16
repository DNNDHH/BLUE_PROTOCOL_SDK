#pragma once

 

// Package: UMG_SeasonPassMenuRewardItem

#include "Basic.hpp"

#include "UMG_SeasonPassMenuRewardItem_classes.hpp"
#include "UMG_SeasonPassMenuRewardItem_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardItem_C::OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardItem_C::ExecuteUbergraph_UMG_SeasonPassMenuRewardItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "ExecuteUbergraph_UMG_SeasonPassMenuRewardItem");

	Params::UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardItem_C::BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.DesignCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAchieved                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bIsMax                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuRewardItem_C::DesignCheck(bool bIsAchieved, bool Param_bIsMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "DesignCheck");

	Params::UMG_SeasonPassMenuRewardItem_C_DesignCheck Parms{};

	Parms.bIsAchieved = bIsAchieved;
	Parms.Param_bIsMax = Param_bIsMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuRewardItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "PreConstruct");

	Params::UMG_SeasonPassMenuRewardItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.UpdateDesignAndData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardItem_C::UpdateDesignAndData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "UpdateDesignAndData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardItem_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardItem_C::OnUpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "OnUpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardItem_C::SetData(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "SetData");

	Params::UMG_SeasonPassMenuRewardItem_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.SetDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardItem_C::SetDebugText(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardItem_C", "SetDebugText");

	Params::UMG_SeasonPassMenuRewardItem_C_SetDebugText Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}

}


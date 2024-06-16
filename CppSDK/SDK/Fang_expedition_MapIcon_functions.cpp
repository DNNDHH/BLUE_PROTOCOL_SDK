#pragma once

 

// Package: Fang_expedition_MapIcon

#include "Basic.hpp"

#include "Fang_expedition_MapIcon_classes.hpp"
#include "Fang_expedition_MapIcon_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnIconSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapIcon_C::OnIconSelect__DelegateSignature(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "OnIconSelect__DelegateSignature");

	Params::Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnMultiIconSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapIcon_C::OnMultiIconSelect__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "OnMultiIconSelect__DelegateSignature");

	Params::Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ExecuteUbergraph_Fang_expedition_MapIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapIcon_C::ExecuteUbergraph_Fang_expedition_MapIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "ExecuteUbergraph_Fang_expedition_MapIcon");

	Params::Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_MapIcon_C::BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_NewIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_TimeIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_MapIcon_C::SetData(const class FString& ID, int32 IconType, bool Param_NewIcon, bool Param_TimeIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "SetData");

	Params::Fang_expedition_MapIcon_C_SetData Parms{};

	Parms.ID = std::move(ID);
	Parms.IconType = IconType;
	Parms.Param_NewIcon = Param_NewIcon;
	Parms.Param_TimeIcon = Param_TimeIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionIconData       IconData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_MapIcon_C::SetIconData(const struct FSBFang_expeditionIconData& IconData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "SetIconData");

	Params::Fang_expedition_MapIcon_C_SetIconData Parms{};

	Parms.IconData = std::move(IconData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFang_expeditionStatus                Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Multi                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    New                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_MapIcon_C::SetIconStatus(ESBFang_expeditionStatus Status, bool Multi, bool Time, bool New)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "SetIconStatus");

	Params::Fang_expedition_MapIcon_C_SetIconStatus Parms{};

	Parms.Status = Status;
	Parms.Multi = Multi;
	Parms.Time = Time;
	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.CheckNewMark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InAreaList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_MapIcon_C::CheckNewMark(TArray<class FString>& InAreaList, bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "CheckNewMark");

	Params::Fang_expedition_MapIcon_C_CheckNewMark Parms{};

	Parms.InAreaList = std::move(InAreaList);

	UObject::ProcessEvent(Func, &Parms);

	InAreaList = std::move(Parms.InAreaList);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ClearNewMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapIcon_C::ClearNewMark(const class FString& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "ClearNewMark");

	Params::Fang_expedition_MapIcon_C_ClearNewMark Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.GetIconID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapIcon_C::GetIconID(int32* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapIcon_C", "GetIconID");

	Params::Fang_expedition_MapIcon_C_GetIconID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}

}


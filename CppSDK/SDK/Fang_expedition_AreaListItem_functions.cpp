#pragma once

 

// Package: Fang_expedition_AreaListItem

#include "Basic.hpp"

#include "Fang_expedition_AreaListItem_classes.hpp"
#include "Fang_expedition_AreaListItem_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListItem_C::OnItemSelected__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "OnItemSelected__DelegateSignature");

	Params::Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ExecuteUbergraph_Fang_expedition_AreaListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListItem_C::ExecuteUbergraph_Fang_expedition_AreaListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "ExecuteUbergraph_Fang_expedition_AreaListItem");

	Params::Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_AreaListItem_C::BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BGTypeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListItem_C::BGTypeSet(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "BGTypeSet");

	Params::Fang_expedition_AreaListItem_C_BGTypeSet Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionAreaData       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   BgOverwrite                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CategoryOverwrite                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListItem_C::SetData(int32 Param_Index, const struct FSBFang_expeditionAreaData& Data, int32 BgOverwrite, int32 CategoryOverwrite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "SetData");

	Params::Fang_expedition_AreaListItem_C_SetData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Data = std::move(Data);
	Parms.BgOverwrite = BgOverwrite;
	Parms.CategoryOverwrite = CategoryOverwrite;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckPlayData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBFang_expeditionPlayData>PlayDataList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsField                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListItem_C::CheckPlayData(TArray<struct FSBFang_expeditionPlayData>& PlayDataList, bool IsField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "CheckPlayData");

	Params::Fang_expedition_AreaListItem_C_CheckPlayData Parms{};

	Parms.PlayDataList = std::move(PlayDataList);
	Parms.IsField = IsField;

	UObject::ProcessEvent(Func, &Parms);

	PlayDataList = std::move(Parms.PlayDataList);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ResetPlayIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListItem_C::ResetPlayIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "ResetPlayIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (Parm, OutParm)

void UFang_expedition_AreaListItem_C::GetData(struct FSBFang_expeditionAreaData* AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "GetData");

	Params::Fang_expedition_AreaListItem_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AreaData != nullptr)
		*AreaData = std::move(Parms.AreaData);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetFieldData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaListItem_C::SetFieldData(int32 Param_Index, const class FString& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "SetFieldData");

	Params::Fang_expedition_AreaListItem_C_SetFieldData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Field = std::move(Field);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetBtnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BtnSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListItem_C::SetBtnSelected(bool BtnSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "SetBtnSelected");

	Params::Fang_expedition_AreaListItem_C_SetBtnSelected Parms{};

	Parms.BtnSelected = BtnSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckNewMark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListItem_C::CheckNewMark(const class FString& InParam, bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "CheckNewMark");

	Params::Fang_expedition_AreaListItem_C_CheckNewMark Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ClearNewMark
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListItem_C::ClearNewMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "ClearNewMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ShowNewMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListItem_C::ShowNewMark(bool InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListItem_C", "ShowNewMark");

	Params::Fang_expedition_AreaListItem_C_ShowNewMark Parms{};

	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}

}


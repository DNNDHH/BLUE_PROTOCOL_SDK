#pragma once

 

// Package: Fang_expedition_DungeonSlot

#include "Basic.hpp"

#include "Fang_expedition_DungeonSlot_classes.hpp"
#include "Fang_expedition_DungeonSlot_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Expedition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       Param_PlayData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonSlot_C::OnSelect_Expedition__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& Param_PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "OnSelect_Expedition__DelegateSignature");

	Params::Fang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_PlayData = std::move(Param_PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Standby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::OnSelect_Standby__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "OnSelect_Standby__DelegateSignature");

	Params::Fang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.ExecuteUbergraph_Fang_expedition_DungeonSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::ExecuteUbergraph_Fang_expedition_DungeonSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "ExecuteUbergraph_Fang_expedition_DungeonSlot");

	Params::Fang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DungeonSlot_C::BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DungeonSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DungeonSlot_C::BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.CB_ExpeditionSlotSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::CB_ExpeditionSlotSelect(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "CB_ExpeditionSlotSelect");

	Params::Fang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DungeonSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetAreaData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData_                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::SetAreaData(const struct FSBFang_expeditionAreaData& AreaData_, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "SetAreaData");

	Params::Fang_expedition_DungeonSlot_C_SetAreaData Parms{};

	Parms.AreaData_ = std::move(AreaData_);
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonSlot_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonSlot_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetSlotType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::SetSlotType(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "SetSlotType");

	Params::Fang_expedition_DungeonSlot_C_SetSlotType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetPlayData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData_                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonSlot_C::SetPlayData(const struct FSBFang_expeditionPlayData& PlayData_, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "SetPlayData");

	Params::Fang_expedition_DungeonSlot_C_SetPlayData Parms{};

	Parms.PlayData_ = std::move(PlayData_);
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetBtn_Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BtnSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DungeonSlot_C::SetBtn_Selected(bool BtnSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonSlot_C", "SetBtn_Selected");

	Params::Fang_expedition_DungeonSlot_C_SetBtn_Selected Parms{};

	Parms.BtnSelected = BtnSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}


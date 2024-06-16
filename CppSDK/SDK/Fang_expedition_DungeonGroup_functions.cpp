#pragma once

 

// Package: Fang_expedition_DungeonGroup

#include "Basic.hpp"

#include "Fang_expedition_DungeonGroup_classes.hpp"
#include "Fang_expedition_DungeonGroup_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnTicketButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::OnTicketButtonClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "OnTicketButtonClick__DelegateSignature");

	Params::Fang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressExpedition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonGroup_C::OnPressExpedition__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "OnPressExpedition__DelegateSignature");

	Params::Fang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressStandby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::OnPressStandby__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "OnPressStandby__DelegateSignature");

	Params::Fang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonGroup_C::OnAnimationFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "OnAnimationFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.ExecuteUbergraph_Fang_expedition_DungeonGroup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::ExecuteUbergraph_Fang_expedition_DungeonGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "ExecuteUbergraph_Fang_expedition_DungeonGroup");

	Params::Fang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_SlotAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonGroup_C::CB_SlotAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "CB_SlotAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressStandbyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::CB_PressStandbyButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "CB_PressStandbyButton");

	Params::Fang_expedition_DungeonGroup_C_CB_PressStandbyButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressExpeditionButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonGroup_C::CB_PressExpeditionButton(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "CB_PressExpeditionButton");

	Params::Fang_expedition_DungeonGroup_C_CB_PressExpeditionButton Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DungeonGroup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_TicketButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::CB_TicketButtonClick(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "CB_TicketButtonClick");

	Params::Fang_expedition_DungeonGroup_C_CB_TicketButtonClick Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetPlayData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonGroup_C::SetPlayData(int32 SlotIndex, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "SetPlayData");

	Params::Fang_expedition_DungeonGroup_C_SetPlayData Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::SetGauge(int32 Param_Index, int32 NowPoint, int32 MaxPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "SetGauge");

	Params::Fang_expedition_DungeonGroup_C_SetGauge Parms{};

	Parms.Param_Index = Param_Index;
	Parms.NowPoint = NowPoint;
	Parms.MaxPoint = MaxPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonGroup_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonGroup_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetSlotType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::SetSlotType(int32 Param_Index, int32 SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "SetSlotType");

	Params::Fang_expedition_DungeonGroup_C_SetSlotType Parms{};

	Parms.Param_Index = Param_Index;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetBtn_Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::SetBtn_Selected(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "SetBtn_Selected");

	Params::Fang_expedition_DungeonGroup_C_SetBtn_Selected Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.PlaySlotAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonGroup_C::PlaySlotAnimation(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonGroup_C", "PlaySlotAnimation");

	Params::Fang_expedition_DungeonGroup_C_PlaySlotAnimation Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}


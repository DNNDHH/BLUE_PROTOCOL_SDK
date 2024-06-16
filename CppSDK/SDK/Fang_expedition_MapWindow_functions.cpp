#pragma once

 

// Package: Fang_expedition_MapWindow

#include "Basic.hpp"

#include "Fang_expedition_MapWindow_classes.hpp"
#include "Fang_expedition_MapWindow_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::OnMapIconClick__DelegateSignature(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "OnMapIconClick__DelegateSignature");

	Params::Fang_expedition_MapWindow_C_OnMapIconClick__DelegateSignature Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnMapIconGroupClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionIconData       IconData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_MapWindow_C::OnMapIconGroupClick__DelegateSignature(const struct FSBFang_expeditionIconData& IconData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "OnMapIconGroupClick__DelegateSignature");

	Params::Fang_expedition_MapWindow_C_OnMapIconGroupClick__DelegateSignature Parms{};

	Parms.IconData = std::move(IconData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ExecuteUbergraph_Fang_expedition_MapWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::ExecuteUbergraph_Fang_expedition_MapWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "ExecuteUbergraph_Fang_expedition_MapWindow");

	Params::Fang_expedition_MapWindow_C_ExecuteUbergraph_Fang_expedition_MapWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconGroupClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::IconGroupClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "IconGroupClick");

	Params::Fang_expedition_MapWindow_C_IconGroupClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_MapWindow_C::BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_MapWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.IconClickWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::IconClickWork(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "IconClickWork");

	Params::Fang_expedition_MapWindow_C_IconClickWork Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_MapWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetMapId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::SetMapId(const class FString& MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "SetMapId");

	Params::Fang_expedition_MapWindow_C_SetMapId Parms{};

	Parms.MapId = std::move(MapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetExpeditionData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBFang_expeditionData           ExpeditionData                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_MapWindow_C::SetExpeditionData(const class FString& Field, struct FSBFang_expeditionData& ExpeditionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "SetExpeditionData");

	Params::Fang_expedition_MapWindow_C_SetExpeditionData Parms{};

	Parms.Field = std::move(Field);
	Parms.ExpeditionData = std::move(ExpeditionData);

	UObject::ProcessEvent(Func, &Parms);

	ExpeditionData = std::move(Parms.ExpeditionData);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.ClearIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_MapWindow_C::ClearIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "ClearIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetIconPositionData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*                 CanvasSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::SetIconPositionData(class UCanvasPanelSlot* CanvasSlot, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "SetIconPositionData");

	Params::Fang_expedition_MapWindow_C_SetIconPositionData Parms{};

	Parms.CanvasSlot = CanvasSlot;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.SetCloudPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TraverseName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*                 CanvasSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::SetCloudPosition(const class FString& TraverseName, class UCanvasPanelSlot* CanvasSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "SetCloudPosition");

	Params::Fang_expedition_MapWindow_C_SetCloudPosition Parms{};

	Parms.TraverseName = std::move(TraverseName);
	Parms.CanvasSlot = CanvasSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.UpdateMapIconNewMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_MapWindow_C::UpdateMapIconNewMark(const class FString& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "UpdateMapIconNewMark");

	Params::Fang_expedition_MapWindow_C_UpdateMapIconNewMark Parms{};

	Parms.InId = std::move(InId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_MapWindow.Fang_expedition_MapWindow_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext                    Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFang_expedition_MapWindow_C::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_MapWindow_C", "OnPaint");

	Params::Fang_expedition_MapWindow_C_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

}


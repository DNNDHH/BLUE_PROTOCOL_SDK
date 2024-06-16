#pragma once

 

// Package: MapWidget_QuestIcon

#include "Basic.hpp"

#include "MapWidget_QuestIcon_classes.hpp"
#include "MapWidget_QuestIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnPressedQuestIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::OnPressedQuestIcon__DelegateSignature(int32 InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "OnPressedQuestIcon__DelegateSignature");

	Params::MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.ExecuteUbergraph_MapWidget_QuestIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::ExecuteUbergraph_MapWidget_QuestIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "ExecuteUbergraph_MapWidget_QuestIcon");

	Params::MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "OnAnimationFinished");

	Params::MapWidget_QuestIcon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_QuestIcon_C::SetIcon(int32 InQuestIndex, bool IsClosed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "SetIcon");

	Params::MapWidget_QuestIcon_C_SetIcon Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.IsClosed = IsClosed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_QuestIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "GetToolTipWidget_0");

	Params::MapWidget_QuestIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::SetTooltipString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "SetTooltipString");

	Params::MapWidget_QuestIcon_C_SetTooltipString Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipToIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsTooltip2Line                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InToolTipText                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::SetTooltipToIcon(bool Param_IsTooltip2Line, const class FString& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "SetTooltipToIcon");

	Params::MapWidget_QuestIcon_C_SetTooltipToIcon Parms{};

	Parms.Param_IsTooltip2Line = Param_IsTooltip2Line;
	Parms.InToolTipText = std::move(InToolTipText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_QuestIcon_C::SetTooltipEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "SetTooltipEnable");

	Params::MapWidget_QuestIcon_C_SetTooltipEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetTooltipString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutTooltipString                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_QuestIcon_C::GetTooltipString(class FString* OutTooltipString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_QuestIcon_C", "GetTooltipString");

	Params::MapWidget_QuestIcon_C_GetTooltipString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTooltipString != nullptr)
		*OutTooltipString = std::move(Parms.OutTooltipString);
}

}


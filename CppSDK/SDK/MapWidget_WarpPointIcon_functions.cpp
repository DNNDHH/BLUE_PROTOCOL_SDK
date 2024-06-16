#pragma once

 

// Package: MapWidget_WarpPointIcon

#include "Basic.hpp"

#include "MapWidget_WarpPointIcon_classes.hpp"
#include "MapWidget_WarpPointIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_WarpPointIcon_C*       InWarpPointIcon                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::OnPressed__DelegateSignature(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "OnPressed__DelegateSignature");

	Params::MapWidget_WarpPointIcon_C_OnPressed__DelegateSignature Parms{};

	Parms.InWarpPointIcon = InWarpPointIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ExecuteUbergraph_MapWidget_WarpPointIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::ExecuteUbergraph_MapWidget_WarpPointIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "ExecuteUbergraph_MapWidget_WarpPointIcon");

	Params::MapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterWarpPoint               InWarpPointData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsCity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetWarpPoint(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetWarpPoint");

	Params::MapWidget_WarpPointIcon_C_SetWarpPoint Parms{};

	Parms.InWarpPointData = std::move(InWarpPointData);
	Parms.IsCity = IsCity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetActive");

	Params::MapWidget_WarpPointIcon_C_SetActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLocalWarpIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetIconImage(bool Param_IsLocalWarpIcon, bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetIconImage");

	Params::MapWidget_WarpPointIcon_C_SetIconImage Parms{};

	Parms.Param_IsLocalWarpIcon = Param_IsLocalWarpIcon;
	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetButtonPressEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetButtonPressEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetButtonPressEnable");

	Params::MapWidget_WarpPointIcon_C_SetButtonPressEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_WarpPointIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "GetToolTipWidget_0");

	Params::MapWidget_WarpPointIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconNormalTintColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::SetIconNormalTintColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetIconNormalTintColor");

	Params::MapWidget_WarpPointIcon_C_SetIconNormalTintColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetPressedSoundId");

	Params::MapWidget_WarpPointIcon_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetHoveredSoundId");

	Params::MapWidget_WarpPointIcon_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetGrayOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsGrayOut                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetGrayOut(bool Param_IsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetGrayOut");

	Params::MapWidget_WarpPointIcon_C_SetGrayOut Parms{};

	Parms.Param_IsGrayOut = Param_IsGrayOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImageEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLocalWarpIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetIconImageEx(bool Param_IsLocalWarpIcon, bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetIconImageEx");

	Params::MapWidget_WarpPointIcon_C_SetIconImageEx Parms{};

	Parms.Param_IsLocalWarpIcon = Param_IsLocalWarpIcon;
	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPointEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterWarpPoint               InWarpPointData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsCity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetWarpPointEx(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetWarpPointEx");

	Params::MapWidget_WarpPointIcon_C_SetWarpPointEx Parms{};

	Parms.InWarpPointData = std::move(InWarpPointData);
	Parms.IsCity = IsCity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetDungeonMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDungeonMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_WarpPointIcon_C::SetDungeonMode(bool InDungeonMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "SetDungeonMode");

	Params::MapWidget_WarpPointIcon_C_SetDungeonMode Parms{};

	Parms.InDungeonMode = InDungeonMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ChangeTooltipText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InToolTipText                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_WarpPointIcon_C::ChangeTooltipText(const class FString& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_WarpPointIcon_C", "ChangeTooltipText");

	Params::MapWidget_WarpPointIcon_C_ChangeTooltipText Parms{};

	Parms.InToolTipText = std::move(InToolTipText);

	UObject::ProcessEvent(Func, &Parms);
}

}


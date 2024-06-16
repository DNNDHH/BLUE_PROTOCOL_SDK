#pragma once

 

// Package: SkillInfo

#include "Basic.hpp"

#include "SkillInfo_classes.hpp"
#include "SkillInfo_parameters.hpp"


namespace SDK
{

// Function SkillInfo.SkillInfo_C.ExecuteUbergraph_SkillInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfo_C::ExecuteUbergraph_SkillInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "ExecuteUbergraph_SkillInfo");

	Params::SkillInfo_C_ExecuteUbergraph_SkillInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.OnPadSkinChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfo_C::OnPadSkinChange(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "OnPadSkinChange");

	Params::SkillInfo_C_OnPadSkinChange Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void USkillInfo_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "CustomEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfo.SkillInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "PreConstruct");

	Params::SkillInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.OnChangeBackPaletteVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::OnChangeBackPaletteVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "OnChangeBackPaletteVisible");

	Params::SkillInfo_C_OnChangeBackPaletteVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.OnChangePalette
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBPlayerSkillPaletteSide               PaletteSide                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfo_C::OnChangePalette(ESBPlayerSkillPaletteSide PaletteSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "OnChangePalette");

	Params::SkillInfo_C_OnChangePalette Parms{};

	Parms.PaletteSide = PaletteSide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::CustomEvent_0(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "CustomEvent_0");

	Params::SkillInfo_C_CustomEvent_0 Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void USkillInfo_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfo.SkillInfo_C.AnimationInOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::AnimationInOut(bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "AnimationInOut");

	Params::SkillInfo_C_AnimationInOut Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfo.SkillInfo_C.OnInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::OnInAnimation(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "OnInAnimation");

	Params::SkillInfo_C_OnInAnimation Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfo.SkillInfo_C.OnChangeShowAlwaysHUD_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::OnChangeShowAlwaysHUD_event(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "OnChangeShowAlwaysHUD_event");

	Params::SkillInfo_C_OnChangeShowAlwaysHUD_event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfo_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "SetEditMode");

	Params::SkillInfo_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfo.SkillInfo_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility USkillInfo_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "GetVisibility_0");

	Params::SkillInfo_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkillInfo.SkillInfo_C.IsPlayAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USkillInfo_C::IsPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "IsPlayAnimation");

	Params::SkillInfo_C_IsPlayAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkillInfo.SkillInfo_C.UpdateChangeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillInfo_C::UpdateChangeText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfo_C", "UpdateChangeText");

	UObject::ProcessEvent(Func, nullptr);
}

}


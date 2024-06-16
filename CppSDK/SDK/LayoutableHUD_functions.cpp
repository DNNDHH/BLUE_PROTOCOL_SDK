#pragma once

 

// Package: LayoutableHUD

#include "Basic.hpp"

#include "LayoutableHUD_classes.hpp"
#include "LayoutableHUD_parameters.hpp"


namespace SDK
{

// Function LayoutableHUD.LayoutableHUD_C.CloseOnDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::CloseOnDown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "CloseOnDown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ChangeEditMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::ChangeEditMode__DelegateSignature(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ChangeEditMode__DelegateSignature");

	Params::LayoutableHUD_C_ChangeEditMode__DelegateSignature Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ExecuteUbergraph_LayoutableHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::ExecuteUbergraph_LayoutableHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ExecuteUbergraph_LayoutableHUD");

	Params::LayoutableHUD_C_ExecuteUbergraph_LayoutableHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetVisibleDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::SetVisibleDescription(ESlateVisibility Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetVisibleDescription");

	Params::LayoutableHUD_C_SetVisibleDescription Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.AnimationFinish
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::AnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "AnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void ULayoutableHUD_C::WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void ULayoutableHUD_C::WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULayoutableHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.TitorialHudInit
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::TitorialHudInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "TitorialHudInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.FocusForTutorialWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELayoutableHUD_FocusableWidets          FocusWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::FocusForTutorialWidget(ELayoutableHUD_FocusableWidets FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "FocusForTutorialWidget");

	Params::LayoutableHUD_C_FocusForTutorialWidget Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ResetZOrderForBaseOrders
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ResetZOrderForBaseOrders()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ResetZOrderForBaseOrders");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Reinit
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Reinit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Reinit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.CheckVisibleDescription
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::CheckVisibleDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "CheckVisibleDescription");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEditMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SetEditMode(bool Param_bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetEditMode");

	Params::LayoutableHUD_C_SetEditMode Parms{};

	Parms.Param_bEditMode = Param_bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULayoutableHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PreConstruct");

	Params::LayoutableHUD_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.CloseHudCustomMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::CloseHudCustomMenu(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "CloseHudCustomMenu");

	Params::LayoutableHUD_C_CloseHudCustomMenu Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ApplyPreset
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ApplyPreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ApplyPreset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LayoutMenuExit
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::LayoutMenuExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LayoutMenuExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Event_LayoutMenuClose
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Event_LayoutMenuClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Event_LayoutMenuClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnFinishedPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::OnFinishedPreset(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnFinishedPreset");

	Params::LayoutableHUD_C_OnFinishedPreset Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.InitLoadPreset
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::InitLoadPreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "InitLoadPreset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OpenInitSelect
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OpenInitSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OpenInitSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Save CustomSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCustomHudLayoutSlot                  Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::Save_CustomSlot(ESBCustomHudLayoutSlot Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Save CustomSlot");

	Params::LayoutableHUD_C_Save_CustomSlot Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.Show Custom SlotMenu
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Show_Custom_SlotMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Show Custom SlotMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LoadCustomSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCustomHudLayoutSlot                  LoadCustomSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::LoadCustomSave(ESBCustomHudLayoutSlot LoadCustomSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LoadCustomSave");

	Params::LayoutableHUD_C_LoadCustomSave Parms{};

	Parms.LoadCustomSlot = LoadCustomSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.PresetLoad
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::PresetLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PresetLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LoadPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELayoutPresetTypes                      ELayoutPreset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::LoadPreset(ELayoutPresetTypes ELayoutPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LoadPreset");

	Params::LayoutableHUD_C_LoadPreset Parms{};

	Parms.ELayoutPreset = ELayoutPreset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.UnbindOnUpdateHudBeltVisible
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnbindOnUpdateHudBeltVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnbindOnUpdateHudBeltVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.InitGeneral
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::InitGeneral()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "InitGeneral");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnUpdateHudBeltVisible
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnUpdateHudBeltVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnUpdateHudBeltVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Event_CloseMenu
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Event_CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Event_CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Event_OpenMenu
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Event_OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Event_OpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnExitEditMode
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnExitEditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnExitEditMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LoadFromFile
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::LoadFromFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LoadFromFile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SaveToFile
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::SaveToFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SaveToFile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LoadHudRayoutPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovable_C*                       Ref                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCustomHudLayoutSlot                  HudSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::LoadHudRayoutPosition(class UMovable_C* Ref, ESBCustomHudLayoutSlot HudSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LoadHudRayoutPosition");

	Params::LayoutableHUD_C_LoadHudRayoutPosition Parms{};

	Parms.Ref = Ref;
	Parms.HudSlot = HudSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SaveHudRayoutPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovable_C*                       Ref                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCustomHudLayoutSlot                  Param_Slot                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::SaveHudRayoutPosition(class UMovable_C* Ref, const ESBCustomHudLayoutSlot Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SaveHudRayoutPosition");

	Params::LayoutableHUD_C_SaveHudRayoutPosition Parms{};

	Parms.Ref = Ref;
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ContentActionEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::ContentActionEditMode(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ContentActionEditMode");

	Params::LayoutableHUD_C_ContentActionEditMode Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::ItemSelectorEditMode(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorEditMode");

	Params::LayoutableHUD_C_ItemSelectorEditMode Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.P021EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P021EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P021EditMode");

	Params::LayoutableHUD_C_P021EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ReticleEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::ReticleEditMode(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ReticleEditMode");

	Params::LayoutableHUD_C_ReticleEditMode Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.P006EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P006EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P006EditMode");

	Params::LayoutableHUD_C_P006EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.MiniMapEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::MiniMapEditMode(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "MiniMapEditMode");

	Params::LayoutableHUD_C_MiniMapEditMode Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.P020EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P020EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P020EditMode");

	Params::LayoutableHUD_C_P020EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.P019 EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEditMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P019_EditMode(bool Param_bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P019 EditMode");

	Params::LayoutableHUD_C_P019_EditMode Parms{};

	Parms.Param_bEditMode = Param_bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.P012EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P012EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P012EditMode");

	Params::LayoutableHUD_C_P012EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.DesignMode
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::DesignMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "DesignMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.P011EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P011EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P011EditMode");

	Params::LayoutableHUD_C_P011EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.Class EditMode Disable
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Class_EditMode_Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Class EditMode Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.P007EditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::P007EditMode(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "P007EditMode");

	Params::LayoutableHUD_C_P007EditMode Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetEditModeClassHuds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SetEditModeClassHuds(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetEditModeClassHuds");

	Params::LayoutableHUD_C_SetEditModeClassHuds Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::ShortcutRingEditMode(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingEditMode");

	Params::LayoutableHUD_C_ShortcutRingEditMode Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SkillInfoEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SkillInfoEditMode(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SkillInfoEditMode");

	Params::LayoutableHUD_C_SkillInfoEditMode Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.HPSTEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::HPSTEditMode(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "HPSTEditMode");

	Params::LayoutableHUD_C_HPSTEditMode Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.KeyGuideEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::KeyGuideEditMode(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "KeyGuideEditMode");

	Params::LayoutableHUD_C_KeyGuideEditMode Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetTutorialImagineGaugeHighlight
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::SetTutorialImagineGaugeHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetTutorialImagineGaugeHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SetTutorialSpecialGaugeHighlight
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::SetTutorialSpecialGaugeHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetTutorialSpecialGaugeHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SetTutorialSkillHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillPaletteTutorialFocus              FocusMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::SetTutorialSkillHighlight(ESkillPaletteTutorialFocus FocusMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetTutorialSkillHighlight");

	Params::LayoutableHUD_C_SetTutorialSkillHighlight Parms{};

	Parms.FocusMode = FocusMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetBufIconEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEdit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SetBufIconEditMode(bool IsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetBufIconEditMode");

	Params::LayoutableHUD_C_SetBufIconEditMode Parms{};

	Parms.IsEdit = IsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetFocusActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::SetFocusActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetFocusActor");

	Params::LayoutableHUD_C_SetFocusActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.FocusTargetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::FocusTargetEditMode(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "FocusTargetEditMode");

	Params::LayoutableHUD_C_FocusTargetEditMode Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetTutorialPlayerGaugeHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerGaugeHighlight                   HighLight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::SetTutorialPlayerGaugeHighlight(EPlayerGaugeHighlight HighLight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetTutorialPlayerGaugeHighlight");

	Params::LayoutableHUD_C_SetTutorialPlayerGaugeHighlight Parms{};

	Parms.HighLight = HighLight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.PartyInfoEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEditMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::PartyInfoEditMode(bool Param_bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PartyInfoEditMode");

	Params::LayoutableHUD_C_PartyInfoEditMode Parms{};

	Parms.Param_bEditMode = Param_bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.StepListEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEditMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::StepListEditMode(bool Param_bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "StepListEditMode");

	Params::LayoutableHUD_C_StepListEditMode Parms{};

	Parms.Param_bEditMode = Param_bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SetEditModeWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SetEditModeWidgets(bool IsEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetEditModeWidgets");

	Params::LayoutableHUD_C_SetEditModeWidgets Parms{};

	Parms.IsEditMode = IsEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.SaveChatTempLogWindowSize
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::SaveChatTempLogWindowSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SaveChatTempLogWindowSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.LoadChatTempLogWindowSize
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::LoadChatTempLogWindowSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "LoadChatTempLogWindowSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SetChatLogEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEdit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::SetChatLogEditMode(bool InEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SetChatLogEditMode");

	Params::LayoutableHUD_C_SetChatLogEditMode Parms{};

	Parms.InEdit = InEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.Chat_Construct
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Chat_Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Chat_Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRingEdit
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnCloseShortcutRingEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnCloseShortcutRingEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRingEdit
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnOpenShortcutRingEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnOpenShortcutRingEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRing
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnCloseShortcutRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnCloseShortcutRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRing
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnOpenShortcutRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnOpenShortcutRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.UnbindShortcutRing
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnbindShortcutRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnbindShortcutRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.BindShortcutRing
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::BindShortcutRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "BindShortcutRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.PresetEndCheckFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCancel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::PresetEndCheckFinish(bool bIsCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PresetEndCheckFinish");

	Params::LayoutableHUD_C_PresetEndCheckFinish Parms{};

	Parms.bIsCancel = bIsCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.PresetEndCheck
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::PresetEndCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PresetEndCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheckFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::PresetSelectContinueCheckFinish(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PresetSelectContinueCheckFinish");

	Params::LayoutableHUD_C_PresetSelectContinueCheckFinish Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheck
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::PresetSelectContinueCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "PresetSelectContinueCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ContinueDialogFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::ContinueDialogFinish(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ContinueDialogFinish");

	Params::LayoutableHUD_C_ContinueDialogFinish Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.OpenContinueCheckDialog
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OpenContinueCheckDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OpenContinueCheckDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnCloseWholeMapEditWindow
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnCloseWholeMapEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnCloseWholeMapEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnOpenWholeMapEditWindow
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::OnOpenWholeMapEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnOpenWholeMapEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.UnbindWholeMap
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnbindWholeMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnbindWholeMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.BindWholeMap
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::BindWholeMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "BindWholeMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnChangeVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnChangeVisibility");

	Params::LayoutableHUD_C_OnChangeVisibility Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.UnbindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnbindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnbindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.BindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::BindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "BindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnDeadPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::OnDeadPlayer(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnDeadPlayer");

	Params::LayoutableHUD_C_OnDeadPlayer Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.UnBind DeadCheck
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnBind_DeadCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnBind DeadCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Bind DeadCheck
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Bind_DeadCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Bind DeadCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnClosedMenuDetected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::OnClosedMenuDetected(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnClosedMenuDetected");

	Params::LayoutableHUD_C_OnClosedMenuDetected Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.OnRequestTerm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::OnRequestTerm(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnRequestTerm");

	Params::LayoutableHUD_C_OnRequestTerm Parms{};

	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.UnbindForceCloseEvent
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::UnbindForceCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "UnbindForceCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.BindForceCloseEvent
// (BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::BindForceCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "BindForceCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULayoutableHUD_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnDrop");

	Params::LayoutableHUD_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.Init
// (Private, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.Term
// (Private, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::Term()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Term");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.CollectMovealObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::CollectMovealObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "CollectMovealObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply ULayoutableHUD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnKeyDown");

	Params::LayoutableHUD_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.CreateClippingAnchors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAnchors                         Anchors                                                (Parm, OutParm, NoDestructor)

void ULayoutableHUD_C::CreateClippingAnchors(struct FAnchors* Anchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "CreateClippingAnchors");

	Params::LayoutableHUD_C_CreateClippingAnchors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Anchors != nullptr)
		*Anchors = std::move(Parms.Anchors);
}


// Function LayoutableHUD.LayoutableHUD_C.ZSort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      SortWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::ZSort(class UUserWidget* SortWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ZSort");

	Params::LayoutableHUD_C_ZSort Parms{};

	Parms.SortWidget = SortWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LayoutableHUD.LayoutableHUD_C.Get_PartyInfo_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility ULayoutableHUD_C::Get_PartyInfo_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "Get_PartyInfo_Visibility_0");

	Params::LayoutableHUD_C_Get_PartyInfo_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply ULayoutableHUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnMouseButtonDown");

	Params::LayoutableHUD_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.GetHitFlash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHitFlash_C*                      Param_HitFlash                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULayoutableHUD_C::GetHitFlash(class UHitFlash_C** Param_HitFlash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetHitFlash");

	Params::LayoutableHUD_C_GetHitFlash Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HitFlash != nullptr)
		*Param_HitFlash = Parms.Param_HitFlash;
}


// Function LayoutableHUD.LayoutableHUD_C.ChatTempLogsInit
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ChatTempLogsInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ChatTempLogsInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.SwitchingMap
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::SwitchingMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "SwitchingMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.EditMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PressTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULayoutableHUD_C::EditMap(float PressTime, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "EditMap");

	Params::LayoutableHUD_C_EditMap Parms{};

	Parms.PressTime = PressTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LayoutableHUD.LayoutableHUD_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULayoutableHUD_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "OnDragOver");

	Params::LayoutableHUD_C_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.NextStepList
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::NextStepList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "NextStepList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorExe
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ItemSelectorExe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorExe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftPress
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ItemSelectorMoveLeftPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorMoveLeftPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ItemSelectorMoveLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorMoveLeftRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightPress
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ItemSelectorMoveRightPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorMoveRightPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ItemSelectorMoveRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ItemSelectorMoveRightRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingClose
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ReleaseDialogWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ReleaseDialogWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ReleaseDialogWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF5
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF6
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF7
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF8
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF9
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF10
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF11
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.ShortcutRingExecuteF12
// (Public, BlueprintCallable, BlueprintEvent)

void ULayoutableHUD_C::ShortcutRingExecuteF12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "ShortcutRingExecuteF12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LayoutableHUD.LayoutableHUD_C.GetMinimapWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBMiniMapWidget*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMiniMapWidget* ULayoutableHUD_C::GetMinimapWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetMinimapWidget");

	Params::LayoutableHUD_C_GetMinimapWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.GetWholemapWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBWholeMap*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBWholeMap* ULayoutableHUD_C::GetWholemapWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetWholemapWidget");

	Params::LayoutableHUD_C_GetWholemapWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.GetShortcutRing
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBShortcutRingWidget*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingWidget* ULayoutableHUD_C::GetShortcutRing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetShortcutRing");

	Params::LayoutableHUD_C_GetShortcutRing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.GetPlayerGaugeBaseWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBPlayerGaugeBaseWidget*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGaugeBaseWidget* ULayoutableHUD_C::GetPlayerGaugeBaseWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetPlayerGaugeBaseWidget");

	Params::LayoutableHUD_C_GetPlayerGaugeBaseWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LayoutableHUD.LayoutableHUD_C.GetNewStepListWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBStepList*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBStepList* ULayoutableHUD_C::GetNewStepListWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LayoutableHUD_C", "GetNewStepListWidget");

	Params::LayoutableHUD_C_GetNewStepListWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


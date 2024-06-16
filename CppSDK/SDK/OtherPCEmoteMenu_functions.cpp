#pragma once

 

// Package: OtherPCEmoteMenu

#include "Basic.hpp"

#include "OtherPCEmoteMenu_classes.hpp"
#include "OtherPCEmoteMenu_parameters.hpp"


namespace SDK
{

// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ExecuteUbergraph_OtherPCEmoteMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCEmoteMenu_C::ExecuteUbergraph_OtherPCEmoteMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "ExecuteUbergraph_OtherPCEmoteMenu");

	Params::OtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCEmoteMenu_C::BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UOtherPCEmoteMenu_C::BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCEmoteMenu_C::CustomEvent(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "CustomEvent");

	Params::OtherPCEmoteMenu_C_CustomEvent Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateCategory
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::CreateCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "CreateCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmotionList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCEmoteMenu_C::UpdateEmotionList(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "UpdateEmotionList");

	Params::OtherPCEmoteMenu_C_UpdateEmotionList Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ForcedClose
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::ForcedClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "ForcedClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnJankenUIDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnJankenUIDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnJankenUIDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCEmoteMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnAnimationFinished");

	Params::OtherPCEmoteMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCEmoteMenu_C::OnSelect(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnSelect");

	Params::OtherPCEmoteMenu_C_OnSelect Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCEmoteMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCEmoteMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnTutorialHelp_Close
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnTutorialHelp_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnTutorialHelp_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRequestTutorialHelp
// (BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::OnRequestTutorialHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "OnRequestTutorialHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       InGridPanel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSlotCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCEmoteMenu_C::CreateEmptySlot(class UGridPanel* InGridPanel, int32 InSlotCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "CreateEmptySlot");

	Params::OtherPCEmoteMenu_C_CreateEmptySlot Parms{};

	Parms.InGridPanel = InGridPanel;
	Parms.InSlotCount = InSlotCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmotionList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::CreateEmotionList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "CreateEmotionList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ClearEmotionSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::ClearEmotionSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "ClearEmotionSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.SetRootVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCEmoteMenu_C::SetRootVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "SetRootVisible");

	Params::OtherPCEmoteMenu_C_SetRootVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Update Category
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::Update_Category()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "Update Category");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.GetPlayerCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ASBPlayerCharacter* UOtherPCEmoteMenu_C::GetPlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "GetPlayerCharacter");

	Params::OtherPCEmoteMenu_C_GetPlayerCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmoteIconEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCEmoteMenu_C::UpdateEmoteIconEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "UpdateEmoteIconEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Is Enable Emote Icon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCEmoteMenu_C::Is_Enable_Emote_Icon(const class FName& InputPin, bool* bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCEmoteMenu_C", "Is Enable Emote Icon");

	Params::OtherPCEmoteMenu_C_Is_Enable_Emote_Icon Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnable != nullptr)
		*bIsEnable = Parms.bIsEnable;
}

}


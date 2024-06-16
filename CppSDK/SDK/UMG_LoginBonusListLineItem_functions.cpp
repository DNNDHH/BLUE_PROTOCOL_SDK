#pragma once

 

// Package: UMG_LoginBonusListLineItem

#include "Basic.hpp"

#include "UMG_LoginBonusListLineItem_classes.hpp"
#include "UMG_LoginBonusListLineItem_parameters.hpp"


namespace SDK
{

// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.StumpAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLineItem_C::StumpAnimationEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "StumpAnimationEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_LoginBonusListLineItem_C*    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLineItem_C::ItemClick__DelegateSignature(int32 ID, class UUMG_LoginBonusListLineItem_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "ItemClick__DelegateSignature");

	Params::UMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature Parms{};

	Parms.ID = ID;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ExecuteUbergraph_UMG_LoginBonusListLineItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLineItem_C::ExecuteUbergraph_UMG_LoginBonusListLineItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "ExecuteUbergraph_UMG_LoginBonusListLineItem");

	Params::UMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LoginBonusListLineItem_C::BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LoginBonusListLineItem_C::BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLineItem_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "OnAnimationFinished");

	Params::UMG_LoginBonusListLineItem_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.PlayStumpAnimation
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLineItem_C::PlayStumpAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "PlayStumpAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowDayData       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    StumpOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Click                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusListLineItem_C::SetData(const struct FSBLoginBonusWindowDayData& Data, bool StumpOn, bool Click)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "SetData");

	Params::UMG_LoginBonusListLineItem_C_SetData Parms{};

	Parms.Data = std::move(Data);
	Parms.StumpOn = StumpOn;
	Parms.Click = Click;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetMouseClickValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLineItem_C::SetMouseClickValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "SetMouseClickValue");

	Params::UMG_LoginBonusListLineItem_C_SetMouseClickValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetBtnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusListLineItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "SetBtnSelected");

	Params::UMG_LoginBonusListLineItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetIconExtraData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBLoginBonusWindowItemData      ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LoginBonusListLineItem_C::SetIconExtraData(class UCommonIcon_C* IconWidget, const struct FSBLoginBonusWindowItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "SetIconExtraData");

	Params::UMG_LoginBonusListLineItem_C_SetIconExtraData Parms{};

	Parms.IconWidget = IconWidget;
	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnCloseAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLineItem_C::OnCloseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLineItem_C", "OnCloseAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}


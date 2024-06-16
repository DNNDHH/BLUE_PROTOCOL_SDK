#pragma once

 

// Package: EventShopProductBox_Label

#include "Basic.hpp"

#include "EventShopProductBox_Label_classes.hpp"
#include "EventShopProductBox_Label_parameters.hpp"


namespace SDK
{

// Function EventShopProductBox_Label.EventShopProductBox_Label_C.OnBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Label_C::OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Label_C", "OnBtnSelected__DelegateSignature");

	Params::EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Label.EventShopProductBox_Label_C.SetLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPickUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           LabelText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEventShopProductBox_Label_C::SetLabel(bool IsPickUp, const class FString& LabelText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Label_C", "SetLabel");

	Params::EventShopProductBox_Label_C_SetLabel Parms{};

	Parms.IsPickUp = IsPickUp;
	Parms.LabelText = std::move(LabelText);

	UObject::ProcessEvent(Func, &Parms);
}

}


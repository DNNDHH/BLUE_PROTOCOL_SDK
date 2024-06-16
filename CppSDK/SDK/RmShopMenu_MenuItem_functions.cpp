#pragma once

 

// Package: RmShopMenu_MenuItem

#include "Basic.hpp"

#include "RmShopMenu_MenuItem_classes.hpp"
#include "RmShopMenu_MenuItem_parameters.hpp"


namespace SDK
{

// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URmShopMenu_MenuItem_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.ExecuteUbergraph_RmShopMenu_MenuItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_MenuItem_C::ExecuteUbergraph_RmShopMenu_MenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "ExecuteUbergraph_RmShopMenu_MenuItem");

	Params::RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.UpdateSeasonPassFlag
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_MenuItem_C::UpdateSeasonPassFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "UpdateSeasonPassFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnUpdateSeasonPassAnyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_MenuItem_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "OnUpdateSeasonPassAnyInfo");

	Params::RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URmShopMenu_MenuItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem_C::BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URmShopMenu_MenuItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_MenuItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "PreConstruct");

	Params::RmShopMenu_MenuItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.SelectBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_MenuItem_C::SelectBtn(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem_C", "SelectBtn");

	Params::RmShopMenu_MenuItem_C_SelectBtn Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}


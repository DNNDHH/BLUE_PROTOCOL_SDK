#pragma once

 

// Package: WeaponList

#include "Basic.hpp"

#include "WeaponList_classes.hpp"
#include "WeaponList_parameters.hpp"


namespace SDK
{

// Function WeaponList.WeaponList_C.ExecuteUbergraph_WeaponList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponList_C::ExecuteUbergraph_WeaponList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "ExecuteUbergraph_WeaponList");

	Params::WeaponList_C_ExecuteUbergraph_WeaponList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponList.WeaponList_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponList_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "OnMouseLeave");

	Params::WeaponList_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponList.WeaponList_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponList_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "OnMouseEnter");

	Params::WeaponList_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponList.WeaponList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponList.WeaponList_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemIfno                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_InToolTipsEnable                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponList_C::SetData(const struct FOwnItemInfo& InOwnItemIfno, bool Param_InToolTipsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "SetData");

	Params::WeaponList_C_SetData Parms{};

	Parms.InOwnItemIfno = std::move(InOwnItemIfno);
	Parms.Param_InToolTipsEnable = Param_InToolTipsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponList.WeaponList_C.ReloadWeaponAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponList_C::ReloadWeaponAsset(int32 WeaponItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "ReloadWeaponAsset");

	Params::WeaponList_C_ReloadWeaponAsset Parms{};

	Parms.WeaponItemId = WeaponItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponList.WeaponList_C.WeaponList_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponList_C::WeaponList_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "WeaponList_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponList.WeaponList_C.Set Stack BIconby Own Item Info
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponList_C::Set_Stack_BIconby_Own_Item_Info(const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponList_C", "Set Stack BIconby Own Item Info");

	Params::WeaponList_C_Set_Stack_BIconby_Own_Item_Info Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}


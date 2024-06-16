#pragma once

 

// Package: WeaponSynthePart_TokenBox

#include "Basic.hpp"

#include "WeaponSynthePart_TokenBox_classes.hpp"
#include "WeaponSynthePart_TokenBox_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.EventSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_TokenBox_C::EventSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "EventSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.ExecuteUbergraph_WeaponSynthePart_TokenBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::ExecuteUbergraph_WeaponSynthePart_TokenBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "ExecuteUbergraph_WeaponSynthePart_TokenBox");

	Params::WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_TokenBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_TokenBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.OnSelectToken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponSynthePart_TokenBoxItem_C* Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::OnSelectToken(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "OnSelectToken");

	Params::WeaponSynthePart_TokenBox_C_OnSelectToken Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.BindOnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponSynthePart_TokenBoxItem_C* Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::BindOnSelected(class UWeaponSynthePart_TokenBoxItem_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "BindOnSelected");

	Params::WeaponSynthePart_TokenBox_C_BindOnSelected Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Clear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_TokenBox_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.AddItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBFusionTicketMasterData        SBFusionTicketMasterData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponSynthePart_TokenBoxItem_C* ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWeaponSynthePart_TokenBoxItem_C* UWeaponSynthePart_TokenBox_C::AddItem(bool bSelectable, const struct FSBFusionTicketMasterData& SBFusionTicketMasterData, int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "AddItem");

	Params::WeaponSynthePart_TokenBox_C_AddItem Parms{};

	Parms.bSelectable = bSelectable;
	Parms.SBFusionTicketMasterData = std::move(SBFusionTicketMasterData);
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GenerateToken
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFusionTicketType                     Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WeaponLv                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponSynthePart_TokenBoxItem_C* TokenBoxItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::GenerateToken(const ESBFusionTicketType Type, int32 WeaponLv, bool bSelectable, int32 Num, class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "GenerateToken");

	Params::WeaponSynthePart_TokenBox_C_GenerateToken Parms{};

	Parms.Type = Type;
	Parms.WeaponLv = WeaponLv;
	Parms.bSelectable = bSelectable;
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

	if (TokenBoxItem != nullptr)
		*TokenBoxItem = Parms.TokenBoxItem;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBox_C::SetEnable(int32 Param_Index, bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "SetEnable");

	Params::WeaponSynthePart_TokenBox_C_SetEnable Parms{};

	Parms.Param_Index = Param_Index;
	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetVisibleAlert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBox_C::SetVisibleAlert(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "SetVisibleAlert");

	Params::WeaponSynthePart_TokenBox_C_SetVisibleAlert Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetAlertText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_TokenBox_C::SetAlertText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "SetAlertText");

	Params::WeaponSynthePart_TokenBox_C_SetAlertText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetAlertTextID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                InTextTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::SetAlertTextID(class USBTextTableAsset* InTextTable, int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "SetAlertTextID");

	Params::WeaponSynthePart_TokenBox_C_SetAlertTextID Parms{};

	Parms.InTextTable = InTextTable;
	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBox_C::Select(int32 Param_Index, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "Select");

	Params::WeaponSynthePart_TokenBox_C_Select Parms{};

	Parms.Param_Index = Param_Index;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.OnSelect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponSynthePart_TokenBoxItem_C* SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::OnSelect(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "OnSelect");

	Params::WeaponSynthePart_TokenBox_C_OnSelect Parms{};

	Parms.IsChecked = IsChecked;
	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetTypeItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBFusionTicketType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponSynthePart_TokenBoxItem_C* TokenBoxItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::GetTypeItem(ESBFusionTicketType Type, class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "GetTypeItem");

	Params::WeaponSynthePart_TokenBox_C_GetTypeItem Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (TokenBoxItem != nullptr)
		*TokenBoxItem = Parms.TokenBoxItem;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.IsValidCostAll
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBox_C::IsValidCostAll(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "IsValidCostAll");

	Params::WeaponSynthePart_TokenBox_C_IsValidCostAll Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetCreateNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWeaponSynthePart_TokenBox_C::GetCreateNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "GetCreateNum");

	Params::WeaponSynthePart_TokenBox_C_GetCreateNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsSelected                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBox_C::IsSelected(bool* Param_IsSelected) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "IsSelected");

	Params::WeaponSynthePart_TokenBox_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsSelected != nullptr)
		*Param_IsSelected = Parms.Param_IsSelected;
}


// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetSelectedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWeaponSynthePart_TokenBoxItem_C* TokenBoxItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBox_C::GetSelectedItem(class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBox_C", "GetSelectedItem");

	Params::WeaponSynthePart_TokenBox_C_GetSelectedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TokenBoxItem != nullptr)
		*TokenBoxItem = Parms.TokenBoxItem;
}

}


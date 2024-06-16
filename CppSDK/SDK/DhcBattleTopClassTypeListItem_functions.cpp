#pragma once

 

// Package: DhcBattleTopClassTypeListItem

#include "Basic.hpp"

#include "DhcBattleTopClassTypeListItem_classes.hpp"
#include "DhcBattleTopClassTypeListItem_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDhcBattleTopClassTypeListItem_C* InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeListItem_C::OnClicked__DelegateSignature(class UDhcBattleTopClassTypeListItem_C* InSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "OnClicked__DelegateSignature");

	Params::DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature Parms{};

	Parms.InSelf = InSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.ExecuteUbergraph_DhcBattleTopClassTypeListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeListItem_C::ExecuteUbergraph_DhcBattleTopClassTypeListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "ExecuteUbergraph_DhcBattleTopClassTypeListItem");

	Params::DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTopClassTypeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTopClassTypeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTopClassTypeListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UDhcBattleTopClassTypeListItem_C::Setup(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "Setup");

	Params::DhcBattleTopClassTypeListItem_C_Setup Parms{};

	Parms.InScoreInfo = std::move(InScoreInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetupAsEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeListItem_C::SetupAsEmpty(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "SetupAsEmpty");

	Params::DhcBattleTopClassTypeListItem_C_SetupAsEmpty Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetIsCurrPlayerClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCurrPlayerClassType                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeListItem_C::SetIsCurrPlayerClassType(bool InIsCurrPlayerClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "SetIsCurrPlayerClassType");

	Params::DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType Parms{};

	Parms.InIsCurrPlayerClassType = InIsCurrPlayerClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeListItem_C::SetSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "SetSelected");

	Params::DhcBattleTopClassTypeListItem_C_SetSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetTextAndClassTypeIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHovered                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeListItem_C::SetTextAndClassTypeIconColor(bool InIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "SetTextAndClassTypeIconColor");

	Params::DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor Parms{};

	Parms.InIsHovered = InIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetScoreInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattleHighScoreInfo        OutScoreInfo                                           (Parm, OutParm)

void UDhcBattleTopClassTypeListItem_C::GetScoreInfo(struct FSBDhcBattleHighScoreInfo* OutScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "GetScoreInfo");

	Params::DhcBattleTopClassTypeListItem_C_GetScoreInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutScoreInfo != nullptr)
		*OutScoreInfo = std::move(Parms.OutScoreInfo);
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.IsScoreInfoEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsScoreInfoEmpty                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeListItem_C::IsScoreInfoEmpty(bool* OutIsScoreInfoEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "IsScoreInfoEmpty");

	Params::DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsScoreInfoEmpty != nullptr)
		*OutIsScoreInfoEmpty = Parms.OutIsScoreInfoEmpty;
}


// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetClassType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            OutClassType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeListItem_C::GetClassType(ESBClassType* OutClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeListItem_C", "GetClassType");

	Params::DhcBattleTopClassTypeListItem_C_GetClassType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutClassType != nullptr)
		*OutClassType = Parms.OutClassType;
}

}


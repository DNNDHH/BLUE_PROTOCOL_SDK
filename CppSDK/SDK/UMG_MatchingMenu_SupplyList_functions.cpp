#pragma once

 

// Package: UMG_MatchingMenu_SupplyList

#include "Basic.hpp"

#include "UMG_MatchingMenu_SupplyList_classes.hpp"
#include "UMG_MatchingMenu_SupplyList_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.OnClickIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 Param_DungeonSupply                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_SupplyList_C::OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& Param_DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "OnClickIcon__DelegateSignature");

	Params::UMG_MatchingMenu_SupplyList_C_OnClickIcon__DelegateSignature Parms{};

	Parms.Param_DungeonSupply = std::move(Param_DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.ExecuteUbergraph_UMG_MatchingMenu_SupplyList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::ExecuteUbergraph_UMG_MatchingMenu_SupplyList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "ExecuteUbergraph_UMG_MatchingMenu_SupplyList");

	Params::UMG_MatchingMenu_SupplyList_C_ExecuteUbergraph_UMG_MatchingMenu_SupplyList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UMG_MatchingMenu_SupplyList_C_BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             GameContentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::Setup(class FName GameContentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "Setup");

	Params::UMG_MatchingMenu_SupplyList_C_Setup Parms{};

	Parms.GameContentId = GameContentId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Clear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_SupplyList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.OnClickCommonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_SupplyList_C::OnClickCommonIcon(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "OnClickCommonIcon");

	Params::UMG_MatchingMenu_SupplyList_C_OnClickCommonIcon Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C.Setup2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_SupplyList_C::Setup2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_SupplyList_C", "Setup2");

	UObject::ProcessEvent(Func, nullptr);
}

}


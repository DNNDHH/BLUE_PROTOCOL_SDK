#pragma once

 

// Package: WBP_SkillHorizonBranchIcon

#include "Basic.hpp"

#include "WBP_SkillHorizonBranchIcon_classes.hpp"
#include "WBP_SkillHorizonBranchIcon_parameters.hpp"


namespace SDK
{

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.ExecuteUbergraph_WBP_SkillHorizonBranchIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::ExecuteUbergraph_WBP_SkillHorizonBranchIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "ExecuteUbergraph_WBP_SkillHorizonBranchIcon");

	Params::WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.SelectUpdate
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::SelectUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "SelectUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.SkillSetSingleCenter
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::SkillSetSingleCenter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "SkillSetSingleCenter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_13_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_13_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_13_OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_3_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_2_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_3_1_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.Init
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharaSkillMasteryInfo>   InSkillList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESkillTreeHorizonBranchType             Brunch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::Init(const TArray<struct FCharaSkillMasteryInfo>& InSkillList, ESkillTreeHorizonBranchType Brunch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "Init");

	Params::WBP_SkillHorizonBranchIcon_C_Init Parms{};

	Parms.InSkillList = std::move(InSkillList);
	Parms.Brunch = Brunch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.SetMulti
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::SetMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "SetMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillHorizonBranchIcon_C::BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.UpdetIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::UpdetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "UpdetIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.SkillSetSingleUpper
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillHorizonBranchIcon_C::SkillSetSingleUpper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "SkillSetSingleUpper");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillHorizonBranchIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillHorizonBranchIcon_C", "PreConstruct");

	Params::WBP_SkillHorizonBranchIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


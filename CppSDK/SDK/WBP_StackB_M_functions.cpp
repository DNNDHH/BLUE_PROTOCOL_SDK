#pragma once

 

// Package: WBP_StackB_M

#include "Basic.hpp"

#include "WBP_StackB_M_classes.hpp"
#include "WBP_StackB_M_parameters.hpp"


namespace SDK
{

// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon MBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StackNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_M_C::Set_Stack_BIcon_MBase(int32 Param_StackNum, bool IsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_M_C", "Set Stack BIcon MBase");

	Params::WBP_StackB_M_C_Set_Stack_BIcon_MBase Parms{};

	Parms.Param_StackNum = Param_StackNum;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_M_C::SetStackBIconEffect(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_M_C", "SetStackBIconEffect");

	Params::WBP_StackB_M_C_SetStackBIconEffect Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_M_C::Set_Stack_BIcon_One_Item(const struct FOwnItemInfo& Info, bool IsEffectiveDisplay, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_M_C", "Set Stack BIcon One Item");

	Params::WBP_StackB_M_C_Set_Stack_BIcon_One_Item Parms{};

	Parms.Info = std::move(Info);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One ItembyWeaponData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_M_C::Set_Stack_BIcon_One_ItembyWeaponData(const struct FSBWeaponItemData& Info, bool IsEffectiveDisplay, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_M_C", "Set Stack BIcon One ItembyWeaponData");

	Params::WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData Parms{};

	Parms.Info = std::move(Info);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconOneItemBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_M_C::SetStackBIconOneItemBase(int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_M_C", "SetStackBIconOneItemBase");

	Params::WBP_StackB_M_C_SetStackBIconOneItemBase Parms{};

	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;
	Parms.InIsEffectiveDisplay = InIsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}

}


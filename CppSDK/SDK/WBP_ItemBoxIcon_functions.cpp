#pragma once

 

// Package: WBP_ItemBoxIcon

#include "Basic.hpp"

#include "WBP_ItemBoxIcon_classes.hpp"
#include "WBP_ItemBoxIcon_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnAppraisalFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxIcon_C::OnAppraisalFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "OnAppraisalFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemBoxIcon_C*               Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxIcon_C::OnClick__DelegateSignature(class UWBP_ItemBoxIcon_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "OnClick__DelegateSignature");

	Params::WBP_ItemBoxIcon_C_OnClick__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.ExecuteUbergraph_WBP_ItemBoxIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxIcon_C::ExecuteUbergraph_WBP_ItemBoxIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "ExecuteUbergraph_WBP_ItemBoxIcon");

	Params::WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxIcon_C::BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxIcon_C::SetItem(int32 Param_Index, EItemType Type, bool IsUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "SetItem");

	Params::WBP_ItemBoxIcon_C_SetItem Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Type = Type;
	Parms.IsUnidentified = IsUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Icon Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSelected                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxIcon_C::Set_Icon_Selected(bool Param_IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "Set Icon Selected");

	Params::WBP_ItemBoxIcon_C_Set_Icon_Selected Parms{};

	Parms.Param_IsSelected = Param_IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bSelected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxIcon_C::IsSelected(bool* Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "IsSelected");

	Params::WBP_ItemBoxIcon_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bSelected != nullptr)
		*Param_bSelected = Parms.Param_bSelected;
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Select Num
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NuM                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxIcon_C::Set_Select_Num(int32 NuM, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "Set Select Num");

	Params::WBP_ItemBoxIcon_C_Set_Select_Num Parms{};

	Parms.NuM = NuM;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Reward Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Param_RewardItemType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxIcon_C::Set_Reward_Item(ESBRewardItemType Param_RewardItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "Set Reward Item");

	Params::WBP_ItemBoxIcon_C_Set_Reward_Item Parms{};

	Parms.Param_RewardItemType = Param_RewardItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           SBItemBoxContentParam                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ItemBoxIcon_C::SetItemBox(const struct FSBItemBoxContentParam& SBItemBoxContentParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "SetItemBox");

	Params::WBP_ItemBoxIcon_C_SetItemBox Parms{};

	Parms.SBItemBoxContentParam = std::move(SBItemBoxContentParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetIItemBoxToolTip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  InToolTipInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_ItemBoxIcon_C::SetIItemBoxToolTip(struct FST_ToolTipInfo& InToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "SetIItemBoxToolTip");

	Params::WBP_ItemBoxIcon_C_SetIItemBoxToolTip Parms{};

	Parms.InToolTipInfo = std::move(InToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);

	InToolTipInfo = std::move(Parms.InToolTipInfo);
}


// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBoxResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxResultItemData         ItemBoxResultItemData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ItemBoxIcon_C::SetItemBoxResult(const struct FSBItemBoxResultItemData& ItemBoxResultItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxIcon_C", "SetItemBoxResult");

	Params::WBP_ItemBoxIcon_C_SetItemBoxResult Parms{};

	Parms.ItemBoxResultItemData = std::move(ItemBoxResultItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}


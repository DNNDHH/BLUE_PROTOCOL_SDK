#pragma once

 

// Package: UMG_LiquidMemoryProductListItem

#include "Basic.hpp"

#include "UMG_LiquidMemoryProductListItem_classes.hpp"
#include "UMG_LiquidMemoryProductListItem_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnBtnHovered__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnBtnHovered__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnBtnUnhovered__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnBtnUnhovered__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnBtnSelected__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnBtnSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnAdd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnAdd__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnAdd__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnSub__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnSub__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnSub__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnOveredAddNumMax__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::OnOveredAddNumMax__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnOveredAddNumMax__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.OnPopupTokenList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_LiquidMemoryId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFullCharge                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::OnPopupTokenList__DelegateSignature(int32 Param_LiquidMemoryId, bool IsFullCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "OnPopupTokenList__DelegateSignature");

	Params::UMG_LiquidMemoryProductListItem_C_OnPopupTokenList__DelegateSignature Parms{};

	Parms.Param_LiquidMemoryId = Param_LiquidMemoryId;
	Parms.IsFullCharge = IsFullCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ExecuteUbergraph_UMG_LiquidMemoryProductListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::ExecuteUbergraph_UMG_LiquidMemoryProductListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "ExecuteUbergraph_UMG_LiquidMemoryProductListItem");

	Params::UMG_LiquidMemoryProductListItem_C_ExecuteUbergraph_UMG_LiquidMemoryProductListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__UMG_LiquidMemoryProductListItem_Btn1HIt_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__UMG_LiquidMemoryProductListItem_Btn_Ticket_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberPlus
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::NumberPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "NumberPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.NumberMinus
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::NumberMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "NumberMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatPlus
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::StartRepeatPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "StartRepeatPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.StartRepeatMinus
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::StartRepeatMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "StartRepeatMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseCountValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::SetPurchaseCountValue(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetPurchaseCountValue");

	Params::UMG_LiquidMemoryProductListItem_C_SetPurchaseCountValue Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLiquidMemoryMasterData        InLiquidMemoryMaster                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InUseBottleNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsCostDiscount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InCostDiscountRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUsable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::Init(const struct FSBLiquidMemoryMasterData& InLiquidMemoryMaster, int32 InUseBottleNum, bool InIsCostDiscount, float InCostDiscountRate, bool IsUsable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "Init");

	Params::UMG_LiquidMemoryProductListItem_C_Init Parms{};

	Parms.InLiquidMemoryMaster = std::move(InLiquidMemoryMaster);
	Parms.InUseBottleNum = InUseBottleNum;
	Parms.InIsCostDiscount = InIsCostDiscount;
	Parms.InCostDiscountRate = InCostDiscountRate;
	Parms.IsUsable = IsUsable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetTotalCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutPurchasePrice                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetTotalCost(int32* OutPurchasePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetTotalCost");

	Params::UMG_LiquidMemoryProductListItem_C_GetTotalCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPurchasePrice != nullptr)
		*OutPurchasePrice = Parms.OutPurchasePrice;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetUsingBottleNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBottleNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::SetUsingBottleNum(int32 InBottleNum, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetUsingBottleNum");

	Params::UMG_LiquidMemoryProductListItem_C_SetUsingBottleNum Parms{};

	Parms.InBottleNum = InBottleNum;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetUsingBottleNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutPurchaseNum                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetUsingBottleNum(int32* OutPurchaseNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetUsingBottleNum");

	Params::UMG_LiquidMemoryProductListItem_C_GetUsingBottleNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPurchaseNum != nullptr)
		*OutPurchaseNum = Parms.OutPurchaseNum;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetLiquidMemoryId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutProductItemIndex                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetLiquidMemoryId(int32* OutProductItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetLiquidMemoryId");

	Params::UMG_LiquidMemoryProductListItem_C_GetLiquidMemoryId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutProductItemIndex != nullptr)
		*OutProductItemIndex = Parms.OutProductItemIndex;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateUsingBottleNumberInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InUsingBottleNum                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::UpdateUsingBottleNumberInput(int32 InUsingBottleNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "UpdateUsingBottleNumberInput");

	Params::UMG_LiquidMemoryProductListItem_C_UpdateUsingBottleNumberInput Parms{};

	Parms.InUsingBottleNum = InUsingBottleNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetBtnSelected");

	Params::UMG_LiquidMemoryProductListItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetRemainUsableBottleNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Remain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetRemainUsableBottleNum(int32* Remain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetRemainUsableBottleNum");

	Params::UMG_LiquidMemoryProductListItem_C_GetRemainUsableBottleNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Remain != nullptr)
		*Remain = Parms.Remain;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.ButtonUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryProductListItem_C::ButtonUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "ButtonUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_LimitNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::SetLimit(int32 Param_LimitNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetLimit");

	Params::UMG_LiquidMemoryProductListItem_C_SetLimit Parms{};

	Parms.Param_LimitNum = Param_LimitNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetCostText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::SetCostText(int32 InCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetCostText");

	Params::UMG_LiquidMemoryProductListItem_C_SetCostText Parms{};

	Parms.InCost = InCost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCurrUseBottleNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutBottleNum                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetCurrUseBottleNum(int32* OutBottleNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetCurrUseBottleNum");

	Params::UMG_LiquidMemoryProductListItem_C_GetCurrUseBottleNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutBottleNum != nullptr)
		*OutBottleNum = Parms.OutBottleNum;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutCost                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::GetCost(int32* OutCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "GetCost");

	Params::UMG_LiquidMemoryProductListItem_C_GetCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCost != nullptr)
		*OutCost = Parms.OutCost;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTotalCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTotalCost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::SetTotalCost(int32 InTotalCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetTotalCost");

	Params::UMG_LiquidMemoryProductListItem_C_SetTotalCost Parms{};

	Parms.InTotalCost = InTotalCost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetPurchaseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::SetPurchaseEnable(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetPurchaseEnable");

	Params::UMG_LiquidMemoryProductListItem_C_SetPurchaseEnable Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetLiquidMemoryActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsActivated                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::SetLiquidMemoryActivated(bool bInIsActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetLiquidMemoryActivated");

	Params::UMG_LiquidMemoryProductListItem_C_SetLiquidMemoryActivated Parms{};

	Parms.bInIsActivated = bInIsActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.UpdateBottleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::UpdateBottleStatus(int32 InLiquidMemoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "UpdateBottleStatus");

	Params::UMG_LiquidMemoryProductListItem_C_UpdateBottleStatus Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetRemainingUseCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::SetRemainingUseCount(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetRemainingUseCount");

	Params::UMG_LiquidMemoryProductListItem_C_SetRemainingUseCount Parms{};

	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIconToolTip_C*             Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryProductListItem_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "CreateToolTipWidgetifNeeded");

	Params::UMG_LiquidMemoryProductListItem_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function UMG_LiquidMemoryProductListItem.UMG_LiquidMemoryProductListItem_C.SetTicketEnable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBLiquidMemoryAccumulateTokenInfo>AccumlulateItemMaster                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBTokenState>            InTokenList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsActivate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryProductListItem_C::SetTicketEnable(TArray<struct FSBLiquidMemoryAccumulateTokenInfo>& AccumlulateItemMaster, TArray<struct FSBTokenState>& InTokenList, bool IsActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryProductListItem_C", "SetTicketEnable");

	Params::UMG_LiquidMemoryProductListItem_C_SetTicketEnable Parms{};

	Parms.AccumlulateItemMaster = std::move(AccumlulateItemMaster);
	Parms.InTokenList = std::move(InTokenList);
	Parms.IsActivate = IsActivate;

	UObject::ProcessEvent(Func, &Parms);

	AccumlulateItemMaster = std::move(Parms.AccumlulateItemMaster);
	InTokenList = std::move(Parms.InTokenList);
}

}


#pragma once

 

// Package: QuestRewardIcon

#include "Basic.hpp"

#include "QuestRewardIcon_classes.hpp"
#include "QuestRewardIcon_parameters.hpp"


namespace SDK
{

// Function QuestRewardIcon.QuestRewardIcon_C.OnToggleCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsCheck                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::OnToggleCheck__DelegateSignature(bool Param_IsCheck, class UQuestRewardIcon_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "OnToggleCheck__DelegateSignature");

	Params::QuestRewardIcon_C_OnToggleCheck__DelegateSignature Parms{};

	Parms.Param_IsCheck = Param_IsCheck;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::OnClick__DelegateSignature(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "OnClick__DelegateSignature");

	Params::QuestRewardIcon_C_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.ExecuteUbergraph_QuestRewardIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::ExecuteUbergraph_QuestRewardIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "ExecuteUbergraph_QuestRewardIcon");

	Params::QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestRewardIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestRewardIcon_C::BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "PreConstruct");

	Params::QuestRewardIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestRewardIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.UnbindDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         DetailWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::UnbindDetail(class UUMG_ProductDetailMenu_C* DetailWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "UnbindDetail");

	Params::QuestRewardIcon_C_UnbindDetail Parms{};

	Parms.DetailWidget = DetailWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.BindDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         DetailWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::BindDetail(class UUMG_ProductDetailMenu_C* DetailWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "BindDetail");

	Params::QuestRewardIcon_C_BindDetail Parms{};

	Parms.DetailWidget = DetailWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::CustomEvent(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "CustomEvent");

	Params::QuestRewardIcon_C_CustomEvent Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  InMasterReward                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OverwriteAmount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   NewAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetRewardMaster(const struct FSBMasterReward& InMasterReward, bool IsUnidentified, bool OverwriteAmount, int32 NewAmount, int32 AmountMin, int32 AmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetRewardMaster");

	Params::QuestRewardIcon_C_SetRewardMaster Parms{};

	Parms.InMasterReward = std::move(InMasterReward);
	Parms.IsUnidentified = IsUnidentified;
	Parms.OverwriteAmount = OverwriteAmount;
	Parms.NewAmount = NewAmount;
	Parms.AmountMin = AmountMin;
	Parms.AmountMax = AmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetupIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_UniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUseRewardLottery                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetupIcon(ESBRewardItemType Param_RewardType, int32 ID, int32 Value, const class FString& Param_UniqueId, bool IsUnidentified, bool IsUseRewardLottery, int32 AmountMin, int32 AmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetupIcon");

	Params::QuestRewardIcon_C_SetupIcon Parms{};

	Parms.Param_RewardType = Param_RewardType;
	Parms.ID = ID;
	Parms.Value = Value;
	Parms.Param_UniqueId = std::move(Param_UniqueId);
	Parms.IsUnidentified = IsUnidentified;
	Parms.IsUseRewardLottery = IsUseRewardLottery;
	Parms.AmountMin = AmountMin;
	Parms.AmountMax = AmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseRewardLottery                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountRangeMin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountRangeMax                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetRewardIcon(class UCommonIcon_C* Self2, ESBRewardItemType InRewardType, int32 InId, int32 InAmount, bool bUseRewardLottery, int32 AmountRangeMin, int32 AmountRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetRewardIcon");

	Params::QuestRewardIcon_C_SetRewardIcon Parms{};

	Parms.Self2 = Self2;
	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.InAmount = InAmount;
	Parms.bUseRewardLottery = bUseRewardLottery;
	Parms.AmountRangeMin = AmountRangeMin;
	Parms.AmountRangeMax = AmountRangeMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetClassExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Exp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetClassExp(int32 Exp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetClassExp");

	Params::QuestRewardIcon_C_SetClassExp Parms{};

	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetMoney(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetMoney");

	Params::QuestRewardIcon_C_SetMoney Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLuminous                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InTeamBonusPercent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetOption(bool IsLuminous, bool IsBonus, int32 InTeamBonusPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetOption");

	Params::QuestRewardIcon_C_SetOption Parms{};

	Parms.IsLuminous = IsLuminous;
	Parms.IsBonus = IsBonus;
	Parms.InTeamBonusPercent = InTeamBonusPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetLuminous
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDraw                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetLuminous(bool InIsDraw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetLuminous");

	Params::QuestRewardIcon_C_SetLuminous Parms{};

	Parms.InIsDraw = InIsDraw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetBonus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bBonus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetBonus(bool Param_bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetBonus");

	Params::QuestRewardIcon_C_SetBonus Parms{};

	Parms.Param_bBonus = Param_bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetTeamBonus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTeamBonusPercent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetTeamBonus(int32 InTeamBonusPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetTeamBonus");

	Params::QuestRewardIcon_C_SetTeamBonus Parms{};

	Parms.InTeamBonusPercent = InTeamBonusPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetBGVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetBGVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetBGVisible");

	Params::QuestRewardIcon_C_SetBGVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetFloorNumberVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetFloorNumberVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetFloorNumberVisible");

	Params::QuestRewardIcon_C_SetFloorNumberVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetFlagVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetFlagVisible(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetFlagVisible");

	Params::QuestRewardIcon_C_SetFlagVisible Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIconAmountVisibility                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    UnderIconAmountVisibility                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetAmountVisibility(bool InIconAmountVisibility, bool UnderIconAmountVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAmountVisibility");

	Params::QuestRewardIcon_C_SetAmountVisibility Parms{};

	Parms.InIconAmountVisibility = InIconAmountVisibility;
	Parms.UnderIconAmountVisibility = UnderIconAmountVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetAmountColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAmountColor");

	Params::QuestRewardIcon_C_SetAmountColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ColorName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetAmountColorType(const class FString& ColorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAmountColorType");

	Params::QuestRewardIcon_C_SetAmountColorType Parms{};

	Parms.ColorName = std::move(ColorName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetAlertIconVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAlertIconVisible");

	Params::QuestRewardIcon_C_SetAlertIconVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsYellow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetAlertIconType(bool IsYellow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAlertIconType");

	Params::QuestRewardIcon_C_SetAlertIconType Parms{};

	Parms.IsYellow = IsYellow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetCheck(bool bInCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetCheck");

	Params::QuestRewardIcon_C_SetCheck Parms{};

	Parms.bInCheck = bInCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetGC(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetGC");

	Params::QuestRewardIcon_C_SetGC Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetSkyCoin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetSkyCoin(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetSkyCoin");

	Params::QuestRewardIcon_C_SetSkyCoin Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsAlwaysCategoryIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetImagine(int32 Param_Index, int32 Param_Amount, bool bIsAlwaysCategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetImagine");

	Params::QuestRewardIcon_C_SetImagine Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Amount = Param_Amount;
	Parms.bIsAlwaysCategoryIcon = bIsAlwaysCategoryIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetMountImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetMountImagine(int32 Param_Index, int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetMountImagine");

	Params::QuestRewardIcon_C_SetMountImagine Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetCostume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetCostume(int32 ItemIndex, int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetCostume");

	Params::QuestRewardIcon_C_SetCostume Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsAlwaysCategoryIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetWeapon(int32 Param_Index, int32 Param_Amount, bool bIsAlwaysCategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetWeapon");

	Params::QuestRewardIcon_C_SetWeapon Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Amount = Param_Amount;
	Parms.bIsAlwaysCategoryIcon = bIsAlwaysCategoryIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetWeaponDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                InWeaponData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestRewardIcon_C::SetWeaponDetails(int32 Param_Index, int32 InAmount, const class FString& InItemUniqueId, int32 InStorageNumber, const struct FSBWeaponItemData& InWeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetWeaponDetails");

	Params::QuestRewardIcon_C_SetWeaponDetails Parms{};

	Parms.Param_Index = Param_Index;
	Parms.InAmount = InAmount;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageNumber = InStorageNumber;
	Parms.InWeaponData = std::move(InWeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetItem(int32 ItemIndex, int32 Param_Amount, bool IsUnidentified, int32 AmountMin, int32 AmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetItem");

	Params::QuestRewardIcon_C_SetItem Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Param_Amount = Param_Amount;
	Parms.IsUnidentified = IsUnidentified;
	Parms.AmountMin = AmountMin;
	Parms.AmountMax = AmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetItemSimpleAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsUnIdentified                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetItemSimpleAmount(int32 InIndex, int32 InAmount, bool bIsUnIdentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetItemSimpleAmount");

	Params::QuestRewardIcon_C_SetItemSimpleAmount Parms{};

	Parms.InIndex = InIndex;
	Parms.InAmount = InAmount;
	Parms.bIsUnIdentified = bIsUnIdentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetStamp(int32 InIndex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetStamp");

	Params::QuestRewardIcon_C_SetStamp Parms{};

	Parms.InIndex = InIndex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetIconType
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTacticalAbility                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetIconType(bool IsTacticalAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetIconType");

	Params::QuestRewardIcon_C_SetIconType Parms{};

	Parms.IsTacticalAbility = IsTacticalAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetClickToShowDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsClickToShowDetail                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetClickToShowDetail(bool Param_bIsClickToShowDetail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetClickToShowDetail");

	Params::QuestRewardIcon_C_SetClickToShowDetail Parms{};

	Parms.Param_bIsClickToShowDetail = Param_bIsClickToShowDetail;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetReceivedStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsReceived                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetReceivedStyle(bool IsReceived)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetReceivedStyle");

	Params::QuestRewardIcon_C_SetReceivedStyle Parms{};

	Parms.IsReceived = IsReceived;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMasterOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  InMasterReward                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bUseRewardLottery                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetRewardMasterOnly(struct FSBMasterReward& InMasterReward, bool bUseRewardLottery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetRewardMasterOnly");

	Params::QuestRewardIcon_C_SetRewardMasterOnly Parms{};

	Parms.InMasterReward = std::move(InMasterReward);
	Parms.bUseRewardLottery = bUseRewardLottery;

	UObject::ProcessEvent(Func, &Parms);

	InMasterReward = std::move(Parms.InMasterReward);
}


// Function QuestRewardIcon.QuestRewardIcon_C.GetRewardId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_RewardId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::GetRewardId(int32* Param_RewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "GetRewardId");

	Params::QuestRewardIcon_C_GetRewardId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_RewardId != nullptr)
		*Param_RewardId = Parms.Param_RewardId;
}


// Function QuestRewardIcon.QuestRewardIcon_C.GetMasterReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterReward                  Param_MasterReward                                     (Parm, OutParm, NoDestructor)

void UQuestRewardIcon_C::GetMasterReward(struct FSBMasterReward* Param_MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "GetMasterReward");

	Params::QuestRewardIcon_C_GetMasterReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MasterReward != nullptr)
		*Param_MasterReward = std::move(Parms.Param_MasterReward);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetAmountColorBonus(bool IsBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAmountColorBonus");

	Params::QuestRewardIcon_C_SetAmountColorBonus Parms{};

	Parms.IsBonus = IsBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetRecipe(ESBRewardItemType InType, int32 InIndex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetRecipe");

	Params::QuestRewardIcon_C_SetRecipe Parms{};

	Parms.InType = InType;
	Parms.InIndex = InIndex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetRecipeSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIdex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetRecipeSet(int32 InIdex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetRecipeSet");

	Params::QuestRewardIcon_C_SetRecipeSet Parms{};

	Parms.InIdex = InIdex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetAchivement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIdex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetAchivement(int32 InIdex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetAchivement");

	Params::QuestRewardIcon_C_SetAchivement Parms{};

	Parms.InIdex = InIdex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetLiquidMemory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::SetLiquidMemory(int32 InIndex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetLiquidMemory");

	Params::QuestRewardIcon_C_SetLiquidMemory Parms{};

	Parms.InIndex = InIndex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetUnknown
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::SetUnknown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetUnknown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetUnidentifiedIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::SetUnidentifiedIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetUnidentifiedIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.SetTacticalAbility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bIsClickToShowDetail                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::SetTacticalAbility(int32 SkillId, int32 SkillLV, bool Param_bIsClickToShowDetail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "SetTacticalAbility");

	Params::QuestRewardIcon_C_SetTacticalAbility Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;
	Parms.Param_bIsClickToShowDetail = Param_bIsClickToShowDetail;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestRewardIcon.QuestRewardIcon_C.CreateDetail
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::CreateDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "CreateDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.DeleteDetail
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::DeleteDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "DeleteDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.PlayAnimTeamBonus
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::PlayAnimTeamBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "PlayAnimTeamBonus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.StopAnimTeamBonus
// (Private, BlueprintCallable, BlueprintEvent)

void UQuestRewardIcon_C::StopAnimTeamBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "StopAnimTeamBonus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorWhite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::GetAmountColorWhite(struct FLinearColor* Color) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "GetAmountColorWhite");

	Params::QuestRewardIcon_C_GetAmountColorWhite Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorYellow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::GetAmountColorYellow(struct FLinearColor* Color) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "GetAmountColorYellow");

	Params::QuestRewardIcon_C_GetAmountColorYellow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorOrange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRewardIcon_C::GetAmountColorOrange(struct FLinearColor* Color) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "GetAmountColorOrange");

	Params::QuestRewardIcon_C_GetAmountColorOrange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function QuestRewardIcon.QuestRewardIcon_C.isDetailWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRewardIcon_C::IsDetailWindow(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestRewardIcon_C", "isDetailWindow");

	Params::QuestRewardIcon_C_IsDetailWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}


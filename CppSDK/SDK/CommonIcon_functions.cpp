#pragma once

 

// Package: CommonIcon

#include "Basic.hpp"

#include "CommonIcon_classes.hpp"
#include "CommonIcon_parameters.hpp"


namespace SDK
{

// Function CommonIcon.CommonIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnClick__DelegateSignature");

	Params::CommonIcon_C_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::OnPressed__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnPressed__DelegateSignature");

	Params::CommonIcon_C_OnPressed__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::OnClickRight__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnClickRight__DelegateSignature");

	Params::CommonIcon_C_OnClickRight__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnPressedRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::OnPressedRight__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnPressedRight__DelegateSignature");

	Params::CommonIcon_C_OnPressedRight__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.ExecuteUbergraph_CommonIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::ExecuteUbergraph_CommonIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "ExecuteUbergraph_CommonIcon");

	Params::CommonIcon_C_ExecuteUbergraph_CommonIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetOrnament
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplayLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetOrnament(int32 InItemIndex, bool bDisplayLockIcon, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetOrnament");

	Params::CommonIcon_C_SetOrnament Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bDisplayLockIcon = bDisplayLockIcon;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconAdventureBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconAdventureBoard(int32 ID, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconAdventureBoard");

	Params::CommonIcon_C_SetIconAdventureBoard Parms{};

	Parms.ID = ID;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconRealGoods
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconRealGoods(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconRealGoods");

	Params::CommonIcon_C_SetIconRealGoods Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconUseLotteryGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLotteryGroupId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAlwaysCategoryIcon                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InAmountMin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmountMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconUseLotteryGroup(int32 InLotteryGroupId, int32 InAmount, bool bAlwaysCategoryIcon, bool bLimitedTime, int32 InAmountMin, int32 InAmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconUseLotteryGroup");

	Params::CommonIcon_C_SetIconUseLotteryGroup Parms{};

	Parms.InLotteryGroupId = InLotteryGroupId;
	Parms.InAmount = InAmount;
	Parms.bAlwaysCategoryIcon = bAlwaysCategoryIcon;
	Parms.bLimitedTime = bLimitedTime;
	Parms.InAmountMin = InAmountMin;
	Parms.InAmountMax = InAmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplayLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsUnidentified                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InItemAmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemAmountMax                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconItem(int32 InItemIndex, int32 InItemAmount, bool bDisplayLockIcon, bool Param_IsUnidentified, bool bLimitedTime, int32 InItemAmountMin, int32 InItemAmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconItem");

	Params::CommonIcon_C_SetIconItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemAmount = InItemAmount;
	Parms.bDisplayLockIcon = bDisplayLockIcon;
	Parms.Param_IsUnidentified = Param_IsUnidentified;
	Parms.bLimitedTime = bLimitedTime;
	Parms.InItemAmountMin = InItemAmountMin;
	Parms.InItemAmountMax = InItemAmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetLimitedTimeIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetLimitedTimeIcon(bool bLimitedTime, const class FString& EventTermId, int32 DurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetLimitedTimeIcon");

	Params::CommonIcon_C_SetLimitedTimeIcon Parms{};

	Parms.bLimitedTime = bLimitedTime;
	Parms.EventTermId = std::move(EventTermId);
	Parms.DurationMinutes = DurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonIcon_C::BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonIcon_C::BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetIconImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInUseClassTypeForLevelSync                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconImagine(int32 InImagineItemId, const class FString& UniqueId, int32 StorageNumber, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool bInForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconImagine");

	Params::CommonIcon_C_SetIconImagine Parms{};

	Parms.InImagineItemId = InImagineItemId;
	Parms.UniqueId = std::move(UniqueId);
	Parms.StorageNumber = StorageNumber;
	Parms.bLimitedTime = bLimitedTime;
	Parms.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconImagineForReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLotteryGroupId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsAlwaysCategoryIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconImagineForReward(int32 InLotteryGroupId, int32 InAmount, bool bIsAlwaysCategoryIcon, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconImagineForReward");

	Params::CommonIcon_C_SetIconImagineForReward Parms{};

	Parms.InLotteryGroupId = InLotteryGroupId;
	Parms.InAmount = InAmount;
	Parms.bIsAlwaysCategoryIcon = bIsAlwaysCategoryIcon;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconWeaponForReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLotteryGroupId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsAlwaysCayegoryIcon                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconWeaponForReward(int32 InLotteryGroupId, int32 InAmount, bool bIsAlwaysCayegoryIcon, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconWeaponForReward");

	Params::CommonIcon_C_SetIconWeaponForReward Parms{};

	Parms.InLotteryGroupId = InLotteryGroupId;
	Parms.InAmount = InAmount;
	Parms.bIsAlwaysCayegoryIcon = bIsAlwaysCayegoryIcon;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDetailsMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber, bool bLimitedTime, bool bInForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconWeapon");

	Params::CommonIcon_C_SetIconWeapon Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.IsDetailsMode = IsDetailsMode;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageNumber = InStorageNumber;
	Parms.bLimitedTime = bLimitedTime;
	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconRecipeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconRecipeSet(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconRecipeSet");

	Params::CommonIcon_C_SetIconRecipeSet Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "PreConstruct");

	Params::CommonIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconStampWithToolTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconStampWithToolTip(int32 StampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconStampWithToolTip");

	Params::CommonIcon_C_SetIconStampWithToolTip Parms{};

	Parms.StampId = StampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconPointTypeReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconPointTypeReward(ESBRewardItemType RewardType, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconPointTypeReward");

	Params::CommonIcon_C_SetIconPointTypeReward Parms{};

	Parms.RewardType = RewardType;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconLiquidMemory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconLiquidMemory(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconLiquidMemory");

	Params::CommonIcon_C_SetIconLiquidMemory Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconAchivement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconAchivement(int32 ID, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconAchivement");

	Params::CommonIcon_C_SetIconAchivement Parms{};

	Parms.ID = ID;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconRecipe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconRecipe(ESBRewardItemType Type, int32 ID, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconRecipe");

	Params::CommonIcon_C_SetIconRecipe Parms{};

	Parms.Type = Type;
	Parms.ID = ID;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconToken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconToken(int32 ID, int32 Amount, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconToken");

	Params::CommonIcon_C_SetIconToken Parms{};

	Parms.ID = ID;
	Parms.Amount = Amount;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconStampCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconStampCategory(const int32 CategoryId, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconStampCategory");

	Params::CommonIcon_C_SetIconStampCategory Parms{};

	Parms.CategoryId = CategoryId;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set RewardCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::Set_RewardCategory(ESBRewardItemType RewardItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set RewardCategory");

	Params::CommonIcon_C_Set_RewardCategory Parms{};

	Parms.RewardItemType = RewardItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.WidgetAnimationEvt_AnimEffect1_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCommonIcon_C::WidgetAnimationEvt_AnimEffect1_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "WidgetAnimationEvt_AnimEffect1_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetIconCostume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplayLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconCostume(int32 InItemIndex, bool bDisplayLockIcon, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconCostume");

	Params::CommonIcon_C_SetIconCostume Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bDisplayLockIcon = bDisplayLockIcon;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconBasic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconBasic(EItemType Selection, int32 InItemIndex, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconBasic");

	Params::CommonIcon_C_SetIconBasic Parms{};

	Parms.Selection = Selection;
	Parms.InItemIndex = InItemIndex;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconStamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetIconStamp(const class FString& StampId, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconStamp");

	Params::CommonIcon_C_SetIconStamp Parms{};

	Parms.StampId = std::move(StampId);
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.IconLoadRequestCheckStart
// (BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::IconLoadRequestCheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "IconLoadRequestCheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.IconLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Param_NowLoadTexture                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIcon_C::IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "IconLoadStart");

	Params::CommonIcon_C_IconLoadStart Parms{};

	Parms.Param_NowLoadTexture = Param_NowLoadTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.IconLoadRequest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        TextureReference                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCommonIcon_C::IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "IconLoadRequest");

	Params::CommonIcon_C_IconLoadRequest Parms{};

	Parms.TextureReference = TextureReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetIconMountImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   StorageId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetIconMountImagine(int32 InIndex, const class FString& InUniqueId, bool bLimitedTime, int32 StorageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetIconMountImagine");

	Params::CommonIcon_C_SetIconMountImagine Parms{};

	Parms.InIndex = InIndex;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.bLimitedTime = bLimitedTime;
	Parms.StorageId = StorageId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommonIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnMouseEnter");

	Params::CommonIcon_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnLoaded_C8DDBE9E482CE6A9639395A6A23184BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::OnLoaded_C8DDBE9E482CE6A9639395A6A23184BE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnLoaded_C8DDBE9E482CE6A9639395A6A23184BE");

	Params::CommonIcon_C_OnLoaded_C8DDBE9E482CE6A9639395A6A23184BE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetMoney(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetMoney");

	Params::CommonIcon_C_SetMoney Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetEmotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetEmotion(const class FString& ID, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetEmotion");

	Params::CommonIcon_C_SetEmotion Parms{};

	Parms.ID = std::move(ID);
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCommonIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "GetToolTipWidget_0");

	Params::CommonIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonIcon.CommonIcon_C.CreateToolTipWidgetifNeeded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIconToolTip_C*             Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "CreateToolTipWidgetifNeeded");

	Params::CommonIcon_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function CommonIcon.CommonIcon_C.SetAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseGrouping                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAmount(int32 Amount, bool UseGrouping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount");

	Params::CommonIcon_C_SetAmount Parms{};

	Parms.Amount = Amount;
	Parms.UseGrouping = UseGrouping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmountRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetAmountRange(int32 AmountMin, int32 AmountMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmountRange");

	Params::CommonIcon_C_SetAmountRange Parms{};

	Parms.AmountMin = AmountMin;
	Parms.AmountMax = AmountMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmountText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIcon_C::SetAmountText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmountText");

	Params::CommonIcon_C_SetAmountText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmountValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUseGrouping                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetAmountValue(bool bUseGrouping, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmountValue");

	Params::CommonIcon_C_SetAmountValue Parms{};

	Parms.bUseGrouping = bUseGrouping;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAmountVisibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmountVisibility");

	Params::CommonIcon_C_SetAmountVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIcon_C::SetAmount2Text(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2Text");

	Params::CommonIcon_C_SetAmount2Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseGrouping                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAmount2Value(int32 Value, bool bUseGrouping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2Value");

	Params::CommonIcon_C_SetAmount2Value Parms{};

	Parms.Value = Value;
	Parms.bUseGrouping = bUseGrouping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAmount2Visibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2Visibility");

	Params::CommonIcon_C_SetAmount2Visibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2VisibilityByAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAmount2VisibilityByAmount(int32 Amount, bool* bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2VisibilityByAmount");

	Params::CommonIcon_C_SetAmount2VisibilityByAmount Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (bVisible != nullptr)
		*bVisible = Parms.bVisible;
}


// Function CommonIcon.CommonIcon_C.SetEquipmentIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetEquipmentIconVisibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetEquipmentIconVisibility");

	Params::CommonIcon_C_SetEquipmentIconVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetShortcutRegisteredIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetShortcutRegisteredIconVisibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetShortcutRegisteredIconVisibility");

	Params::CommonIcon_C_SetShortcutRegisteredIconVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetGC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetGC(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetGC");

	Params::CommonIcon_C_SetGC Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetBrokenData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::SetBrokenData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetBrokenData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetItemRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRarity                               InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetItemRarity(ESBRarity InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetItemRarity");

	Params::CommonIcon_C_SetItemRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetEmptyStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::SetEmptyStamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetEmptyStamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetGrayOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsGrayOut                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetGrayOut(bool Param_IsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetGrayOut");

	Params::CommonIcon_C_SetGrayOut Parms{};

	Parms.Param_IsGrayOut = Param_IsGrayOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetReceivedStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsReceived                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetReceivedStyle(bool bIsReceived)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetReceivedStyle");

	Params::CommonIcon_C_SetReceivedStyle Parms{};

	Parms.bIsReceived = bIsReceived;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetLockIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetLockIconVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetLockIconVisibility");

	Params::CommonIcon_C_SetLockIconVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.ResetPartsVisivility
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::ResetPartsVisivility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "ResetPartsVisivility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRarity                               InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetRarity(ESBRarity InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetRarity");

	Params::CommonIcon_C_SetRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetImagineRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRarity                               InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetImagineRarity(ESBRarity InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetImagineRarity");

	Params::CommonIcon_C_SetImagineRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetClassExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Exp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetClassExp(int32 Exp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetClassExp");

	Params::CommonIcon_C_SetClassExp Parms{};

	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetImagineSimpleTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsImagineSimpleTooltip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetImagineSimpleTooltip(bool Param_IsImagineSimpleTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetImagineSimpleTooltip");

	Params::CommonIcon_C_SetImagineSimpleTooltip Parms{};

	Parms.Param_IsImagineSimpleTooltip = Param_IsImagineSimpleTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.ItemTypeToToolTipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EToolTipType                            ToolTipType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "ItemTypeToToolTipType");

	Params::CommonIcon_C_ItemTypeToToolTipType Parms{};

	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (ToolTipType != nullptr)
		*ToolTipType = Parms.ToolTipType;
}


// Function CommonIcon.CommonIcon_C.SetSkyCoin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetSkyCoin(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetSkyCoin");

	Params::CommonIcon_C_SetSkyCoin Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.PlayAnimEffect1
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::PlayAnimEffect1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "PlayAnimEffect1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetRewardTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetRewardTextColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetRewardTextColor");

	Params::CommonIcon_C_SetRewardTextColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.GetRewardItemIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (Parm, OutParm, HasGetValueTypeHash)

void UCommonIcon_C::GetRewardItemIcon(ESBRewardItemType RewardItemType, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "GetRewardItemIcon");

	Params::CommonIcon_C_GetRewardItemIcon Parms{};

	Parms.RewardItemType = RewardItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function CommonIcon.CommonIcon_C.Set New Mark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::Set_New_Mark(bool IsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set New Mark");

	Params::CommonIcon_C_Set_New_Mark Parms{};

	Parms.IsNew = IsNew;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetLimitedIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetLimitedIconVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetLimitedIconVisibility");

	Params::CommonIcon_C_SetLimitedIconVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Reward Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmountMinForTooltip                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseRewardLottery                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountRangeMin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountRangeMax                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::Set_Reward_Icon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMinForTooltip, bool bUseRewardLottery, bool bLimitedTime, int32 AmountRangeMin, int32 AmountRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Reward Icon");

	Params::CommonIcon_C_Set_Reward_Icon Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.InAmount = InAmount;
	Parms.InAmountMinForTooltip = InAmountMinForTooltip;
	Parms.bUseRewardLottery = bUseRewardLottery;
	Parms.bLimitedTime = bLimitedTime;
	Parms.AmountRangeMin = AmountRangeMin;
	Parms.AmountRangeMax = AmountRangeMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetMasterReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonIcon_C::SetMasterReward(const struct FSBMasterReward& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetMasterReward");

	Params::CommonIcon_C_SetMasterReward Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetColorBadgeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetColorBadgeVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetColorBadgeVisibility");

	Params::CommonIcon_C_SetColorBadgeVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetColorBadgeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EColorBadgeType                         InColorBadgeType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetColorBadgeType(EColorBadgeType InColorBadgeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetColorBadgeType");

	Params::CommonIcon_C_SetColorBadgeType Parms{};

	Parms.InColorBadgeType = InColorBadgeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetColorBadgeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetColorBadgeColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetColorBadgeColor");

	Params::CommonIcon_C_SetColorBadgeColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetColorBadgeExtraColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor1                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InColor2                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::SetColorBadgeExtraColor(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetColorBadgeExtraColor");

	Params::CommonIcon_C_SetColorBadgeExtraColor Parms{};

	Parms.InColor1 = std::move(InColor1);
	Parms.InColor2 = std::move(InColor2);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetUnusedMarkVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetUnusedMarkVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetUnusedMarkVisibility");

	Params::CommonIcon_C_SetUnusedMarkVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetProductData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetProductData");

	Params::CommonIcon_C_SetProductData Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function CommonIcon.CommonIcon_C.SetItemBoxContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonIcon_C::SetItemBoxContent(const struct FSBItemBoxContentParam& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetItemBoxContent");

	Params::CommonIcon_C_SetItemBoxContent Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetUnidentifiedIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::SetUnidentifiedIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetUnidentifiedIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bNoHitVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bKeepSpaceAtButtonDisable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetButtonActive(bool Active, bool bNoHitVisible, bool Param_bKeepSpaceAtButtonDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetButtonActive");

	Params::CommonIcon_C_SetButtonActive Parms{};

	Parms.Active = Active;
	Parms.bNoHitVisible = bNoHitVisible;
	Parms.Param_bKeepSpaceAtButtonDisable = Param_bKeepSpaceAtButtonDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Icon Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::Set_Icon_Selected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Icon Selected");

	Params::CommonIcon_C_Set_Icon_Selected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Pressed Sound Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::Set_Pressed_Sound_Id(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Pressed Sound Id");

	Params::CommonIcon_C_Set_Pressed_Sound_Id Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Hovered Sound Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::Set_Hovered_Sound_Id(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Hovered Sound Id");

	Params::CommonIcon_C_Set_Hovered_Sound_Id Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Hovered Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIcon_C::Set_Hovered_Color(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Hovered Color");

	Params::CommonIcon_C_Set_Hovered_Color Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCommonIcon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnMouseButtonDown");

	Params::CommonIcon_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonIcon.CommonIcon_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCommonIcon_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "OnMouseButtonUp");

	Params::CommonIcon_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonIcon.CommonIcon_C.SetAlertIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAlertIconVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAlertIconVisible");

	Params::CommonIcon_C_SetAlertIconVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAlertIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsYellow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetAlertIconType(bool IsYellow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAlertIconType");

	Params::CommonIcon_C_SetAlertIconType Parms{};

	Parms.IsYellow = IsYellow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIcon_C::SetAmount2Color(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2Color");

	Params::CommonIcon_C_SetAmount2Color Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetAmount2Padding
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::SetAmount2Padding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetAmount2Padding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.SetEquipmentPresetIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EquipmentVisibility                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PresetVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetEquipmentPresetIconVisibility(bool EquipmentVisibility, bool PresetVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetEquipmentPresetIconVisibility");

	Params::CommonIcon_C_SetEquipmentPresetIconVisibility Parms{};

	Parms.EquipmentVisibility = EquipmentVisibility;
	Parms.PresetVisibility = PresetVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.Set Stack BIcon S
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   StackNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::Set_Stack_BIcon_S(bool Visible, int32 StackNum, bool IsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Stack BIcon S");

	Params::CommonIcon_C_Set_Stack_BIcon_S Parms{};

	Parms.Visible = Visible;
	Parms.StackNum = StackNum;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.ResetAmount2Padding
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIcon_C::ResetAmount2Padding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "ResetAmount2Padding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIcon.CommonIcon_C.Set Stack BIcon S One Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::Set_Stack_BIcon_S_One_Item(bool Visible, const struct FOwnItemInfo& Info, bool IsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "Set Stack BIcon S One Item");

	Params::CommonIcon_C_Set_Stack_BIcon_S_One_Item Parms{};

	Parms.Visible = Visible;
	Parms.Info = std::move(Info);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetPickup(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetPickup");

	Params::CommonIcon_C_SetPickup Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetTooltipEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetTooltipEnable");

	Params::CommonIcon_C_SetTooltipEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetToolTipInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  InToolTipInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCommonIcon_C::SetToolTipInfo(struct FST_ToolTipInfo& InToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetToolTipInfo");

	Params::CommonIcon_C_SetToolTipInfo Parms{};

	Parms.InToolTipInfo = std::move(InToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);

	InToolTipInfo = std::move(Parms.InToolTipInfo);
}


// Function CommonIcon.CommonIcon_C.SetToolTipWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InPlayerProfileWeaponData                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIcon_C::SetToolTipWeaponData(const struct FSBWeaponItemData& InPlayerProfileWeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetToolTipWeaponData");

	Params::CommonIcon_C_SetToolTipWeaponData Parms{};

	Parms.InPlayerProfileWeaponData = std::move(InPlayerProfileWeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIcon.CommonIcon_C.SetStackBIconSOneItemBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIcon_C::SetStackBIconSOneItemBase(bool InIsVisible, EItemType InItemType, int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIcon_C", "SetStackBIconSOneItemBase");

	Params::CommonIcon_C_SetStackBIconSOneItemBase Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InItemType = InItemType;
	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;
	Parms.InIsEffectiveDisplay = InIsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

}


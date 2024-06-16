#pragma once

 

// Package: CommonIconSimple

#include "Basic.hpp"

#include "CommonIconSimple_classes.hpp"
#include "CommonIconSimple_parameters.hpp"


namespace SDK
{

// Function CommonIconSimple.CommonIconSimple_C.ExecuteUbergraph_CommonIconSimple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::ExecuteUbergraph_CommonIconSimple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "ExecuteUbergraph_CommonIconSimple");

	Params::CommonIconSimple_C_ExecuteUbergraph_CommonIconSimple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconRecipeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconRecipeSet(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconRecipeSet");

	Params::CommonIconSimple_C_SetIconRecipeSet Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconStampWithToolTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconStampWithToolTip(int32 StampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconStampWithToolTip");

	Params::CommonIconSimple_C_SetIconStampWithToolTip Parms{};

	Parms.StampId = StampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconLiquidMemory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconLiquidMemory(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconLiquidMemory");

	Params::CommonIconSimple_C_SetIconLiquidMemory Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplayLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconSimple_C::SetIconItem(int32 InItemIndex, int32 InItemAmount, bool bDisplayLockIcon, bool IsUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconItem");

	Params::CommonIconSimple_C_SetIconItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemAmount = InItemAmount;
	Parms.bDisplayLockIcon = bDisplayLockIcon;
	Parms.IsUnidentified = IsUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconAchivement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconAchivement(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconAchivement");

	Params::CommonIconSimple_C_SetIconAchivement Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconRecipe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconRecipe(ESBRewardItemType Type, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconRecipe");

	Params::CommonIconSimple_C_SetIconRecipe Parms{};

	Parms.Type = Type;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconToken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconToken(int32 ID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconToken");

	Params::CommonIconSimple_C_SetIconToken Parms{};

	Parms.ID = ID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconStampCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconStampCategory(const int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconStampCategory");

	Params::CommonIconSimple_C_SetIconStampCategory Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconImagine(int32 InImagineItemId, const class FString& UniqueId, int32 StorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconImagine");

	Params::CommonIconSimple_C_SetIconImagine Parms{};

	Parms.InImagineItemId = InImagineItemId;
	Parms.UniqueId = std::move(UniqueId);
	Parms.StorageNumber = StorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.Set RewardCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::Set_RewardCategory(ESBRewardItemType RewardItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "Set RewardCategory");

	Params::CommonIconSimple_C_Set_RewardCategory Parms{};

	Parms.RewardItemType = RewardItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconCostume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplayLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconSimple_C::SetIconCostume(int32 InItemIndex, bool bDisplayLockIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconCostume");

	Params::CommonIconSimple_C_SetIconCostume Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bDisplayLockIcon = bDisplayLockIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconBasic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconBasic(EItemType Selection, int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconBasic");

	Params::CommonIconSimple_C_SetIconBasic Parms{};

	Parms.Selection = Selection;
	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDetailsMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconWeapon");

	Params::CommonIconSimple_C_SetIconWeapon Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.IsDetailsMode = IsDetailsMode;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.IconLoadRequestCheckStart
// (BlueprintCallable, BlueprintEvent)

void UCommonIconSimple_C::IconLoadRequestCheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "IconLoadRequestCheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconSimple.CommonIconSimple_C.IconLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Param_NowLoadTexture                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconSimple_C::IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "IconLoadStart");

	Params::CommonIconSimple_C_IconLoadStart Parms{};

	Parms.Param_NowLoadTexture = Param_NowLoadTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.IconLoadRequest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        TextureReference                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCommonIconSimple_C::IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "IconLoadRequest");

	Params::CommonIconSimple_C_IconLoadRequest Parms{};

	Parms.TextureReference = TextureReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconMountImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconMountImagine(int32 InIndex, const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconMountImagine");

	Params::CommonIconSimple_C_SetIconMountImagine Parms{};

	Parms.InIndex = InIndex;
	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetIconStamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetIconStamp(const class FString& StampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetIconStamp");

	Params::CommonIconSimple_C_SetIconStamp Parms{};

	Parms.StampId = std::move(StampId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159");

	Params::CommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetMoney(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetMoney");

	Params::CommonIconSimple_C_SetMoney Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetEmotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetEmotion(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetEmotion");

	Params::CommonIconSimple_C_SetEmotion Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetBP(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetBP");

	Params::CommonIconSimple_C_SetBP Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetBrokenData
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconSimple_C::SetBrokenData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetBrokenData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconSimple.CommonIconSimple_C.SetEmptyStamp
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconSimple_C::SetEmptyStamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetEmptyStamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconSimple.CommonIconSimple_C.SetGrayOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsGrayOut                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconSimple_C::SetGrayOut(bool Param_IsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetGrayOut");

	Params::CommonIconSimple_C_SetGrayOut Parms{};

	Parms.Param_IsGrayOut = Param_IsGrayOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetClassExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Exp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetClassExp(int32 Exp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetClassExp");

	Params::CommonIconSimple_C_SetClassExp Parms{};

	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.ItemTypeToToolTipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EToolTipType                            ToolTipType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "ItemTypeToToolTipType");

	Params::CommonIconSimple_C_ItemTypeToToolTipType Parms{};

	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (ToolTipType != nullptr)
		*ToolTipType = Parms.ToolTipType;
}


// Function CommonIconSimple.CommonIconSimple_C.SetSkyCoin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::SetSkyCoin(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetSkyCoin");

	Params::CommonIconSimple_C_SetSkyCoin Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.GetRewardItemIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (Parm, OutParm, HasGetValueTypeHash)

void UCommonIconSimple_C::GetRewardItemIcon(ESBRewardItemType RewardItemType, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "GetRewardItemIcon");

	Params::CommonIconSimple_C_GetRewardItemIcon Parms{};

	Parms.RewardItemType = RewardItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function CommonIconSimple.CommonIconSimple_C.Set Reward Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmountMin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconSimple_C::Set_Reward_Icon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "Set Reward Icon");

	Params::CommonIconSimple_C_Set_Reward_Icon Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.InAmount = InAmount;
	Parms.InAmountMin = InAmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetMasterReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonIconSimple_C::SetMasterReward(const struct FSBMasterReward& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetMasterReward");

	Params::CommonIconSimple_C_SetMasterReward Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetProductData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconSimple_C::SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetProductData");

	Params::CommonIconSimple_C_SetProductData Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function CommonIconSimple.CommonIconSimple_C.SetItemBoxContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonIconSimple_C::SetItemBoxContent(const struct FSBItemBoxContentParam& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetItemBoxContent");

	Params::CommonIconSimple_C_SetItemBoxContent Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconSimple.CommonIconSimple_C.SetUnidentifiedIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconSimple_C::SetUnidentifiedIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconSimple_C", "SetUnidentifiedIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}


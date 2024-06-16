#pragma once

 

// Package: CommonIconToolTip

#include "Basic.hpp"

#include "CommonIconToolTip_classes.hpp"
#include "CommonIconToolTip_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTip.CommonIconToolTip_C.ExecuteUbergraph_CommonIconToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::ExecuteUbergraph_CommonIconToolTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "ExecuteUbergraph_CommonIconToolTip");

	Params::CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.DeleteAllChildren
// (BlueprintCallable, BlueprintEvent)

void UCommonIconToolTip_C::DeleteAllChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "DeleteAllChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateContentsInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  InToolTipInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateContentsInfo(const struct FST_ToolTipInfo& InToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateContentsInfo");

	Params::CommonIconToolTip_C_CreateContentsInfo Parms{};

	Parms.InToolTipInfo = std::move(InToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipItem(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipItem");

	Params::CommonIconToolTip_C_CreateToolTipItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipWeapon(int32 InItemIndex, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipWeapon");

	Params::CommonIconToolTip_C_CreateToolTipWeapon Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon_Details
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipWeapon_Details(int32 InItemIndex, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipWeapon_Details");

	Params::CommonIconToolTip_C_CreateToolTipWeapon_Details Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageId = InStorageId;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCostume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipCostume(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipCostume");

	Params::CommonIconToolTip_C_CreateToolTipCostume Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OptionText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InAmountText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTip_C::CreateToolTipMoney(int32 InAmount, const class FText& OptionText, const class FText& InAmountText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipMoney");

	Params::CommonIconToolTip_C_CreateToolTipMoney Parms{};

	Parms.InAmount = InAmount;
	Parms.OptionText = std::move(OptionText);
	Parms.InAmountText = std::move(InAmountText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipEmotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipEmotion(class FName InId, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipEmotion");

	Params::CommonIconToolTip_C_CreateToolTipEmotion Parms{};

	Parms.InId = InId;
	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipStamp(int32 InStampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipStamp");

	Params::CommonIconToolTip_C_CreateToolTipStamp Parms{};

	Parms.InStampId = InStampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipContributionPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipContributionPoint(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipContributionPoint");

	Params::CommonIconToolTip_C_CreateToolTipContributionPoint Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipImagine");

	Params::CommonIconToolTip_C_CreateToolTipImagine Parms{};

	Parms.InImagineItemId = InImagineItemId;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_AcDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bInIsImageIconActive                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInUseClassTypeForLevelSync                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceLevelSyncOff                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipImagine_AcDetails(const int32 InId, const class FString& InUniqueId, bool bInIsImageIconActive, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipImagine_AcDetails");

	Params::CommonIconToolTip_C_CreateToolTipImagine_AcDetails Parms{};

	Parms.InId = InId;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.bInIsImageIconActive = bInIsImageIconActive;
	Parms.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.bForceLevelSyncOff = bForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_PaDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bInUseClassTypeForLevelSync                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceLevelSyncOff                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipImagine_PaDetails(const int32 InId, const class FString& InUniqueId, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipImagine_PaDetails");

	Params::CommonIconToolTip_C_CreateToolTipImagine_PaDetails Parms{};

	Parms.InId = InId;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.bForceLevelSyncOff = bForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipBrokenData
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconToolTip_C::CreateToolTipBrokenData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipBrokenData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipLiquidMemory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipLiquidMemory(int32 InLiquidMemoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipLiquidMemory");

	Params::CommonIconToolTip_C_CreateToolTipLiquidMemory Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMountImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipMountImagine(int32 InIndex, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipMountImagine");

	Params::CommonIconToolTip_C_CreateToolTipMountImagine Parms{};

	Parms.InIndex = InIndex;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItemBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  Param_ToolTipInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipItemBox(const struct FST_ToolTipInfo& Param_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipItemBox");

	Params::CommonIconToolTip_C_CreateToolTipItemBox Parms{};

	Parms.Param_ToolTipInfo = std::move(Param_ToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonNameAndType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipCommonNameAndType(const struct FST_ToolTipInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipCommonNameAndType");

	Params::CommonIconToolTip_C_CreateToolTipCommonNameAndType Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonTypeOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipCommonTypeOnly(const struct FST_ToolTipInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipCommonTypeOnly");

	Params::CommonIconToolTip_C_CreateToolTipCommonTypeOnly Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipRecipeSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  Param_ToolTipInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    bCheckExisting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipRecipeSet(const struct FST_ToolTipInfo& Param_ToolTipInfo, bool bCheckExisting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipRecipeSet");

	Params::CommonIconToolTip_C_CreateToolTipRecipeSet Parms{};

	Parms.Param_ToolTipInfo = std::move(Param_ToolTipInfo);
	Parms.bCheckExisting = bCheckExisting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipFusionItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTip_C::CreateToolTipFusionItem(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipFusionItem");

	Params::CommonIconToolTip_C_CreateToolTipFusionItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.SetPlayerProfileWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                Param_PlayerProfileWeaponData                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTip_C::SetPlayerProfileWeaponData(const struct FSBWeaponItemData& Param_PlayerProfileWeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "SetPlayerProfileWeaponData");

	Params::CommonIconToolTip_C_SetPlayerProfileWeaponData Parms{};

	Parms.Param_PlayerProfileWeaponData = std::move(Param_PlayerProfileWeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipOrnament
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTip_C::CreateToolTipOrnament(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTip_C", "CreateToolTipOrnament");

	Params::CommonIconToolTip_C_CreateToolTipOrnament Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}

}


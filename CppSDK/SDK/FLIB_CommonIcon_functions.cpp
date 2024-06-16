#pragma once

 

// Package: FLIB_CommonIcon

#include "Basic.hpp"

#include "FLIB_CommonIcon_classes.hpp"
#include "FLIB_CommonIcon_parameters.hpp"


namespace SDK
{

// Function FLIB_CommonIcon.FLIB_CommonIcon_C.RewardItemTypeToItemType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_CommonIcon_C::RewardItemTypeToItemType(ESBRewardItemType RewardItemType, class UObject* __WorldContext, EItemType* ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "RewardItemTypeToItemType");

	Params::FLIB_CommonIcon_C_RewardItemTypeToItemType Parms{};

	Parms.RewardItemType = RewardItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ItemType != nullptr)
		*ItemType = Parms.ItemType;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.ItemTypeToRewardItemType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       Out_RewardItemType                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_CommonIcon_C::ItemTypeToRewardItemType(EItemType InItemType, class UObject* __WorldContext, ESBRewardItemType* Out_RewardItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "ItemTypeToRewardItemType");

	Params::FLIB_CommonIcon_C_ItemTypeToRewardItemType Parms{};

	Parms.InItemType = InItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out_RewardItemType != nullptr)
		*Out_RewardItemType = Parms.Out_RewardItemType;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetItemToolTipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Unidentified                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetItemToolTipText(int32 InItemIndex, bool Unidentified, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetItemToolTipText");

	Params::FLIB_CommonIcon_C_GetItemToolTipText Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.Unidentified = Unidentified;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetWeaponToolTipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetWeaponToolTipText(int32 WeaponID, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetWeaponToolTipText");

	Params::FLIB_CommonIcon_C_GetWeaponToolTipText Parms{};

	Parms.WeaponID = WeaponID;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetCostumeToolTipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetCostumeToolTipText(int32 CostumeId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetCostumeToolTipText");

	Params::FLIB_CommonIcon_C_GetCostumeToolTipText Parms{};

	Parms.CostumeId = CostumeId;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetImagineToolTipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetImagineToolTipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetImagineToolTipText");

	Params::FLIB_CommonIcon_C_GetImagineToolTipText Parms{};

	Parms.InId = InId;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryTooltipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetLiquidMemoryTooltipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetLiquidMemoryTooltipText");

	Params::FLIB_CommonIcon_C_GetLiquidMemoryTooltipText Parms{};

	Parms.InId = InId;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetMountImagineToolTipText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)

void UFLIB_CommonIcon_C::GetMountImagineToolTipText(const int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetMountImagineToolTipText");

	Params::FLIB_CommonIcon_C_GetMountImagineToolTipText Parms{};

	Parms.InId = InId;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.Get Reward Item Name and Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)
// bool                                    OutNoName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_CommonIcon_C::Get_Reward_Item_Name_and_Type(ESBRewardItemType InRewardItemType, int32 InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "Get Reward Item Name and Type");

	Params::FLIB_CommonIcon_C_Get_Reward_Item_Name_and_Type Parms{};

	Parms.InRewardItemType = InRewardItemType;
	Parms.InId = InId;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);

	if (OutNoName != nullptr)
		*OutNoName = Parms.OutNoName;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.Add BracketsToString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bAdd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UFLIB_CommonIcon_C::Add_BracketsToString(bool bAdd, const class FString& Text, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "Add BracketsToString");

	Params::FLIB_CommonIcon_C_Add_BracketsToString Parms{};

	Parms.bAdd = bAdd;
	Parms.Text = std::move(Text);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetStampIDToCategoryNameAndStampI
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UFLIB_CommonIcon_C::GetStampIDToCategoryNameAndStampI(int32 StampId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetStampIDToCategoryNameAndStampI");

	Params::FLIB_CommonIcon_C_GetStampIDToCategoryNameAndStampI Parms{};

	Parms.StampId = StampId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAddBrackets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)
// bool                                    OutNoName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_CommonIcon_C::GetRewardItemNameAndType2(ESBRewardItemType InRewardItemType, int32 InId, int32 Amount, int32 AmountMin, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetRewardItemNameAndType2");

	Params::FLIB_CommonIcon_C_GetRewardItemNameAndType2 Parms{};

	Parms.InRewardItemType = InRewardItemType;
	Parms.InId = InId;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;
	Parms.bAddBrackets = bAddBrackets;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);

	if (OutNoName != nullptr)
		*OutNoName = Parms.OutNoName;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2ByMasterReward
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  RewardData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutName                                                (Parm, OutParm)
// class FText                             OutType                                                (Parm, OutParm)
// bool                                    OutNoName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_CommonIcon_C::GetRewardItemNameAndType2ByMasterReward(const struct FSBMasterReward& RewardData, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetRewardItemNameAndType2ByMasterReward");

	Params::FLIB_CommonIcon_C_GetRewardItemNameAndType2ByMasterReward Parms{};

	Parms.RewardData = std::move(RewardData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);

	if (OutType != nullptr)
		*OutType = std::move(Parms.OutType);

	if (OutNoName != nullptr)
		*OutNoName = Parms.OutNoName;
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryCategoryName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBLiquidMemoryCategory                 InCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutCategoryName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFLIB_CommonIcon_C::GetLiquidMemoryCategoryName(ESBLiquidMemoryCategory InCategory, class UObject* __WorldContext, class FString* OutCategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetLiquidMemoryCategoryName");

	Params::FLIB_CommonIcon_C_GetLiquidMemoryCategoryName Parms{};

	Parms.InCategory = InCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutCategoryName != nullptr)
		*OutCategoryName = std::move(Parms.OutCategoryName);
}


// Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryEfficacyTypeName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBLiquidMemoryEfficacyType             EfficacyType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutCategoryName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFLIB_CommonIcon_C::GetLiquidMemoryEfficacyTypeName(ESBLiquidMemoryEfficacyType EfficacyType, class UObject* __WorldContext, class FString* OutCategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_CommonIcon_C", "GetLiquidMemoryEfficacyTypeName");

	Params::FLIB_CommonIcon_C_GetLiquidMemoryEfficacyTypeName Parms{};

	Parms.EfficacyType = EfficacyType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutCategoryName != nullptr)
		*OutCategoryName = std::move(Parms.OutCategoryName);
}

}


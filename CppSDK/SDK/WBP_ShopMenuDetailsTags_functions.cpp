#pragma once

 

// Package: WBP_ShopMenuDetailsTags

#include "Basic.hpp"

#include "WBP_ShopMenuDetailsTags_classes.hpp"
#include "WBP_ShopMenuDetailsTags_parameters.hpp"


namespace SDK
{

// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickShowProduct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::OnClickShowProduct__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "OnClickShowProduct__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickReturnDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::OnClickReturnDisplay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "OnClickReturnDisplay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ExecuteUbergraph_WBP_ShopMenuDetailsTags
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::ExecuteUbergraph_WBP_ShopMenuDetailsTags(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "ExecuteUbergraph_WBP_ShopMenuDetailsTags");

	Params::WBP_ShopMenuDetailsTags_C_ExecuteUbergraph_WBP_ShopMenuDetailsTags Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDefault
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampDataByCategory
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStampCategoryMasterData       StampCategoryMaster                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetStampDataByCategory(const struct FSBStampCategoryMasterData& StampCategoryMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetStampDataByCategory");

	Params::WBP_ShopMenuDetailsTags_C_SetStampDataByCategory Parms{};

	Parms.StampCategoryMaster = std::move(StampCategoryMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDateTimeTextColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     LimitTimeColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     DescColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::SetDateTimeTextColor(const struct FLinearColor& LimitTimeColor, const struct FLinearColor& DescColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetDateTimeTextColor");

	Params::WBP_ShopMenuDetailsTags_C_SetDateTimeTextColor Parms{};

	Parms.LimitTimeColor = std::move(LimitTimeColor);
	Parms.DescColor = std::move(DescColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStampMasterData               StampMasterData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetStampData(const struct FSBStampMasterData& StampMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetStampData");

	Params::WBP_ShopMenuDetailsTags_C_SetStampData Parms{};

	Parms.StampMasterData = std::move(StampMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetEmoteData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBEmoteMasterData               EmoteMaster                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetEmoteData(const struct FSBEmoteMasterData& EmoteMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetEmoteData");

	Params::WBP_ShopMenuDetailsTags_C_SetEmoteData Parms{};

	Parms.EmoteMaster = std::move(EmoteMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetAchievementData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAchievementMasterData           AchievementMaster                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetAchievementData(const struct FAchievementMasterData& AchievementMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetAchievementData");

	Params::WBP_ShopMenuDetailsTags_C_SetAchievementData Parms{};

	Parms.AchievementMaster = std::move(AchievementMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetItemData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  ItemMaster                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetItemData(const struct FItemMasterData& ItemMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetItemData");

	Params::WBP_ShopMenuDetailsTags_C_SetItemData Parms{};

	Parms.ItemMaster = std::move(ItemMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowViewIllustImagineButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsTags_C::ShowViewIllustImagineButton(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "ShowViewIllustImagineButton");

	Params::WBP_ShopMenuDetailsTags_C_ShowViewIllustImagineButton Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowRotateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsTags_C::ShowRotateIcon(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "ShowRotateIcon");

	Params::WBP_ShopMenuDetailsTags_C_ShowRotateIcon Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowZoomInButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsTags_C::ShowZoomInButton(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "ShowZoomInButton");

	Params::WBP_ShopMenuDetailsTags_C_ShowZoomInButton Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCurrencyData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::SetCurrencyData(ESBRewardItemType RewardType, int32 Param_ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetCurrencyData");

	Params::WBP_ShopMenuDetailsTags_C_SetCurrencyData Parms{};

	Parms.RewardType = RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetMountImagineData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterMountImagine            MasterMountImagine                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetMountImagineData(const struct FSBMasterMountImagine& MasterMountImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetMountImagineData");

	Params::WBP_ShopMenuDetailsTags_C_SetMountImagineData Parms{};

	Parms.MasterMountImagine = std::move(MasterMountImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetImagineData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetImagineData(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetImagineData");

	Params::WBP_ShopMenuDetailsTags_C_SetImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsTags_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "PreConstruct");

	Params::WBP_ShopMenuDetailsTags_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetWeaponData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              WeaponMaster                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bSell                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::SetWeaponData(const struct FSBWeaponMasterData& WeaponMaster, bool bSell, const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetWeaponData");

	Params::WBP_ShopMenuDetailsTags_C_SetWeaponData Parms{};

	Parms.WeaponMaster = std::move(WeaponMaster);
	Parms.bSell = bSell;
	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCostumeData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopMenuDetailsTags_C::SetCostumeData(const struct FSBMasterCostume& MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetCostumeData");

	Params::WBP_ShopMenuDetailsTags_C_SetCostumeData Parms{};

	Parms.MasterCostume = std::move(MasterCostume);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShopMenuDetailsTags_C::BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.GetEventTermDataForCurrency
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           EventTermId                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsTags_C::GetEventTermDataForCurrency(ESBRewardItemType RewardType, int32 Param_ItemIndex, class FString* EventTermId, int32* DurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "GetEventTermDataForCurrency");

	Params::WBP_ShopMenuDetailsTags_C_GetEventTermDataForCurrency Parms{};

	Parms.RewardType = RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (EventTermId != nullptr)
		*EventTermId = std::move(Parms.EventTermId);

	if (DurationMinutes != nullptr)
		*DurationMinutes = Parms.DurationMinutes;
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsVisibieShowProductForCurrency
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_ShopMenuDetailsTags_C::IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32 Param_ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "IsVisibieShowProductForCurrency");

	Params::WBP_ShopMenuDetailsTags_C_IsVisibieShowProductForCurrency Parms{};

	Parms.RewardType = RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsBppIrredeemable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_ShopMenuDetailsTags_C::IsBppIrredeemable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "IsBppIrredeemable");

	Params::WBP_ShopMenuDetailsTags_C_IsBppIrredeemable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetBppExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanBppExchange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsTags_C::SetBppExchange(bool bCanBppExchange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsTags_C", "SetBppExchange");

	Params::WBP_ShopMenuDetailsTags_C_SetBppExchange Parms{};

	Parms.bCanBppExchange = bCanBppExchange;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: ShopMenuDetailsSwitcher

#include "Basic.hpp"

#include "ShopMenuDetailsSwitcher_classes.hpp"
#include "ShopMenuDetailsSwitcher_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::OnEndCloseDetailAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnEndCloseDetailAnimation__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::OnShow__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnShow__DelegateSignature");

	Params::ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickItemBoxDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::OnClickItemBoxDetail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnClickItemBoxDetail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ExecuteUbergraph_ShopMenuDetailsSwitcher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::ExecuteUbergraph_ShopMenuDetailsSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ExecuteUbergraph_ShopMenuDetailsSwitcher");

	Params::ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitInternal
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::InitInternal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "InitInternal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesignAndData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_LayoutType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::UpdateDesignAndData(class FName Param_LayoutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "UpdateDesignAndData");

	Params::ShopMenuDetailsSwitcher_C_UpdateDesignAndData Parms{};

	Parms.Param_LayoutType = Param_LayoutType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_LayoutType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::Init(class FName Param_LayoutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "Init");

	Params::ShopMenuDetailsSwitcher_C_Init Parms{};

	Parms.Param_LayoutType = Param_LayoutType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ApplyExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::ApplyExternalDirectionalLightRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ApplyExternalDirectionalLightRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SetExternalDirectionalLightRotation");

	Params::ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "PreConstruct");

	Params::ShopMenuDetailsSwitcher_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomInEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::OnClickZoomInEvent(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnClickZoomInEvent");

	Params::ShopMenuDetailsSwitcher_C_OnClickZoomInEvent Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickedItemBoxDetail
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::OnClickedItemBoxDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnClickedItemBoxDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::CloseItemDetail(bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "CloseItemDetail");

	Params::ShopMenuDetailsSwitcher_C_CloseItemDetail Parms{};

	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnSelectCostumeType_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMaleCostumeSelected                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::OnSelectCostumeType_Event(bool IsMaleCostumeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnSelectCostumeType_Event");

	Params::ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event Parms{};

	Parms.IsMaleCostumeSelected = IsMaleCostumeSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.DestroyItemDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::DestroyItemDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "DestroyItemDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::OnEndCloseDetailAnimation_Event(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnEndCloseDetailAnimation_Event");

	Params::ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CreateItemDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::CreateItemDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "CreateItemDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnLoadWeaponAsset
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::OnLoadWeaponAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnLoadWeaponAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShowCostumeModelCaptureImage
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::OnShowCostumeModelCaptureImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "OnShowCostumeModelCaptureImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SpawnSceneCapture2DStudio
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::SpawnSceneCapture2DStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SpawnSceneCapture2DStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitItemDetails
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::InitItemDetails(const class FString& InCurrMapName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "InitItemDetails");

	Params::ShopMenuDetailsSwitcher_C_InitItemDetails Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_UniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_bShowProduct                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::ShowItemDetails(int32 InItemIndex, EItemType InItemType, int32 Param_Amount, int32 Param_AmountMin, const class FString& Param_UniqueId, bool Param_bShowProduct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetails");

	Params::ShopMenuDetailsSwitcher_C_ShowItemDetails Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemType = InItemType;
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;
	Parms.Param_UniqueId = std::move(Param_UniqueId);
	Parms.Param_bShowProduct = Param_bShowProduct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetailInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ItemDetailTypes                       Param_DetailType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::CloseItemDetailInternal(E_ItemDetailTypes Param_DetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "CloseItemDetailInternal");

	Params::ShopMenuDetailsSwitcher_C_CloseItemDetailInternal Parms{};

	Parms.Param_DetailType = Param_DetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::ShowItemDetails_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetails_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  MasterReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromMasterReward(const struct FSBMasterReward& MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetailsFromMasterReward");

	Params::ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward Parms{};

	Parms.MasterReward = std::move(MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterRewardId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MasterRewardId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromMasterRewardId(class FName MasterRewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetailsFromMasterRewardId");

	Params::ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId Parms{};

	Parms.MasterRewardId = MasterRewardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromRewardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bShowProduct                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromRewardData(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex, int32 Param_Amount, int32 Param_AmountMin, bool Param_bShowProduct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetailsFromRewardData");

	Params::ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData Parms{};

	Parms.Param_RewardType = Param_RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;
	Parms.Param_bShowProduct = Param_bShowProduct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromItemBoxContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           ItemBoxContent                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShopMenuDetailsSwitcher_C::ShowItemDetailsFromItemBoxContent(const struct FSBItemBoxContentParam& ItemBoxContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowItemDetailsFromItemBoxContent");

	Params::ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent Parms{};

	Parms.ItemBoxContent = std::move(ItemBoxContent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::SetBonus(bool bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SetBonus");

	Params::ShopMenuDetailsSwitcher_C_SetBonus Parms{};

	Parms.bBonus = bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowProduct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::ShowProduct(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowProduct");

	Params::ShopMenuDetailsSwitcher_C_ShowProduct Parms{};

	Parms.Param_RewardType = Param_RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowOriginal
// (Public, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsSwitcher_C::ShowOriginal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ShowOriginal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetOriginalRewardType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       Param_OriginalRewardType                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::GetOriginalRewardType(ESBRewardItemType* Param_OriginalRewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "GetOriginalRewardType");

	Params::ShopMenuDetailsSwitcher_C_GetOriginalRewardType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_OriginalRewardType != nullptr)
		*Param_OriginalRewardType = Parms.Param_OriginalRewardType;
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBppExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanBppExchange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::SetBppExchange(bool bCanBppExchange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SetBppExchange");

	Params::ShopMenuDetailsSwitcher_C_SetBppExchange Parms{};

	Parms.bCanBppExchange = bCanBppExchange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLotteryAbility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsSwitcher_C::SetLotteryAbility(bool bLotteryAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SetLotteryAbility");

	Params::ShopMenuDetailsSwitcher_C_SetLotteryAbility Parms{};

	Parms.bLotteryAbility = bLotteryAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryGroupsId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LotteryGroupsId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::SetLotteryGroupsId(int32 LotteryGroupsId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "SetLotteryGroupsId");

	Params::ShopMenuDetailsSwitcher_C_SetLotteryGroupsId Parms{};

	Parms.LotteryGroupsId = LotteryGroupsId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetCurrentItemDetailType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_ItemDetailTypes                       Param_DetailType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::GetCurrentItemDetailType(bool* bValid, E_ItemDetailTypes* Param_DetailType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "GetCurrentItemDetailType");

	Params::ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Param_DetailType != nullptr)
		*Param_DetailType = Parms.Param_DetailType;
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ItemTypeToDetailType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_ItemDetailTypes                       Param_DetailType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::ItemTypeToDetailType(EItemType Param_ItemType, int32 Param_ItemIndex, bool* bValid, E_ItemDetailTypes* Param_DetailType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "ItemTypeToDetailType");

	Params::ShopMenuDetailsSwitcher_C_ItemTypeToDetailType Parms{};

	Parms.Param_ItemType = Param_ItemType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Param_DetailType != nullptr)
		*Param_DetailType = Parms.Param_DetailType;
}


// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.RewardTypeToDetailType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_ItemDetailTypes                       Param_DetailType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsSwitcher_C::RewardTypeToDetailType(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex, bool* bValid, E_ItemDetailTypes* Param_DetailType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsSwitcher_C", "RewardTypeToDetailType");

	Params::ShopMenuDetailsSwitcher_C_RewardTypeToDetailType Parms{};

	Parms.Param_RewardType = Param_RewardType;
	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Param_DetailType != nullptr)
		*Param_DetailType = Parms.Param_DetailType;
}

}


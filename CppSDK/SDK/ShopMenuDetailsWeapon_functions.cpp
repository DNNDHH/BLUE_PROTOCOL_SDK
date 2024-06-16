#pragma once

 

// Package: ShopMenuDetailsWeapon

#include "Basic.hpp"

#include "ShopMenuDetailsWeapon_classes.hpp"
#include "ShopMenuDetailsWeapon_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsWeapon_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickShowOriginal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsWeapon_C::OnClickShowOriginal__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "OnClickShowOriginal__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ExecuteUbergraph_ShopMenuDetailsWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::ExecuteUbergraph_ShopMenuDetailsWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "ExecuteUbergraph_ShopMenuDetailsWeapon");

	Params::ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsWeapon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "OnAnimationFinished");

	Params::ShopMenuDetailsWeapon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsWeapon_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSellItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ItemUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowProduct                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RecipeId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::ShowDetails(int32 ItemIndex, bool IsSellItem, const class FString& ItemUniqueId, int32 Param_Amount, int32 Param_AmountMin, bool bShowProduct, int32 RecipeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "ShowDetails");

	Params::ShopMenuDetailsWeapon_C_ShowDetails Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.IsSellItem = IsSellItem;
	Parms.ItemUniqueId = std::move(ItemUniqueId);
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;
	Parms.bShowProduct = bShowProduct;
	Parms.RecipeId = RecipeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsWeapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::Init(const class FString& InCurrMapName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "Init");

	Params::ShopMenuDetailsWeapon_C_Init Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.FindCurrMapWeaponTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UShopMenuDetailsWeapon_C::FindCurrMapWeaponTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "FindCurrMapWeaponTransform");

	Params::ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponLevelStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBWeaponStatus                         EnhanceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Value                                                  (Parm, OutParm)

void UShopMenuDetailsWeapon_C::GetWeaponLevelStatus(ESBWeaponStatus EnhanceType, class FText* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "GetWeaponLevelStatus");

	Params::ShopMenuDetailsWeapon_C_GetWeaponLevelStatus Parms{};

	Parms.EnhanceType = EnhanceType;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponAtkStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Value                                                  (Parm, OutParm)

void UShopMenuDetailsWeapon_C::GetWeaponAtkStatus(class FText* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "GetWeaponAtkStatus");

	Params::ShopMenuDetailsWeapon_C_GetWeaponAtkStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UShopMenuDetailsWeapon_C::GetSpEffectText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "GetSpEffectText");

	Params::ShopMenuDetailsWeapon_C_GetSpEffectText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLotteryAbility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsWeapon_C::SetLotteryAbility(bool bLotteryAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "SetLotteryAbility");

	Params::ShopMenuDetailsWeapon_C_SetLotteryAbility Parms{};

	Parms.bLotteryAbility = bLotteryAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryGroupsId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_LotteryGroupsId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsWeapon_C::SetLotteryGroupsId(int32 Param_LotteryGroupsId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "SetLotteryGroupsId");

	Params::ShopMenuDetailsWeapon_C_SetLotteryGroupsId Parms{};

	Parms.Param_LotteryGroupsId = Param_LotteryGroupsId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText_Internal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             PerkPickId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UShopMenuDetailsWeapon_C::GetSpEffectText_Internal(class FName PerkPickId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsWeapon_C", "GetSpEffectText_Internal");

	Params::ShopMenuDetailsWeapon_C_GetSpEffectText_Internal Parms{};

	Parms.PerkPickId = PerkPickId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: UMG_ProductDetailMenu

#include "Basic.hpp"

#include "UMG_ProductDetailMenu_classes.hpp"
#include "UMG_ProductDetailMenu_parameters.hpp"


namespace SDK
{

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::OnClose__DelegateSignature(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "OnClose__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_OnClose__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.ExecuteUbergraph_UMG_ProductDetailMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::ExecuteUbergraph_UMG_ProductDetailMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "ExecuteUbergraph_UMG_ProductDetailMenu");

	Params::UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductDetailMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductDetailMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByRewardData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetailMenu_C::SetDataByRewardData(ESBRewardItemType RewardType, int32 ItemId, int32 Amount, bool bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetDataByRewardData");

	Params::UMG_ProductDetailMenu_C_SetDataByRewardData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.bBonus = bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByUniqueId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OverrideAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::SetDataByUniqueId(const class FString& UniqueId, int32 OverrideAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetDataByUniqueId");

	Params::UMG_ProductDetailMenu_C_SetDataByUniqueId Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.OverrideAmount = OverrideAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByDungeonSupply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_ProductDetailMenu_C::SetDataByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetDataByDungeonSupply");

	Params::UMG_ProductDetailMenu_C_SetDataByDungeonSupply Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMailDatas
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMailData>              MailDatas                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ProductDetailMenu_C::SetDataByMailDatas(const TArray<struct FSBMailData>& MailDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetDataByMailDatas");

	Params::UMG_ProductDetailMenu_C_SetDataByMailDatas Parms{};

	Parms.MailDatas = std::move(MailDatas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMasterReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  MasterReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_ProductDetailMenu_C::SetDataByMasterReward(const struct FSBMasterReward& MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetDataByMasterReward");

	Params::UMG_ProductDetailMenu_C_SetDataByMasterReward Parms{};

	Parms.MasterReward = std::move(MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetProductData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SBProductData_C>Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetailMenu_C::SetProductData(TScriptInterface<class IBPI_SBProductData_C> Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetProductData");

	Params::UMG_ProductDetailMenu_C_SetProductData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::SetData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "SetData");

	Params::UMG_ProductDetailMenu_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductDetailMenu_C::BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_ProductDetailMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetailMenu_C::BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetailMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Data = Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetailMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");

	Params::UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductDetailMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ProductDetailMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ProductDetailMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetailMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}

}


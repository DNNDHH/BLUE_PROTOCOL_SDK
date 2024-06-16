#pragma once

 

// Package: UMG_ProductItemList

#include "Basic.hpp"

#include "UMG_ProductItemList_classes.hpp"
#include "UMG_ProductItemList_parameters.hpp"


namespace SDK
{

// Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnItemClicked__DelegateSignature");

	Params::UMG_ProductItemList_C_OnItemClicked__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.OnSelectedItemData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemList_C::OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnSelectedItemData__DelegateSignature");

	Params::UMG_ProductItemList_C_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Data = Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.OnBannerVisibilityChanged __DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemList_C::OnBannerVisibilityChanged___DelegateSignature(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnBannerVisibilityChanged __DelegateSignature");

	Params::UMG_ProductItemList_C_OnBannerVisibilityChanged___DelegateSignature Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.ExecuteUbergraph_UMG_ProductItemList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::ExecuteUbergraph_UMG_ProductItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "ExecuteUbergraph_UMG_ProductItemList");

	Params::UMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.LayoutCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   Param_DetailType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bIsItemBox                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemList_C::LayoutCheck(E_SBProductDetailType Param_DetailType, bool Param_bIsItemBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "LayoutCheck");

	Params::UMG_ProductItemList_C_LayoutCheck Parms{};

	Parms.Param_DetailType = Param_DetailType;
	Parms.Param_bIsItemBox = Param_bIsItemBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductItemList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.SetSelectedItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemList_C::SetSelectedItemData(class UBP_SBProductItemData_C* Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "SetSelectedItemData");

	Params::UMG_ProductItemList_C_SetSelectedItemData Parms{};

	Parms.Data = Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::OnItemClicked_Event(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnItemClicked_Event");

	Params::UMG_ProductItemList_C_OnItemClicked_Event Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::UpdateLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "UpdateLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "PreConstruct");

	Params::UMG_ProductItemList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductItemList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoad_Icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::OnLoad_Icon(class FName URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnLoad_Icon");

	Params::UMG_ProductItemList_C_OnLoad_Icon Parms{};

	Parms.URL = URL;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::ResetItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "ResetItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::ResetBannerIconPadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "ResetBannerIconPadding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::BannerIconPadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "BannerIconPadding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList_Tab
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::ResetItemList_Tab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "ResetItemList_Tab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding_Tab
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::ResetBannerIconPadding_Tab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "ResetBannerIconPadding_Tab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding_Tab
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::BannerIconPadding_Tab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "BannerIconPadding_Tab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9");

	Params::UMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.SetDetailType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   InDetailType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::SetDetailType(E_SBProductDetailType InDetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "SetDetailType");

	Params::UMG_ProductItemList_C_SetDetailType Parms{};

	Parms.InDetailType = InDetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.SetProductData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductData_C*              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::SetProductData(class UBP_SBProductData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "SetProductData");

	Params::UMG_ProductItemList_C_SetProductData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemList_C::SetData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "SetData");

	Params::UMG_ProductItemList_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.CreateItemList_Internal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_SBProductItemData_C*>  ItemDataList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ProductItemList_C::CreateItemList_Internal(const TArray<class UBP_SBProductItemData_C*>& ItemDataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "CreateItemList_Internal");

	Params::UMG_ProductItemList_C_CreateItemList_Internal Parms{};

	Parms.ItemDataList = std::move(ItemDataList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateItemBoxIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ProductItemList_C::UpdateItemBoxIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemList_C", "UpdateItemBoxIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}


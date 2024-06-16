#pragma once

 

// Package: LibraryMenu_LoginBonus

#include "Basic.hpp"

#include "LibraryMenu_LoginBonus_classes.hpp"
#include "LibraryMenu_LoginBonus_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnFinishDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::OnFinishDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "OnFinishDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ExecuteUbergraph_LibraryMenu_LoginBonus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::ExecuteUbergraph_LibraryMenu_LoginBonus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "ExecuteUbergraph_LibraryMenu_LoginBonus");

	Params::LibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");

	Params::LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnCloseDetailMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "OnCloseDetailMenu");

	Params::LibraryMenu_LoginBonus_C_OnCloseDetailMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");

	Params::LibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BannerImageLoadCompleted
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::BannerImageLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "BannerImageLoadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailClose
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::DetailClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "DetailClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Finish
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.LoginBonusListChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::LoginBonusListChange(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "LoginBonusListChange");

	Params::LibraryMenu_LoginBonus_C_LoginBonusListChange Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DataCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::Initialize(int32 DataCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "Initialize");

	Params::LibraryMenu_LoginBonus_C_Initialize Parms{};

	Parms.DataCount = DataCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ImageLoadWork
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::ImageLoadWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "ImageLoadWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4");

	Params::LibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetInfomation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::SetInfomation(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "SetInfomation");

	Params::LibraryMenu_LoginBonus_C_SetInfomation Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ItemClickChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::ItemClickChange(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "ItemClickChange");

	Params::LibraryMenu_LoginBonus_C_ItemClickChange Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailBannerChange
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonus_C::DetailBannerChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "DetailBannerChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_C::DetailVisibility(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "DetailVisibility");

	Params::LibraryMenu_LoginBonus_C_DetailVisibility Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowDayData       ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_LoginBonus_C::SetItemDetail(const struct FSBLoginBonusWindowDayData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_C", "SetItemDetail");

	Params::LibraryMenu_LoginBonus_C_SetItemDetail Parms{};

	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: FlatShop_ProductDetail

#include "Basic.hpp"

#include "FlatShop_ProductDetail_classes.hpp"
#include "FlatShop_ProductDetail_parameters.hpp"


namespace SDK
{

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFlatShop_ProductDetail_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.ExecuteUbergraph_FlatShop_ProductDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::ExecuteUbergraph_FlatShop_ProductDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "ExecuteUbergraph_FlatShop_ProductDetail");

	Params::FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlatShop_ProductDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::OnClose_Event(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "OnClose_Event");

	Params::FlatShop_ProductDetail_C_OnClose_Event Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlatShop_ProductDetail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.DownLoadImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::DownLoadImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "DownLoadImage_Event");

	Params::FlatShop_ProductDetail_C_DownLoadImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageSoftRef_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Path                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::LoadImageSoftRef_Event(TSoftObjectPtr<class UTexture2D> Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "LoadImageSoftRef_Event");

	Params::FlatShop_ProductDetail_C_LoadImageSoftRef_Event Parms{};

	Parms.Path = Path;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageName_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::LoadImageName_Event(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "LoadImageName_Event");

	Params::FlatShop_ProductDetail_C_LoadImageName_Event Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetFlags_ROS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ribbon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::SetFlags_ROS(int32 Ribbon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "SetFlags_ROS");

	Params::FlatShop_ProductDetail_C_SetFlags_ROS Parms{};

	Parms.Ribbon = Ribbon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetProductData_RoPS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRoseOrbShopItemMasterData     ProductData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UFlatShop_ProductDetail_C::SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& ProductData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "SetProductData_RoPS");

	Params::FlatShop_ProductDetail_C_SetProductData_RoPS Parms{};

	Parms.ProductData = std::move(ProductData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4");

	Params::FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnFail_48D4A76A494FBE239EF1AD90CEDE58B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::OnFail_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "OnFail_48D4A76A494FBE239EF1AD90CEDE58B4");

	Params::FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D");

	Params::FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Get ThumbnailTexture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::Get_ThumbnailTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "Get ThumbnailTexture");

	Params::FlatShop_ProductDetail_C_Get_ThumbnailTexture Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetupBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BounsId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductDetail_C::SetupBonusIcon(int32 BounsId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductDetail_C", "SetupBonusIcon");

	Params::FlatShop_ProductDetail_C_SetupBonusIcon Parms{};

	Parms.BounsId = BounsId;

	UObject::ProcessEvent(Func, &Parms);
}

}


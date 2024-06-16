#pragma once

 

// Package: PictureBook_BtnWishList

#include "Basic.hpp"

#include "PictureBook_BtnWishList_classes.hpp"
#include "PictureBook_BtnWishList_parameters.hpp"


namespace SDK
{

// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPictureBook_BtnWishList_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.ExecuteUbergraph_PictureBook_BtnWishList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_BtnWishList_C::ExecuteUbergraph_PictureBook_BtnWishList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "ExecuteUbergraph_PictureBook_BtnWishList");

	Params::PictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPictureBook_BtnWishList_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_BtnWishList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "PreConstruct");

	Params::PictureBook_BtnWishList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPictureBook_BtnWishList_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "SetText");

	Params::PictureBook_BtnWishList_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_BtnWishList_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "SetPressedSoundId");

	Params::PictureBook_BtnWishList_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_BtnWishList_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "SetHoveredSoundId");

	Params::PictureBook_BtnWishList_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.Set Btn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRegist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_BtnWishList_C::Set_Btn(bool IsRegist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_BtnWishList_C", "Set Btn");

	Params::PictureBook_BtnWishList_C_Set_Btn Parms{};

	Parms.IsRegist = IsRegist;

	UObject::ProcessEvent(Func, &Parms);
}

}


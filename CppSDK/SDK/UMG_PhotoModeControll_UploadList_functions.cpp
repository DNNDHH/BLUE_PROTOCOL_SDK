#pragma once

 

// Package: UMG_PhotoModeControll_UploadList

#include "Basic.hpp"

#include "UMG_PhotoModeControll_UploadList_classes.hpp"
#include "UMG_PhotoModeControll_UploadList_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadSelectWindowClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControll_UploadList_C::UploadSelectWindowClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "UploadSelectWindowClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadList_C::ExecuteUbergraph_UMG_PhotoModeControll_UploadList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "ExecuteUbergraph_UMG_PhotoModeControll_UploadList");

	Params::UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControll_UploadList_C::BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadFinish
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSlateBrush>              InThumbnailImage                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            InReturnValue                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InIsClickCheck                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControll_UploadList_C::UploadFinish(const TArray<struct FSlateBrush>& InThumbnailImage, const TArray<bool>& InReturnValue, bool InIsClickCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "UploadFinish");

	Params::UMG_PhotoModeControll_UploadList_C_UploadFinish Parms{};

	Parms.InThumbnailImage = std::move(InThumbnailImage);
	Parms.InReturnValue = std::move(InReturnValue);
	Parms.InIsClickCheck = InIsClickCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhotoModeUploadList                    InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadList_C::UploadWidgetSwitcher(EPhotoModeUploadList InMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "UploadWidgetSwitcher");

	Params::UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher Parms{};

	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher_Bp
// (Event, Public, BlueprintEvent)
// Parameters:
// uint8                                   InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadList_C::UploadWidgetSwitcher_Bp(uint8 InMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "UploadWidgetSwitcher_Bp");

	Params::UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp Parms{};

	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail_Bp
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>        InThumbnailImage                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_PhotoModeControll_UploadList_C::SetUploadThumbnail_Bp(const TArray<class UTexture2DDynamic*>& InThumbnailImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "SetUploadThumbnail_Bp");

	Params::UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp Parms{};

	Parms.InThumbnailImage = std::move(InThumbnailImage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenshotCapturedEvent_Bp
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>        InThumbnailImage                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_PhotoModeControll_UploadList_C::ScreenshotCapturedEvent_Bp(const TArray<class UTexture2DDynamic*>& InThumbnailImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "ScreenshotCapturedEvent_Bp");

	Params::UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp Parms{};

	Parms.InThumbnailImage = std::move(InThumbnailImage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.InitUploadPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPhotoModeImageComponent*       InPhotoModeImageComponent                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControll_UploadList_C::InitUploadPanel(class USBPhotoModeImageComponent* InPhotoModeImageComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "InitUploadPanel");

	Params::UMG_PhotoModeControll_UploadList_C_InitUploadPanel Parms{};

	Parms.InPhotoModeImageComponent = InPhotoModeImageComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>        InThumbnailImage                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_PhotoModeControll_UploadList_C::SetUploadThumbnail(TArray<class UTexture2DDynamic*>& InThumbnailImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "SetUploadThumbnail");

	Params::UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail Parms{};

	Parms.InThumbnailImage = std::move(InThumbnailImage);

	UObject::ProcessEvent(Func, &Parms);

	InThumbnailImage = std::move(Parms.InThumbnailImage);
}


// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.Screenshot Captured Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>        InThumbnailImage                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_PhotoModeControll_UploadList_C::Screenshot_Captured_Event(TArray<class UTexture2DDynamic*>& InThumbnailImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControll_UploadList_C", "Screenshot Captured Event");

	Params::UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event Parms{};

	Parms.InThumbnailImage = std::move(InThumbnailImage);

	UObject::ProcessEvent(Func, &Parms);

	InThumbnailImage = std::move(Parms.InThumbnailImage);
}

}


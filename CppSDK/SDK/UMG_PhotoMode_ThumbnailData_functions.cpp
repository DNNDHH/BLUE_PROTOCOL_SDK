#pragma once

 

// Package: UMG_PhotoMode_ThumbnailData

#include "Basic.hpp"

#include "UMG_PhotoMode_ThumbnailData_classes.hpp"
#include "UMG_PhotoMode_ThumbnailData_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ThumbnailBtnClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutThumbnailNo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::ThumbnailBtnClickEvent__DelegateSignature(int32 OutThumbnailNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "ThumbnailBtnClickEvent__DelegateSignature");

	Params::UMG_PhotoMode_ThumbnailData_C_ThumbnailBtnClickEvent__DelegateSignature Parms{};

	Parms.OutThumbnailNo = OutThumbnailNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SelectFrameImageClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutThumbnailNo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::SelectFrameImageClickEvent__DelegateSignature(int32 OutThumbnailNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SelectFrameImageClickEvent__DelegateSignature");

	Params::UMG_PhotoMode_ThumbnailData_C_SelectFrameImageClickEvent__DelegateSignature Parms{};

	Parms.OutThumbnailNo = OutThumbnailNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ExecuteUbergraph_UMG_PhotoMode_ThumbnailData
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::ExecuteUbergraph_UMG_PhotoMode_ThumbnailData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "ExecuteUbergraph_UMG_PhotoMode_ThumbnailData");

	Params::UMG_PhotoMode_ThumbnailData_C_ExecuteUbergraph_UMG_PhotoMode_ThumbnailData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsEnableBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoMode_ThumbnailData_C::SetIsEnableBtn(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetIsEnableBtn");

	Params::UMG_PhotoMode_ThumbnailData_C_SetIsEnableBtn Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetViewerBtn
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::SetViewerBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetViewerBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ThumbnailNo                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::Init(int32 Param_ThumbnailNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "Init");

	Params::UMG_PhotoMode_ThumbnailData_C_Init Parms{};

	Parms.Param_ThumbnailNo = Param_ThumbnailNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset_Bp
// (Event, Public, BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::Reset_Bp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "Reset_Bp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload_Bp
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsUpload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoMode_ThumbnailData_C::SetIsUpload_Bp(bool bIsUpload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetIsUpload_Bp");

	Params::UMG_PhotoMode_ThumbnailData_C_SetIsUpload_Bp Parms{};

	Parms.bIsUpload = bIsUpload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                           InImage_PNGData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsTextureNone                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoMode_ThumbnailData_C::SetThumbnailTexture(class UTexture2DDynamic* Texture, const TArray<uint8>& InImage_PNGData, bool* OutIsTextureNone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetThumbnailTexture");

	Params::UMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture Parms{};

	Parms.Texture = Texture;
	Parms.InImage_PNGData = std::move(InImage_PNGData);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsTextureNone != nullptr)
		*OutIsTextureNone = Parms.OutIsTextureNone;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetActiveWidgetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutActiveWidgetIndex                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::GetActiveWidgetIndex(int32* OutActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetActiveWidgetIndex");

	Params::UMG_PhotoMode_ThumbnailData_C_GetActiveWidgetIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutActiveWidgetIndex != nullptr)
		*OutActiveWidgetIndex = Parms.OutActiveWidgetIndex;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetFaild
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::ResetFaild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "ResetFaild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoMode_ThumbnailData_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetSlateBrush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      Brush_Image                                            (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoMode_ThumbnailData_C::GetSlateBrush(struct FSlateBrush* Brush_Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetSlateBrush");

	Params::UMG_PhotoMode_ThumbnailData_C_GetSlateBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Brush_Image != nullptr)
		*Brush_Image = std::move(Parms.Brush_Image);

	return Parms.ReturnValue;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsSelectFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoMode_ThumbnailData_C::IsSelectFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "IsSelectFrame");

	Params::UMG_PhotoMode_ThumbnailData_C_IsSelectFrame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetFrameImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::SetFrameImageVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetFrameImageVisibility");

	Params::UMG_PhotoMode_ThumbnailData_C_SetFrameImageVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailNo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ThumbnailNo                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::SetThumbnailNo(int32 Param_ThumbnailNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetThumbnailNo");

	Params::UMG_PhotoMode_ThumbnailData_C_SetThumbnailNo Parms{};

	Parms.Param_ThumbnailNo = Param_ThumbnailNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsUpload                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoMode_ThumbnailData_C::SetIsUpload(bool Param_IsUpload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetIsUpload");

	Params::UMG_PhotoMode_ThumbnailData_C_SetIsUpload Parms{};

	Parms.Param_IsUpload = Param_IsUpload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture_Bp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                           InImagePNGData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoMode_ThumbnailData_C::SetThumbnailTexture_Bp(class UTexture2DDynamic* Texture, const TArray<uint8>& InImagePNGData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "SetThumbnailTexture_Bp");

	Params::UMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture_Bp Parms{};

	Parms.Texture = Texture;
	Parms.InImagePNGData = std::move(InImagePNGData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2DDynamic*                OutThumbnailTexture                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoMode_ThumbnailData_C::GetThumbnailTexture(class UTexture2DDynamic** OutThumbnailTexture) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetThumbnailTexture");

	Params::UMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutThumbnailTexture != nullptr)
		*OutThumbnailTexture = Parms.OutThumbnailTexture;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImage_PNGData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                           OutImage_PNGData                                       (Parm, OutParm)

void UUMG_PhotoMode_ThumbnailData_C::GetImage_PNGData(TArray<uint8>* OutImage_PNGData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetImage_PNGData");

	Params::UMG_PhotoMode_ThumbnailData_C_GetImage_PNGData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutImage_PNGData != nullptr)
		*OutImage_PNGData = std::move(Parms.OutImage_PNGData);
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsUpload                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoMode_ThumbnailData_C::GetIsUpload(bool* Param_IsUpload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetIsUpload");

	Params::UMG_PhotoMode_ThumbnailData_C_GetIsUpload Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsUpload != nullptr)
		*Param_IsUpload = Parms.Param_IsUpload;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture_Bp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2DDynamic*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2DDynamic* UUMG_PhotoMode_ThumbnailData_C::GetThumbnailTexture_Bp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetThumbnailTexture_Bp");

	Params::UMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload_Bp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoMode_ThumbnailData_C::GetIsUpload_Bp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetIsUpload_Bp");

	Params::UMG_PhotoMode_ThumbnailData_C_GetIsUpload_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImagePNGData_Bp
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<uint8>                           OutImagePngData                                        (Parm, OutParm)

void UUMG_PhotoMode_ThumbnailData_C::GetImagePNGData_Bp(TArray<uint8>* OutImagePngData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoMode_ThumbnailData_C", "GetImagePNGData_Bp");

	Params::UMG_PhotoMode_ThumbnailData_C_GetImagePNGData_Bp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutImagePngData != nullptr)
		*OutImagePngData = std::move(Parms.OutImagePngData);
}

}


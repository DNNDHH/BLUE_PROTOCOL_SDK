#pragma once

 

// Package: CommunicateSettingMenu_Photo_Thumbnail

#include "Basic.hpp"

#include "CommunicateSettingMenu_Photo_Thumbnail_classes.hpp"
#include "CommunicateSettingMenu_Photo_Thumbnail_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_CheckBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_CheckBox__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "OnClicked_CheckBox__DelegateSignature");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_Thumbnail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_Thumbnail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "OnClicked_Thumbnail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_LikeBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutPhotoModeImageId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutLikeCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "OnClicked_LikeBtn__DelegateSignature");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature Parms{};

	Parms.OutPhotoModeImageId = std::move(OutPhotoModeImageId);
	Parms.OutLikeCount = OutLikeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnSendPhotoLikeDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSendPhotoLike                   OutSendPhotoLike                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UCommunicateSettingMenu_Photo_Thumbnail_C::OnSendPhotoLikeDelegate_Event(const bool bWasSuccessful, const int32 RetCode, const struct FSendPhotoLike& OutSendPhotoLike)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "OnSendPhotoLikeDelegate_Event");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.RetCode = RetCode;
	Parms.OutSendPhotoLike = std::move(OutSendPhotoLike);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_Photo_Thumbnail_C::BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_Photo_Thumbnail_C::BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.DownLoadPhoto
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::DownLoadPhoto(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "DownLoadPhoto");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto Parms{};

	Parms.URL = std::move(URL);
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunicateSettingMenu_Photo_Thumbnail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetThumbnail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::SetThumbnail(class UTexture2DDynamic* Texture, float InScale, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "SetThumbnail");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail Parms{};

	Parms.Texture = Texture;
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_Photo_Thumbnail_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::SetURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "SetURL");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_SetURL Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetUrl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_URL_Thumbnail                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_Photo_Thumbnail_C::GetUrl(class FString* Param_URL_Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "GetUrl");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_GetUrl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_URL_Thumbnail != nullptr)
		*Param_URL_Thumbnail = std::move(Parms.Param_URL_Thumbnail);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_Photo_Thumbnail_C::SetBtnEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "SetBtnEnable");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsMe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPlayerId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_Photo_Thumbnail_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId, bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "Init");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_Init Parms{};

	Parms.InIsMe = InIsMe;
	Parms.InPlayerId = std::move(InPlayerId);
	Parms.InCharacterId = std::move(InCharacterId);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetBtnStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCommunicateSettingMenu_Photo_Thumbnail_C::GetBtnStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_Photo_Thumbnail_C", "GetBtnStatus");

	Params::CommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


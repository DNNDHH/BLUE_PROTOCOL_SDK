#pragma once

 

// Package: PhotoList

#include "Basic.hpp"

#include "PhotoList_classes.hpp"
#include "PhotoList_parameters.hpp"


namespace SDK
{

// Function PhotoList.PhotoList_C.PhotoButtonClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPhotoList_C::PhotoButtonClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "PhotoButtonClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.PhotoButtonCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPhotoList_C::PhotoButtonCloseEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "PhotoButtonCloseEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.OnClickedThumbnail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPhotoList_C::OnClickedThumbnail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "OnClickedThumbnail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.OnClicked_PhotoLikeBtn__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnableList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPhotoList_C::OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "OnClicked_PhotoLikeBtn__DelegateSignature");

	Params::PhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnableList = std::move(OutLikeBtnEnableList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnableList = std::move(Parms.OutLikeBtnEnableList);
}


// Function PhotoList.PhotoList_C.ExecuteUbergraph_PhotoList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoList_C::ExecuteUbergraph_PhotoList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "ExecuteUbergraph_PhotoList");

	Params::PhotoList_C_ExecuteUbergraph_PhotoList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           OutPhotoModeImageId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutLikeCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature");

	Params::PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature Parms{};

	Parms.OutPhotoModeImageId = std::move(OutPhotoModeImageId);
	Parms.OutLikeCount = OutLikeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           OutPhotoModeImageId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutLikeCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature");

	Params::PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature Parms{};

	Parms.OutPhotoModeImageId = std::move(OutPhotoModeImageId);
	Parms.OutLikeCount = OutLikeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           OutPhotoModeImageId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutLikeCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature");

	Params::PhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature Parms{};

	Parms.OutPhotoModeImageId = std::move(OutPhotoModeImageId);
	Parms.OutLikeCount = OutLikeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.OnClickedThumbnail_3
// (BlueprintCallable, BlueprintEvent)

void UPhotoList_C::OnClickedThumbnail_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "OnClickedThumbnail_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.OnClickedThumbnail_2
// (BlueprintCallable, BlueprintEvent)

void UPhotoList_C::OnClickedThumbnail_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "OnClickedThumbnail_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.OnClickedThumbnail_1
// (BlueprintCallable, BlueprintEvent)

void UPhotoList_C::OnClickedThumbnail_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "OnClickedThumbnail_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPhotoList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.CloseEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UPhotoList_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "CloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.DownloadThumbnail1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::DownloadThumbnail1(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "DownloadThumbnail1");

	Params::PhotoList_C_DownloadThumbnail1 Parms{};

	Parms.URL = std::move(URL);
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.DownloadThumbnail2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::DownloadThumbnail2(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "DownloadThumbnail2");

	Params::PhotoList_C_DownloadThumbnail2 Parms{};

	Parms.URL = std::move(URL);
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.DownloadThumbnail3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::DownloadThumbnail3(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "DownloadThumbnail3");

	Params::PhotoList_C_DownloadThumbnail3 Parms{};

	Parms.URL = std::move(URL);
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.GetThumbnail1URL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           URL_Thumbnail                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::GetThumbnail1URL(class FString* URL_Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "GetThumbnail1URL");

	Params::PhotoList_C_GetThumbnail1URL Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (URL_Thumbnail != nullptr)
		*URL_Thumbnail = std::move(Parms.URL_Thumbnail);
}


// Function PhotoList.PhotoList_C.GetThumbnail2URL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           URL_Thumbnail                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::GetThumbnail2URL(class FString* URL_Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "GetThumbnail2URL");

	Params::PhotoList_C_GetThumbnail2URL Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (URL_Thumbnail != nullptr)
		*URL_Thumbnail = std::move(Parms.URL_Thumbnail);
}


// Function PhotoList.PhotoList_C.GetThumbnail3URL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           URL_Thumbnail                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::GetThumbnail3URL(class FString* URL_Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "GetThumbnail3URL");

	Params::PhotoList_C_GetThumbnail3URL Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (URL_Thumbnail != nullptr)
		*URL_Thumbnail = std::move(Parms.URL_Thumbnail);
}


// Function PhotoList.PhotoList_C.GetThumbnailURL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UPhotoList_C::GetThumbnailURL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "GetThumbnailURL");

	Params::PhotoList_C_GetThumbnailURL Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PhotoList.PhotoList_C.ResetFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UPhotoList_C::ResetFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "ResetFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoList.PhotoList_C.SetThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsClick_Thumbnail1                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsClick_Thumbnail2                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsClick_Thumbnail3                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoList_C::SetThumbnail(bool Param_IsClick_Thumbnail1, bool Param_IsClick_Thumbnail2, bool Param_IsClick_Thumbnail3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "SetThumbnail");

	Params::PhotoList_C_SetThumbnail Parms{};

	Parms.Param_IsClick_Thumbnail1 = Param_IsClick_Thumbnail1;
	Parms.Param_IsClick_Thumbnail2 = Param_IsClick_Thumbnail2;
	Parms.Param_IsClick_Thumbnail3 = Param_IsClick_Thumbnail3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Thumbnail1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Thumbnail2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Thumbnail3                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoList_C::Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "Reset");

	Params::PhotoList_C_Reset Parms{};

	Parms.Thumbnail1 = Thumbnail1;
	Parms.Thumbnail2 = Thumbnail2;
	Parms.Thumbnail3 = Thumbnail3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.SetBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoList_C::SetBtnEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "SetBtnEnable");

	Params::PhotoList_C_SetBtnEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsMe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPlayerId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoList_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "Init");

	Params::PhotoList_C_Init Parms{};

	Parms.InIsMe = InIsMe;
	Parms.InPlayerId = std::move(InPlayerId);
	Parms.InCharacterId = std::move(InCharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoList.PhotoList_C.LikeCounterChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoList_C::LikeCounterChange(const class FString& InPhotoModeImageId, int32 InLikeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoList_C", "LikeCounterChange");

	Params::PhotoList_C_LikeCounterChange Parms{};

	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);
	Parms.InLikeCount = InLikeCount;

	UObject::ProcessEvent(Func, &Parms);
}

}


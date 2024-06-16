#pragma once

 

// Package: AdventureCardSwitchTab

#include "Basic.hpp"

#include "AdventureCardSwitchTab_classes.hpp"
#include "AdventureCardSwitchTab_parameters.hpp"


namespace SDK
{

// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::OnPhotoButtonClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnPhotoButtonClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::OnPhotoButtonCloseEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnPhotoButtonCloseEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::OnClickedThumbnail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnClickedThumbnail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickSubButtonEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::OnClickSubButtonEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnClickSubButtonEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedEquipList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnClickedEquipList__DelegateSignature");

	Params::AdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature Parms{};

	Parms.OutItemId = OutItemId;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnCliked_PhotoLikeBtn__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnableList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAdventureCardSwitchTab_C::OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnCliked_PhotoLikeBtn__DelegateSignature");

	Params::AdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnableList = std::move(OutLikeBtnEnableList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnableList = std::move(Parms.OutLikeBtnEnableList);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ExecuteUbergraph_AdventureCardSwitchTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::ExecuteUbergraph_AdventureCardSwitchTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "ExecuteUbergraph_AdventureCardSwitchTab");

	Params::AdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnableList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature");

	Params::AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnableList = std::move(OutLikeBtnEnableList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnableList = std::move(Parms.OutLikeBtnEnableList);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature");

	Params::AdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature Parms{};

	Parms.OutItemId = OutItemId;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
// (BlueprintEvent)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail_Event
// (BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::OnClickedThumbnail_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "OnClickedThumbnail_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClose_Event
// (BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::PhotoButtonClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "PhotoButtonClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClick_Event
// (BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::PhotoButtonClick_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "PhotoButtonClick_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAdventureCardSwitchTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.GetThumbnailTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           URL_Thumbnail                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::GetThumbnailTexture(class FString* URL_Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "GetThumbnailTexture");

	Params::AdventureCardSwitchTab_C_GetThumbnailTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (URL_Thumbnail != nullptr)
		*URL_Thumbnail = std::move(Parms.URL_Thumbnail);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetEquipListData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InToolTipsEnable                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     InMountImagine                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAdventureCardSwitchTab_C::SetEquipListData(bool InToolTipsEnable, const struct FOwnItemInfo& InMountImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetEquipListData");

	Params::AdventureCardSwitchTab_C_SetEquipListData Parms{};

	Parms.InToolTipsEnable = InToolTipsEnable;
	Parms.InMountImagine = std::move(InMountImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoListData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfilePhotoTrimmingInfo>PhotoTrimmingInfoList                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAdventureCardSwitchTab_C::SetPhotoListData(TArray<struct FPlayerProfilePhotoTrimmingInfo>& PhotoTrimmingInfoList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetPhotoListData");

	Params::AdventureCardSwitchTab_C_SetPhotoListData Parms{};

	Parms.PhotoTrimmingInfoList = std::move(PhotoTrimmingInfoList);

	UObject::ProcessEvent(Func, &Parms);

	PhotoTrimmingInfoList = std::move(Parms.PhotoTrimmingInfoList);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ResetFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UAdventureCardSwitchTab_C::ResetFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "ResetFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.IsActivePhoto
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAdventureCardSwitchTab_C::IsActivePhoto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "IsActivePhoto");

	Params::AdventureCardSwitchTab_C_IsActivePhoto Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Button Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnPhotoButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OnCostumeButton                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OnWeaponButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OnMilitaryRecordButton                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdventureCardSwitchTab_C::Set_Button_Selected(bool OnPhotoButton, bool OnCostumeButton, bool OnWeaponButton, bool OnMilitaryRecordButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "Set Button Selected");

	Params::AdventureCardSwitchTab_C_Set_Button_Selected Parms{};

	Parms.OnPhotoButton = OnPhotoButton;
	Parms.OnCostumeButton = OnCostumeButton;
	Parms.OnWeaponButton = OnWeaponButton;
	Parms.OnMilitaryRecordButton = OnMilitaryRecordButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Thumbnail1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Thumbnail2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Thumbnail3                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdventureCardSwitchTab_C::Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "Reset");

	Params::AdventureCardSwitchTab_C_Reset Parms{};

	Parms.Thumbnail1 = Thumbnail1;
	Parms.Thumbnail2 = Thumbnail2;
	Parms.Thumbnail3 = Thumbnail3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEnableLikeCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::SetUserPhoto1(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsEnableLikeCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetUserPhoto1");

	Params::AdventureCardSwitchTab_C_SetUserPhoto1 Parms{};

	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.URL = std::move(URL);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsEnableLikeCount = InIsEnableLikeCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::SetUserPhoto2(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetUserPhoto2");

	Params::AdventureCardSwitchTab_C_SetUserPhoto2 Parms{};

	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.URL = std::move(URL);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InLikeCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsLikeEnableCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPhotoModeImageId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::SetUserPhoto3(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetUserPhoto3");

	Params::AdventureCardSwitchTab_C_SetUserPhoto3 Parms{};

	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.URL = std::move(URL);
	Parms.InLikeCount = InLikeCount;
	Parms.InIsLikeEnableCount = InIsLikeEnableCount;
	Parms.InPhotoModeImageId = std::move(InPhotoModeImageId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdventureCardSwitchTab_C::SetPhotoBtnEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetPhotoBtnEnable");

	Params::AdventureCardSwitchTab_C_SetPhotoBtnEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsMe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InPlayerId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventureCardSwitchTab_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "Init");

	Params::AdventureCardSwitchTab_C_Init Parms{};

	Parms.InIsMe = InIsMe;
	Parms.InPlayerId = std::move(InPlayerId);
	Parms.InCharacterId = std::move(InCharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Military Record List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMilitaryRecordData>      InMilitaryRecordList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InIsMilitalyRecordOpen                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdventureCardSwitchTab_C::Set_Military_Record_List(TArray<struct FMilitaryRecordData>& InMilitaryRecordList, const bool InIsMilitalyRecordOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "Set Military Record List");

	Params::AdventureCardSwitchTab_C_Set_Military_Record_List Parms{};

	Parms.InMilitaryRecordList = std::move(InMilitaryRecordList);
	Parms.InIsMilitalyRecordOpen = InIsMilitalyRecordOpen;

	UObject::ProcessEvent(Func, &Parms);

	InMilitaryRecordList = std::move(Parms.InMilitaryRecordList);
}


// Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetOtherPCEquipData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAdventureCardSwitchTab_C::SetOtherPCEquipData(const struct FPlayerProfileMenuDetailData& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventureCardSwitchTab_C", "SetOtherPCEquipData");

	Params::AdventureCardSwitchTab_C_SetOtherPCEquipData Parms{};

	Parms.InData = std::move(InData);

	UObject::ProcessEvent(Func, &Parms);
}

}


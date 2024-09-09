/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetOtherPCEquipData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAdventureCardSwitchTab_C::SetOtherPCEquipData(const struct FPlayerProfileMenuDetailData& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetOtherPCEquipData");
		
		UAdventureCardSwitchTab_C_SetOtherPCEquipData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Military Record List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMilitaryRecordData>                 InMilitaryRecordList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InIsMilitalyRecordOpen                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventureCardSwitchTab_C::SetMilitaryRecordList(TArray<struct FMilitaryRecordData>* InMilitaryRecordList, bool InIsMilitalyRecordOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Military Record List");
		
		UAdventureCardSwitchTab_C_SetMilitaryRecordList_Params params {};
		params.InIsMilitalyRecordOpen = InIsMilitalyRecordOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMilitaryRecordList != nullptr)
			*InMilitaryRecordList = params.InMilitaryRecordList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsMe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPlayerId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Init");
		
		UAdventureCardSwitchTab_C_Init_Params params {};
		params.InIsMe = InIsMe;
		params.InPlayerId = InPlayerId;
		params.InCharacterId = InCharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventureCardSwitchTab_C::SetPhotoBtnEnable(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoBtnEnable");
		
		UAdventureCardSwitchTab_C_SetPhotoBtnEnable_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::SetUserPhoto3(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto3");
		
		UAdventureCardSwitchTab_C_SetUserPhoto3_Params params {};
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.URL = URL;
		params.InLikeCount = InLikeCount;
		params.InIsLikeEnableCount = InIsLikeEnableCount;
		params.InPhotoModeImageId = InPhotoModeImageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::SetUserPhoto2(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto2");
		
		UAdventureCardSwitchTab_C_SetUserPhoto2_Params params {};
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.URL = URL;
		params.InLikeCount = InLikeCount;
		params.InIsLikeEnableCount = InIsLikeEnableCount;
		params.InPhotoModeImageId = InPhotoModeImageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEnableLikeCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::SetUserPhoto1(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32_t InLikeCount, bool InIsEnableLikeCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto1");
		
		UAdventureCardSwitchTab_C_SetUserPhoto1_Params params {};
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.URL = URL;
		params.InLikeCount = InLikeCount;
		params.InIsEnableLikeCount = InIsEnableLikeCount;
		params.InPhotoModeImageId = InPhotoModeImageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Thumbnail1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Thumbnail2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Thumbnail3                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventureCardSwitchTab_C::Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Reset");
		
		UAdventureCardSwitchTab_C_Reset_Params params {};
		params.Thumbnail1 = Thumbnail1;
		params.Thumbnail2 = Thumbnail2;
		params.Thumbnail3 = Thumbnail3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Button Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnPhotoButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnCostumeButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnWeaponButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnMilitaryRecordButton                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventureCardSwitchTab_C::SetButtonSelected(bool OnPhotoButton, bool OnCostumeButton, bool OnWeaponButton, bool OnMilitaryRecordButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Button Selected");
		
		UAdventureCardSwitchTab_C_SetButtonSelected_Params params {};
		params.OnPhotoButton = OnPhotoButton;
		params.OnCostumeButton = OnCostumeButton;
		params.OnWeaponButton = OnWeaponButton;
		params.OnMilitaryRecordButton = OnMilitaryRecordButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.IsActivePhoto
	 * 		Flags  -> ()
	 */
	bool UAdventureCardSwitchTab_C::IsActivePhoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.IsActivePhoto");
		
		UAdventureCardSwitchTab_C_IsActivePhoto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ResetFlag
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::ResetFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ResetFlag");
		
		UAdventureCardSwitchTab_C_ResetFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoListData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfilePhotoTrimmingInfo>     PhotoTrimmingInfoList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAdventureCardSwitchTab_C::SetPhotoListData(TArray<struct FPlayerProfilePhotoTrimmingInfo>* PhotoTrimmingInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoListData");
		
		UAdventureCardSwitchTab_C_SetPhotoListData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PhotoTrimmingInfoList != nullptr)
			*PhotoTrimmingInfoList = params.PhotoTrimmingInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetEquipListData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InToolTipsEnable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOwnItemInfo                                InMountImagine                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAdventureCardSwitchTab_C::SetEquipListData(bool InToolTipsEnable, const struct FOwnItemInfo& InMountImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetEquipListData");
		
		UAdventureCardSwitchTab_C_SetEquipListData_Params params {};
		params.InToolTipsEnable = InToolTipsEnable;
		params.InMountImagine = InMountImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.GetThumbnailTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL_Thumbnail                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::GetThumbnailTexture(class FString* URL_Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.GetThumbnailTexture");
		
		UAdventureCardSwitchTab_C_GetThumbnailTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL_Thumbnail != nullptr)
			*URL_Thumbnail = params.URL_Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Construct");
		
		UAdventureCardSwitchTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClick_Event
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::PhotoButtonClick_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClick_Event");
		
		UAdventureCardSwitchTab_C_PhotoButtonClick_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClose_Event
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::PhotoButtonClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClose_Event");
		
		UAdventureCardSwitchTab_C_PhotoButtonClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail_Event
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::OnClickedThumbnail_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail_Event");
		
		UAdventureCardSwitchTab_C_OnClickedThumbnail_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutItemId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature_Params params {};
		params.OutItemId = OutItemId;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnableList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAdventureCardSwitchTab_C::BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature");
		
		UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLikeCountList != nullptr)
			*outLikeCountList = params.outLikeCountList;
		if (outLikeBtnEnableList != nullptr)
			*outLikeBtnEnableList = params.outLikeBtnEnableList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ExecuteUbergraph_AdventureCardSwitchTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::ExecuteUbergraph_AdventureCardSwitchTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ExecuteUbergraph_AdventureCardSwitchTab");
		
		UAdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnCliked_PhotoLikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnableList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAdventureCardSwitchTab_C::OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnCliked_PhotoLikeBtn__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLikeCountList != nullptr)
			*outLikeCountList = params.outLikeCountList;
		if (outLikeBtnEnableList != nullptr)
			*outLikeBtnEnableList = params.outLikeBtnEnableList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedEquipList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutItemId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAdventureCardSwitchTab_C::OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedEquipList__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature_Params params {};
		params.OutItemId = OutItemId;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickSubButtonEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::OnClickSubButtonEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickSubButtonEvent__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnClickSubButtonEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::OnClickedThumbnail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnClickedThumbnail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonCloseEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::OnPhotoButtonCloseEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonCloseEvent__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnPhotoButtonCloseEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventureCardSwitchTab_C::OnPhotoButtonClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonClickEvent__DelegateSignature");
		
		UAdventureCardSwitchTab_C_OnPhotoButtonClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventureCardSwitchTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventureCardSwitchTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventureCardSwitchTab.AdventureCardSwitchTab_C");
		return ptr;
	}

}



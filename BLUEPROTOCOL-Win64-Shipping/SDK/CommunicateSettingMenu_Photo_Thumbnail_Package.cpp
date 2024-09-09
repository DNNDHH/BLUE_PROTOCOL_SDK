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
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetBtnStatus
	 * 		Flags  -> ()
	 */
	bool UCommunicateSettingMenu_Photo_Thumbnail_C::GetBtnStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetBtnStatus");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsMe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPlayerId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId, bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Init");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_Init_Params params {};
		params.InIsMe = InIsMe;
		params.InPlayerId = InPlayerId;
		params.InCharacterId = InCharacterId;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::SetBtnEnable(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetBtnEnable");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL_Thumbnail                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::GetUrl(class FString* URL_Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetUrl");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL_Thumbnail != nullptr)
			*URL_Thumbnail = params.URL_Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::SetURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetURL");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_SetURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Reset
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Reset");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::SetThumbnail(class UTexture2DDynamic* Texture, float InScale, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetThumbnail");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail_Params params {};
		params.Texture = Texture;
		params.InScale = InScale;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Construct");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.DownLoadPhoto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::DownLoadPhoto(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.DownLoadPhoto");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto_Params params {};
		params.URL = URL;
		params.InScale = InScale;
		params.InPosition = InPosition;
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
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnSendPhotoLikeDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSendPhotoLike                              outSendPhotoLike                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::OnSendPhotoLikeDelegate_Event(bool bWasSuccessful, int32_t RetCode, const struct FSendPhotoLike& outSendPhotoLike)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnSendPhotoLikeDelegate_Event");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.RetCode = RetCode;
		params.outSendPhotoLike = outSendPhotoLike;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_LikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      outPhotoModeImageId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            outLikeCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_LikeBtn__DelegateSignature");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature_Params params {};
		params.outPhotoModeImageId = outPhotoModeImageId;
		params.outLikeCount = outLikeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_Thumbnail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_Thumbnail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_Thumbnail__DelegateSignature");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_Thumbnail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_CheckBox__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_CheckBox__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_CheckBox__DelegateSignature");
		
		UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_Photo_Thumbnail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_Photo_Thumbnail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C");
		return ptr;
	}

}



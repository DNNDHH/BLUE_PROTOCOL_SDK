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
	 * 		Name   -> Function PhotoList.PhotoList_C.LikeCounterChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::LikeCounterChange(const class FString& InPhotoModeImageId, int32_t InLikeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.LikeCounterChange");
		
		UPhotoList_C_LikeCounterChange_Params params {};
		params.InPhotoModeImageId = InPhotoModeImageId;
		params.InLikeCount = InLikeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsMe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPlayerId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.Init");
		
		UPhotoList_C_Init_Params params {};
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
	 * 		Name   -> Function PhotoList.PhotoList_C.SetBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhotoList_C::SetBtnEnable(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.SetBtnEnable");
		
		UPhotoList_C_SetBtnEnable_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Thumbnail1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Thumbnail2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Thumbnail3                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhotoList_C::Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.Reset");
		
		UPhotoList_C_Reset_Params params {};
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
	 * 		Name   -> Function PhotoList.PhotoList_C.SetThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClick_Thumbnail1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClick_Thumbnail2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClick_Thumbnail3                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhotoList_C::SetThumbnail(bool IsClick_Thumbnail1, bool IsClick_Thumbnail2, bool IsClick_Thumbnail3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.SetThumbnail");
		
		UPhotoList_C_SetThumbnail_Params params {};
		params.IsClick_Thumbnail1 = IsClick_Thumbnail1;
		params.IsClick_Thumbnail2 = IsClick_Thumbnail2;
		params.IsClick_Thumbnail3 = IsClick_Thumbnail3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.ResetFlag
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::ResetFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.ResetFlag");
		
		UPhotoList_C_ResetFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.GetThumbnailURL
	 * 		Flags  -> ()
	 */
	class FString UPhotoList_C::GetThumbnailURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.GetThumbnailURL");
		
		UPhotoList_C_GetThumbnailURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.GetThumbnail3URL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL_Thumbnail                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::GetThumbnail3URL(class FString* URL_Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.GetThumbnail3URL");
		
		UPhotoList_C_GetThumbnail3URL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL_Thumbnail != nullptr)
			*URL_Thumbnail = params.URL_Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.GetThumbnail2URL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL_Thumbnail                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::GetThumbnail2URL(class FString* URL_Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.GetThumbnail2URL");
		
		UPhotoList_C_GetThumbnail2URL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL_Thumbnail != nullptr)
			*URL_Thumbnail = params.URL_Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.GetThumbnail1URL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL_Thumbnail                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::GetThumbnail1URL(class FString* URL_Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.GetThumbnail1URL");
		
		UPhotoList_C_GetThumbnail1URL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL_Thumbnail != nullptr)
			*URL_Thumbnail = params.URL_Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.DownloadThumbnail3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::DownloadThumbnail3(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.DownloadThumbnail3");
		
		UPhotoList_C_DownloadThumbnail3_Params params {};
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
	 * 		Name   -> Function PhotoList.PhotoList_C.DownloadThumbnail2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::DownloadThumbnail2(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.DownloadThumbnail2");
		
		UPhotoList_C_DownloadThumbnail2_Params params {};
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
	 * 		Name   -> Function PhotoList.PhotoList_C.DownloadThumbnail1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLikeCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsLikeEnableCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InPhotoModeImageId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::DownloadThumbnail1(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32_t InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.DownloadThumbnail1");
		
		UPhotoList_C_DownloadThumbnail1_Params params {};
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
	 * 		Name   -> Function PhotoList.PhotoList_C.CloseEvent
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::CloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.CloseEvent");
		
		UPhotoList_C_CloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.Construct
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.Construct");
		
		UPhotoList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.OnClickedThumbnail_2
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::OnClickedThumbnail_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.OnClickedThumbnail_2");
		
		UPhotoList_C_OnClickedThumbnail_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.OnClickedThumbnail_3
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::OnClickedThumbnail_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.OnClickedThumbnail_3");
		
		UPhotoList_C_OnClickedThumbnail_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.OnClickedThumbnail_4
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::OnClickedThumbnail_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.OnClickedThumbnail_4");
		
		UPhotoList_C_OnClickedThumbnail_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      outPhotoModeImageId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            outLikeCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature");
		
		UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature_Params params {};
		params.outPhotoModeImageId = outPhotoModeImageId;
		params.outLikeCount = outLikeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      outPhotoModeImageId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            outLikeCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature");
		
		UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature_Params params {};
		params.outPhotoModeImageId = outPhotoModeImageId;
		params.outLikeCount = outLikeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      outPhotoModeImageId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            outLikeCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature(const class FString& outPhotoModeImageId, int32_t outLikeCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature");
		
		UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature_Params params {};
		params.outPhotoModeImageId = outPhotoModeImageId;
		params.outLikeCount = outLikeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.ExecuteUbergraph_PhotoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoList_C::ExecuteUbergraph_PhotoList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.ExecuteUbergraph_PhotoList");
		
		UPhotoList_C_ExecuteUbergraph_PhotoList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.OnClicked_PhotoLikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnableList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPhotoList_C::OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.OnClicked_PhotoLikeBtn__DelegateSignature");
		
		UPhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature_Params params {};
		
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
	 * 		Name   -> Function PhotoList.PhotoList_C.OnClickedThumbnail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::OnClickedThumbnail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.OnClickedThumbnail__DelegateSignature");
		
		UPhotoList_C_OnClickedThumbnail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.PhotoButtonCloseEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::PhotoButtonCloseEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.PhotoButtonCloseEvent__DelegateSignature");
		
		UPhotoList_C_PhotoButtonCloseEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoList.PhotoList_C.PhotoButtonClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPhotoList_C::PhotoButtonClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoList.PhotoList_C.PhotoButtonClickEvent__DelegateSignature");
		
		UPhotoList_C_PhotoButtonClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhotoList.PhotoList_C");
		return ptr;
	}

}



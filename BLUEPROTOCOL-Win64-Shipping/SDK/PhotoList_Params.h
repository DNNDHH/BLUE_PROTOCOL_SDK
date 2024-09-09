#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PhotoList.PhotoList_C.LikeCounterChange
	 */
	struct UPhotoList_C_LikeCounterChange_Params
	{
	public:
		class FString                                              InPhotoModeImageId;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KEPN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PhotoList.PhotoList_C.Init
	 */
	struct UPhotoList_C_Init_Params
	{
	public:
		bool                                                       InIsMe;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TY18[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPlayerId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InCharacterId;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.SetBtnEnable
	 */
	struct UPhotoList_C_SetBtnEnable_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoList.PhotoList_C.Reset
	 */
	struct UPhotoList_C_Reset_Params
	{
	public:
		bool                                                       Thumbnail1;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Thumbnail2;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Thumbnail3;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoList.PhotoList_C.SetThumbnail
	 */
	struct UPhotoList_C_SetThumbnail_Params
	{
	public:
		bool                                                       IsClick_Thumbnail1;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClick_Thumbnail2;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClick_Thumbnail3;                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoList.PhotoList_C.ResetFlag
	 */
	struct UPhotoList_C_ResetFlag_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.GetThumbnailURL
	 */
	struct UPhotoList_C_GetThumbnailURL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.GetThumbnail3URL
	 */
	struct UPhotoList_C_GetThumbnail3URL_Params
	{
	public:
		class FString                                              URL_Thumbnail;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.GetThumbnail2URL
	 */
	struct UPhotoList_C_GetThumbnail2URL_Params
	{
	public:
		class FString                                              URL_Thumbnail;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.GetThumbnail1URL
	 */
	struct UPhotoList_C_GetThumbnail1URL_Params
	{
	public:
		class FString                                              URL_Thumbnail;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.DownloadThumbnail3
	 */
	struct UPhotoList_C_DownloadThumbnail3_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_82U9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.DownloadThumbnail2
	 */
	struct UPhotoList_C_DownloadThumbnail2_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HSK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.DownloadThumbnail1
	 */
	struct UPhotoList_C_DownloadThumbnail1_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MPBJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.CloseEvent
	 */
	struct UPhotoList_C_CloseEvent_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.Construct
	 */
	struct UPhotoList_C_Construct_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.OnClickedThumbnail_2
	 */
	struct UPhotoList_C_OnClickedThumbnail_2_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.OnClickedThumbnail_3
	 */
	struct UPhotoList_C_OnClickedThumbnail_3_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.OnClickedThumbnail_4
	 */
	struct UPhotoList_C_OnClickedThumbnail_4_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature
	 */
	struct UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature_Params
	{
	public:
		class FString                                              outPhotoModeImageId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    outLikeCount;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature
	 */
	struct UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature_Params
	{
	public:
		class FString                                              outPhotoModeImageId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    outLikeCount;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature
	 */
	struct UPhotoList_C_BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature_Params
	{
	public:
		class FString                                              outPhotoModeImageId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    outLikeCount;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoList.PhotoList_C.ExecuteUbergraph_PhotoList
	 */
	struct UPhotoList_C_ExecuteUbergraph_PhotoList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PhotoList.PhotoList_C.OnClicked_PhotoLikeBtn__DelegateSignature
	 */
	struct UPhotoList_C_OnClicked_PhotoLikeBtn__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnableList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PhotoList.PhotoList_C.OnClickedThumbnail__DelegateSignature
	 */
	struct UPhotoList_C_OnClickedThumbnail__DelegateSignature_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.PhotoButtonCloseEvent__DelegateSignature
	 */
	struct UPhotoList_C_PhotoButtonCloseEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PhotoList.PhotoList_C.PhotoButtonClickEvent__DelegateSignature
	 */
	struct UPhotoList_C_PhotoButtonClickEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

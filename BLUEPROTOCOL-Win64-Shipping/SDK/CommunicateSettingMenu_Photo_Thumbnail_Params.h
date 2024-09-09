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
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetBtnStatus
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_GetBtnStatus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1T0B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Init
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_Init_Params
	{
	public:
		bool                                                       InIsMe;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HZPF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPlayerId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InCharacterId;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Index;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetBtnEnable
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_SetBtnEnable_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.GetUrl
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_GetUrl_Params
	{
	public:
		class FString                                              URL_Thumbnail;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetURL
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_SetURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Reset
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_Reset_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.SetThumbnail
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_SetThumbnail_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.Construct
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_Construct_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.DownLoadPhoto
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_DownLoadPhoto_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      InScale;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2MFE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnSendPhotoLikeDelegate_Event
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_OnSendPhotoLikeDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSHX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSendPhotoLike                                      outSendPhotoLike;                                        // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NJRC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_LikeBtn__DelegateSignature
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_LikeBtn__DelegateSignature_Params
	{
	public:
		class FString                                              outPhotoModeImageId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    outLikeCount;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_Thumbnail__DelegateSignature
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_Thumbnail__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C.OnClicked_CheckBox__DelegateSignature
	 */
	struct UCommunicateSettingMenu_Photo_Thumbnail_C_OnClicked_CheckBox__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

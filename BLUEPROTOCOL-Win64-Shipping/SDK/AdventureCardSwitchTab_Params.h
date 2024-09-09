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
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetOtherPCEquipData
	 */
	struct UAdventureCardSwitchTab_C_SetOtherPCEquipData_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        InData;                                                  // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Military Record List
	 */
	struct UAdventureCardSwitchTab_C_SetMilitaryRecordList_Params
	{
	public:
		TArray<struct FMilitaryRecordData>                         InMilitaryRecordList;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InIsMilitalyRecordOpen;                                  // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Init
	 */
	struct UAdventureCardSwitchTab_C_Init_Params
	{
	public:
		bool                                                       InIsMe;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EULL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPlayerId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InCharacterId;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoBtnEnable
	 */
	struct UAdventureCardSwitchTab_C_SetPhotoBtnEnable_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto3
	 */
	struct UAdventureCardSwitchTab_C_SetUserPhoto3_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W6WY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DHLB[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto2
	 */
	struct UAdventureCardSwitchTab_C_SetUserPhoto2_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZZBC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsLikeEnableCount;                                     // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTT9[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetUserPhoto1
	 */
	struct UAdventureCardSwitchTab_C_SetUserPhoto1_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FCB3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InLikeCount;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsEnableLikeCount;                                     // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5EKD[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InPhotoModeImageId;                                      // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Reset
	 */
	struct UAdventureCardSwitchTab_C_Reset_Params
	{
	public:
		bool                                                       Thumbnail1;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Thumbnail2;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Thumbnail3;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Set Button Selected
	 */
	struct UAdventureCardSwitchTab_C_SetButtonSelected_Params
	{
	public:
		bool                                                       OnPhotoButton;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnCostumeButton;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnWeaponButton;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnMilitaryRecordButton;                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.IsActivePhoto
	 */
	struct UAdventureCardSwitchTab_C_IsActivePhoto_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0N8H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ResetFlag
	 */
	struct UAdventureCardSwitchTab_C_ResetFlag_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetPhotoListData
	 */
	struct UAdventureCardSwitchTab_C_SetPhotoListData_Params
	{
	public:
		TArray<struct FPlayerProfilePhotoTrimmingInfo>             PhotoTrimmingInfoList;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.SetEquipListData
	 */
	struct UAdventureCardSwitchTab_C_SetEquipListData_Params
	{
	public:
		bool                                                       InToolTipsEnable;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XBJ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        InMountImagine;                                          // 0x0008(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.GetThumbnailTexture
	 */
	struct UAdventureCardSwitchTab_C_GetThumbnailTexture_Params
	{
	public:
		class FString                                              URL_Thumbnail;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.Construct
	 */
	struct UAdventureCardSwitchTab_C_Construct_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClick_Event
	 */
	struct UAdventureCardSwitchTab_C_PhotoButtonClick_Event_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.PhotoButtonClose_Event
	 */
	struct UAdventureCardSwitchTab_C_PhotoButtonClose_Event_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail_Event
	 */
	struct UAdventureCardSwitchTab_C_OnClickedThumbnail_Event_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutItemId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U3X8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnableList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.ExecuteUbergraph_AdventureCardSwitchTab
	 */
	struct UAdventureCardSwitchTab_C_ExecuteUbergraph_AdventureCardSwitchTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PUPY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnCliked_PhotoLikeBtn__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnCliked_PhotoLikeBtn__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnableList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedEquipList__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnClickedEquipList__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutItemId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1T43[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickSubButtonEvent__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnClickSubButtonEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnClickedThumbnail__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnClickedThumbnail__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonCloseEvent__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnPhotoButtonCloseEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AdventureCardSwitchTab.AdventureCardSwitchTab_C.OnPhotoButtonClickEvent__DelegateSignature
	 */
	struct UAdventureCardSwitchTab_C_OnPhotoButtonClickEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.Set Btn
	 */
	struct UPictureBook_BtnWishList_C_SetBtn_Params
	{
	public:
		bool                                                       IsRegist;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CMK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetHoveredSoundId
	 */
	struct UPictureBook_BtnWishList_C_SetHoveredSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetPressedSoundId
	 */
	struct UPictureBook_BtnWishList_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.SetText
	 */
	struct UPictureBook_BtnWishList_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.PreConstruct
	 */
	struct UPictureBook_BtnWishList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPictureBook_BtnWishList_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.ExecuteUbergraph_PictureBook_BtnWishList
	 */
	struct UPictureBook_BtnWishList_C_ExecuteUbergraph_PictureBook_BtnWishList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTZ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_BtnWishList.PictureBook_BtnWishList_C.EventOnClicked__DelegateSignature
	 */
	struct UPictureBook_BtnWishList_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

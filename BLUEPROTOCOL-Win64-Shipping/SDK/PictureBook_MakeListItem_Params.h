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
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetTermId
	 */
	struct UPictureBook_MakeListItem_C_SetTermId_Params
	{
	public:
		class FString                                              TermId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.CheckAdventurerRank
	 */
	struct UPictureBook_MakeListItem_C_CheckAdventurerRank_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KMG9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetWishlistBtnEnable
	 */
	struct UPictureBook_MakeListItem_C_SetWishlistBtnEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetNew
	 */
	struct UPictureBook_MakeListItem_C_SetNew_Params
	{
	public:
		bool                                                       IsRead;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAddRead;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetSecret
	 */
	struct UPictureBook_MakeListItem_C_SetSecret_Params
	{
	public:
		bool                                                       IsSecret;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetName
	 */
	struct UPictureBook_MakeListItem_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UPictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.Construct
	 */
	struct UPictureBook_MakeListItem_C_Construct_Params
	{	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.ExecuteUbergraph_PictureBook_MakeListItem
	 */
	struct UPictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.OnWishlist__DelegateSignature
	 */
	struct UPictureBook_MakeListItem_C_OnWishlist__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

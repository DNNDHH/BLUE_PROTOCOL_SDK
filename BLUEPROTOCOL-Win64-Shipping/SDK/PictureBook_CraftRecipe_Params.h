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
	 * Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.SetTermId
	 */
	struct UPictureBook_CraftRecipe_C_SetTermId_Params
	{
	public:
		class FString                                              TermId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LHQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateImagineCraftList
	 */
	struct UPictureBook_CraftRecipe_C_CreateImagineCraftList_Params
	{
	public:
		int32_t                                                    ImagineId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELibraryImagineType                                        ImagineType;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9S69[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.CreateWeaponCraftList
	 */
	struct UPictureBook_CraftRecipe_C_CreateWeaponCraftList_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J43K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UPictureBook_CraftRecipe_C_BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PictureBook_CraftRecipe.PictureBook_CraftRecipe_C.ExecuteUbergraph_PictureBook_CraftRecipe
	 */
	struct UPictureBook_CraftRecipe_C_ExecuteUbergraph_PictureBook_CraftRecipe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMU2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

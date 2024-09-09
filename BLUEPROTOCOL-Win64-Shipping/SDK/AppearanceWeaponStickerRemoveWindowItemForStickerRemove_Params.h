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
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetBtnSelected
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L745[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetIsSelectable
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable_Params
	{
	public:
		bool                                                       InIsSelectable;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetupItem
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem_Params
	{
	public:
		bool                                                       InIsStickerIndefinite;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSelectable;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_60SQ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InStickerRemoveItemId;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStickerRemoveItemHoldNum;                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ItemSelected__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature_Params
	{
	public:
		class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

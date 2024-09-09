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
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.GetStickerUse
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_GetStickerUse_Params
	{
	public:
		bool                                                       OutIsStickerUse;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetStickerBtn
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_SetStickerBtn_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetIsStickerIndefinite
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite_Params
	{
	public:
		bool                                                       InIsIndefinite;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetWeaponStickerDesc
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc_Params
	{
	public:
		struct FSBWeaponItemData                                   InWeaponData;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.PreConstruct
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.ExecuteUbergraph_AppearanceWeaponStickerDescColumn2
	 */
	struct UAppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function DescriptionWindow.DescriptionWindow_C.Refresh
	 */
	struct UDescriptionWindow_C_Refresh_Params
	{	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetMoveDescriptionWindow
	 */
	struct UDescriptionWindow_C_SetMoveDescriptionWindow_Params
	{	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsEnabled
	 */
	struct UDescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsInUse
	 */
	struct UDescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetBagStorageViewMode
	 */
	struct UDescriptionWindow_C_SetBagStorageViewMode_Params
	{
	public:
		bool                                                       bBagStorageViewMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.IsClose
	 */
	struct UDescriptionWindow_C_IsClose_Params
	{
	public:
		bool                                                       bClose;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.RefleshButton
	 */
	struct UDescriptionWindow_C_RefleshButton_Params
	{	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetRegisterMode
	 */
	struct UDescriptionWindow_C_SetRegisterMode_Params
	{
	public:
		bool                                                       IsRegisterMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.Close
	 */
	struct UDescriptionWindow_C_Close_Params
	{	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.Open
	 */
	struct UDescriptionWindow_C_Open_Params
	{
	public:
		struct FInventoryData                                      InventoryData;                                           // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetItemLoadAfter
	 */
	struct UDescriptionWindow_C_SetItemLoadAfter_Params
	{
	public:
		class UUMG_CaptureStudio_C*                                CaptureStudio;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  Selection;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.SetItem
	 */
	struct UDescriptionWindow_C_SetItem_Params
	{
	public:
		struct FInventoryData                                      InventoryData;                                           // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.PreConstruct
	 */
	struct UDescriptionWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.Construct
	 */
	struct UDescriptionWindow_C_Construct_Params
	{	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.OnButtonClicked_Bind
	 */
	struct UDescriptionWindow_C_OnButtonClicked_Bind_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
	 */
	struct UDescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 */
	struct UDescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.ExecuteUbergraph_DescriptionWindow
	 */
	struct UDescriptionWindow_C_ExecuteUbergraph_DescriptionWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
	 */
	struct UDescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerButtonPressed__DelegateSignature
	 */
	struct UDescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DescriptionWindow.DescriptionWindow_C.OnClickedButton__DelegateSignature
	 */
	struct UDescriptionWindow_C_OnClickedButton__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

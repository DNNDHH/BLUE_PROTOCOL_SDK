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
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ActivateCraftResult
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_ActivateCraftResult_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetChangeData
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetChangeData_Params
	{
	public:
		bool                                                       bChangeData;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetNewPerkVisible
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetNewPerkVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateProtectBtn
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_UpdateProtectBtn_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateSlotHeight
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_UpdateSlotHeight_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsEmpty
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_IsEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetEmpty
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetEmpty_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetItemData
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetItemData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.GetData
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_GetData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          Data;                                                    // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsProtected
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_IsProtected_Params
	{
	public:
		bool                                                       IsProtected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetProtectButtonVisible
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetProtectButtonVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetWeaponData
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_SetWeaponData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ApplyData
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_ApplyData_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ExecuteUbergraph_PlugSetMenuPartSlotBoxItem
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_ExecuteUbergraph_PlugSetMenuPartSlotBoxItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.OnProtectClicked__DelegateSignature
	 */
	struct UPlugSetMenuPartSlotBoxItem_C_OnProtectClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

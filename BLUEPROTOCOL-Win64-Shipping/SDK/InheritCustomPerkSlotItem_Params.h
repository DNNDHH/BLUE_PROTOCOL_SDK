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
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ActivateCraftResult
	 */
	struct UInheritCustomPerkSlotItem_C_ActivateCraftResult_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetChangeData
	 */
	struct UInheritCustomPerkSlotItem_C_SetChangeData_Params
	{
	public:
		bool                                                       bChangeData;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetNewPerkVisible
	 */
	struct UInheritCustomPerkSlotItem_C_SetNewPerkVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateProtectBtn
	 */
	struct UInheritCustomPerkSlotItem_C_UpdateProtectBtn_Params
	{	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateSlotHeight
	 */
	struct UInheritCustomPerkSlotItem_C_UpdateSlotHeight_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsEmpty
	 */
	struct UInheritCustomPerkSlotItem_C_IsEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetEmpty
	 */
	struct UInheritCustomPerkSlotItem_C_SetEmpty_Params
	{	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetItemData
	 */
	struct UInheritCustomPerkSlotItem_C_SetItemData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1BEF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.GetData
	 */
	struct UInheritCustomPerkSlotItem_C_GetData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          Data;                                                    // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsProtected
	 */
	struct UInheritCustomPerkSlotItem_C_IsProtected_Params
	{
	public:
		bool                                                       IsProtected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetProtectButtonVisible
	 */
	struct UInheritCustomPerkSlotItem_C_SetProtectButtonVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetWeaponData
	 */
	struct UInheritCustomPerkSlotItem_C_SetWeaponData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ApplyData
	 */
	struct UInheritCustomPerkSlotItem_C_ApplyData_Params
	{	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInheritCustomPerkSlotItem_C_BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ExecuteUbergraph_InheritCustomPerkSlotItem
	 */
	struct UInheritCustomPerkSlotItem_C_ExecuteUbergraph_InheritCustomPerkSlotItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.OnProtectClicked__DelegateSignature
	 */
	struct UInheritCustomPerkSlotItem_C_OnProtectClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

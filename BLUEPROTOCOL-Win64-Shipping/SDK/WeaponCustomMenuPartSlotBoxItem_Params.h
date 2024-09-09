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
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Color
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Color_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsMax;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetChangeShow
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetChangeShow_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.DebugPrint
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_DebugPrint_Params
	{
	public:
		class FString                                              InStr;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1WU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapUnSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapUnSelect_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleIcon
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleIcon_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapSelect_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapLock_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapRemove
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapRemove_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapAddSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapAddSlot_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapUnSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapUnSelect_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetAbilityDescToolTipWidget
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_GetAbilityDescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotBGSize
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetSlotBGSize_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowValue
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowValue_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowLock_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowNone
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowNone_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbilityChangeWindowVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbilityChangeWindowVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_IsLock_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.UpdateLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_UpdateLock_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetTagChangeValue
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_GetTagChangeValue_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          Before;                                                  // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FSBCharacterWeaponPerkData                          After;                                                   // 0x001C(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Delta;                                                   // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsOptionVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_IsOptionVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOptionVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetOptionVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLocking
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupLocking_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupLock_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupTag
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupTag_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          Before;                                                  // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FSBCharacterWeaponPerkData                          After;                                                   // 0x001C(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarity
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetRarity_Params
	{
	public:
		int32_t                                                    InRarity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarityVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetRarityVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Value
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Value_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCharacterWeaponPerkData                          InWeaponPerkData;                                        // 0x0008(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_HV7M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Name
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Name_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Visible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Visible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Color
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Color_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsMax;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Value
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Value_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCharacterWeaponPerkData                          InWeaponPerkData;                                        // 0x0008(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_2OWP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Name
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Name_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Visible
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Visible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetItemName
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetItemName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkEmpty
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetPerkEmpty_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkForItem
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetPerkForItem_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerk
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetPerk_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          WeaponPerkData;                                          // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotIcon
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetSlotIcon_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetSlot_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapSelect_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapLock
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapLock_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapRemove
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapRemove_Params
	{
	public:
		bool                                                       IsRemove;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapAddSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapAddSlot_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleButton
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleButton_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsVisibleSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_IsVisibleSelect_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleSelect_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsEmptyPerkData
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_IsEmptyPerkData_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X4KV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetPerkData
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_GetPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkData
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          InPerkData;                                              // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupEmpty
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupEmpty_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLongForItem
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupLongForItem_Params
	{
	public:
		struct FOwnItemInfo                                        InItem;                                                  // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLong
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupLong_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupShort
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_SetupShort_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Initialize
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_Initialize_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.PreConstruct
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Construct
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_Construct_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClickedLock__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_OnClickedLock__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxItem_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

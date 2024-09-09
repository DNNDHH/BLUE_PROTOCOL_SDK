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
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuningResult
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupTuningResult_Params
	{
	public:
		struct FOwnItemInfo                                        InWeaponBefore;                                          // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        InWeaponAfter;                                           // 0x0150(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            InLockSlotNo;                                            // 0x02A0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuning
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupTuning_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemoveResult
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupRemoveResult_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InSlotNo;                                                // 0x0150(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRemove;                                                // 0x0154(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GTLZ[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemove
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupRemove_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlotResult
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupAddSlotResult_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupAddSlot_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSyntheResult
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupSyntheResult_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InSlotNo;                                                // 0x0150(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSynthe
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetupSynthe_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        InFusionItem;                                            // 0x0150(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetup
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnSetup_Params
	{
	public:
		struct FOwnItemInfo                                        InWeapon;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnReset
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnReset_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetItemSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_GetItemSlot_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetChangeShow
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetChangeShow_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C7O6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotNo;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTopText
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetVisibleTopText_Params
	{
	public:
		bool                                                       InVisibleText;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVisibleInformation;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTop
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetVisibleTop_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetTopInformationText
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetTopInformationText_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.FindPerkData
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_FindPerkData_Params
	{
	public:
		TArray<struct FSBCharacterWeaponPerkData>                  PerkList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ItemId;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0014(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkData
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_GetPerkData_Params
	{
	public:
		TArray<struct FSBCharacterWeaponPerkData>                  PerkList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6BIW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0018(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotSelect_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZBE6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLockAll
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotLockAll_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJ9C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLock
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotLock_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZ0B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotLockList
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlotLockList_Params
	{
	public:
		TArray<int32_t>                                            LockList;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotList
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlotList_Params
	{
	public:
		TArray<class UWeaponCustomMenuPartSlotBoxItem_C*>          PerkSlotList;                                            // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlot
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NDW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWeaponCustomMenuPartSlotBoxItem_C*                  PerkSlot;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ClickPerkSlotLock
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_ClickPerkSlotLock_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLock;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DWYH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetupPerkSlotSelectButton
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetupPerkSlotSelectButton_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ResetPerkSlotSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_ResetPerkSlotSelect_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotSelect
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetPerkSlotSelect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JTF5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotVisible
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_SetPerkSlotVisible_Params
	{
	public:
		class UWeaponCustomMenuPartSlotBoxItem_C*                  SlotItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InVisible;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnPreConstruct
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnPreConstruct_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.PreConstruct
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.Construct
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_Construct_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature_Params
	{
	public:
		bool                                                       IsLock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnClickedPerkSlot__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnClickedPerkSlot__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNo;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnProtectNumChanged__DelegateSignature
	 */
	struct UWeaponCustomMenuPartSlotBoxL_C_OnProtectNumChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ProtectNum;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
